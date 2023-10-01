function [len_center, len_left, len_right, len_left_or, len_right_or, len_back_right, len_back_left, R_out, G_out, B_out] = droneGuidanceLines(R, G, B, BW)
    % Get image dimensions
    [rows, cols] = size(BW);
    
    % Define the drone's position (center of the image)
    drone_position = [round(rows/2), round(cols/2)];
    
    % Define the cone's angle
    angle = 30; % in degrees
    
   % Step sizes for each line based on angle
    step_center = [-1, 0]; % upward direction
    step_left = [-cosd(angle), -sind(angle)]; % angle to the left
    step_right = [-cosd(angle), sind(angle)]; % angle to the right
    step_left_or = [0, -1]; % orthogonal to the left
    step_right_or = [0, 1]; % orthogonal to the right
    step_back_left = [cosd(angle), -sind(angle)]; % angle to the left backward
    step_back_right = [cosd(angle), sind(angle)]; % angle to the right backward
    
    % Flags to check if lines should continue
    continue_center = true;
    continue_left = true;
    continue_right = true;
    continue_left_or = true;
    continue_right_or = true;
    continue_back_left = true;
    continue_back_right = true;

    % Lengths of lines initialized to 0
    len_center = 0;
    len_left = 0;
    len_right = 0;
    len_left_or = 0;
    len_right_or = 0;
    len_back_left = 0;
    len_back_right = 0;

    % Initialize RGB values and lengths
    [len_center, R, G, B] = traceLine(drone_position, step_center, BW, R, G, B);
    [len_left, R, G, B] = traceLine(drone_position, step_left, BW, R, G, B);
    [len_right, R, G, B] = traceLine(drone_position, step_right, BW, R, G, B);
    [len_left_or, R, G, B] = traceLine(drone_position, step_left_or, BW, R, G, B);
    [len_right_or, R, G, B] = traceLine(drone_position, step_right_or, BW, R, G, B);
    [len_back_left, R, G, B] = traceLine(drone_position, step_back_left, BW, R, G, B);
    [len_back_right, R, G, B] = traceLine(drone_position, step_back_right, BW, R, G, B);

     % Storing the intersections with the edge
    edge_points = [];
    
    direction_lengths = [len_center, len_left, len_right, len_left_or, len_right_or];
    directions = [step_center; step_left; step_right; step_left_or; step_right_or];
    endpoints = [drone_position + len_center*step_center;
                 drone_position + len_left*step_left; 
                 drone_position + len_right*step_right;
                 drone_position + len_left_or*step_left_or;
                 drone_position + len_right_or*step_right_or];
    
    is_edge = BW(sub2ind(size(BW), endpoints(:,1), endpoints(:,2))) == 0;
    
    edge_indices = find(is_edge);
    num_indices = length(edge_indices);
    
    % For lines ending on an edge, trace further to find the new track edge
    for i = 1:num_indices
        idx = edge_indices(i);
        new_point = endpoints(idx, :);
        continue_trace = true;
        while continue_trace
            new_point = round(new_point + directions(idx, :));
            if new_point(1) <= 0 || new_point(2) <= 0 || new_point(1) > rows || new_point(2) > cols
                continue_trace = false;  % Stop if the point is out of the image
            elseif BW(new_point(1), new_point(2)) == 0
                edge_points = [edge_points; new_point];
                break;  % Found the new direction
            end
        end
    end


    % Threshold percentage for significant difference
    threshold_percentage = 0.30;
    
    % Check for left turn
    if (len_left > (1 + threshold_percentage) * len_right) || (len_left_or > (1 + threshold_percentage) * len_right_or)
        % Left diagonal line turns blue
        for i = 1:len_left
            new_point = round(drone_position + i*step_left);
            R(new_point(1), new_point(2)) = 0;
            G(new_point(1), new_point(2)) = 0;
            B(new_point(1), new_point(2)) = 255;
        end
        % Left orthogonal line turns blue
        for i = 1:len_left_or
            new_point = round(drone_position + i*step_left_or);
            R(new_point(1), new_point(2)) = 0;
            G(new_point(1), new_point(2)) = 0;
            B(new_point(1), new_point(2)) = 255;
        end
    % Check for right turn based on the previous logic
    elseif (len_right > (1 + threshold_percentage) * len_left) || (len_right_or > (1 + threshold_percentage) * len_left_or)
        % Logic for determining type of turn
        end_point_1 = [];
        end_point_2 = [];
        if len_center <= 30
            % Check for soft turn
            if len_back_right < 40 && len_right > len_center
                if len_right >= 60
                    end_point_1 = round(drone_position + len_center*step_center);
                    end_point_2 = round(drone_position + len_left*step_left);
                    % Color the center and left diagonal lines light blue
                    for i = 1:len_center
                        new_point = round(drone_position + i*step_center);
                        R(new_point(1), new_point(2)) = 173;
                        G(new_point(1), new_point(2)) = 216;
                        B(new_point(1), new_point(2)) = 230;
                    end
                    for i = 1:len_left
                        new_point = round(drone_position + i*step_left);
                        R(new_point(1), new_point(2)) = 173;
                        G(new_point(1), new_point(2)) = 216;
                        B(new_point(1), new_point(2)) = 230;
                    end
                else
                    end_point_1 = round(drone_position + len_center*step_center);
                    end_point_2 = round(drone_position + len_right*step_right);
                    % Color the center and right diagonal lines light blue
                    for i = 1:len_center
                        new_point = round(drone_position + i*step_center);
                        R(new_point(1), new_point(2)) = 173;
                        G(new_point(1), new_point(2)) = 216;
                        B(new_point(1), new_point(2)) = 230;
                    end
                    for i = 1:len_right
                        new_point = round(drone_position + i*step_right);
                        R(new_point(1), new_point(2)) = 173;
                        G(new_point(1), new_point(2)) = 216;
                        B(new_point(1), new_point(2)) = 230;
                    end
                end
            else
                end_point_1 = round(drone_position + len_right*step_right);
                end_point_2 = round(drone_position + len_right_or*step_right_or);
                % Hard Turn: Color the right orthogonal and right diagonal lines orange
                for i = 1:len_right
                    new_point = round(drone_position + i*step_right);
                    R(new_point(1), new_point(2)) = 255;
                    G(new_point(1), new_point(2)) = 165;
                    B(new_point(1), new_point(2)) = 0;
                end
                for i = 1:len_right_or
                    new_point = round(drone_position + i*step_right_or);
                    R(new_point(1), new_point(2)) = 255;
                    G(new_point(1), new_point(2)) = 165;
                    B(new_point(1), new_point(2)) = 0;
                end
            end
        end
    end

    % % Calculate the average direction using the two end points
    % avg_delta_y = (end_point_1(1) + end_point_2(1) - 2*drone_position(1))/2;
    % avg_delta_x = (end_point_1(2) + end_point_2(2) - 2*drone_position(2))/2;
    % 
    % angle = atan2(avg_delta_y, avg_delta_x);
    
    % % Rotation matrix
    % R_matrix = [cos(angle) -sin(angle); sin(angle) cos(angle)];
    % 
    % % Rotate all direction vectors
    % rotated_step_center = R_matrix * step_center;
    % rotated_step_left = R_matrix * step_left;
    % rotated_step_right = R_matrix * step_right;
    % rotated_step_left_or = R_matrix * step_left_or;
    % rotated_step_right_or = R_matrix * step_right_or;
    % rotated_step_back_left = R_matrix * step_back_left;
    % rotated_step_back_right = R_matrix * step_back_right;


    
    % Draw a line connecting the two extreme points
    % if size(edge_points, 1) >= 2
    %     Sort points by their x-coordinate (or use y if you want vertical sorting)
    %     sorted_points = sortrows(edge_points, 1);
    %     start_point = sorted_points(1,:);
    %     end_point = sorted_points(end,:);
    %     [x_line, y_line] = ddaLine(start_point(1), start_point(2), end_point(1), end_point(2));
    % 
    % 
    %     Coloring the line segment in blue
    %     R(sub2ind(size(R), x_line, y_line)) = 0;
    %     G(sub2ind(size(G), x_line, y_line)) = 0;
    %     B(sub2ind(size(B), x_line, y_line)) = 255;
    % end
    % 
    % Detect edges using the Canny method
    %     edges_canny = edge(BW, 'canny');
    % 
    %     Label the edges
    %     [L, num] = bwlabel(edges_canny);
    % 
    %     Randomly assign a color for each label
    %     colormap = rand(num, 3);  % Generates random colors for each edge
    % 
    %     for k = 1:num
    %         mask = L == k;  % Binary mask for the current label
    %         R(mask) = colormap(k, 1) * 255;
    %         G(mask) = colormap(k, 2) * 255;
    %         B(mask) = colormap(k, 3) * 255;
    %     end

    % Split RGB channels for output
    R_out = R;
    G_out = G;
    B_out = B;
end

function colorLines(drone_position, len, step, R, G, B, color, turn_type)
    disp(['colorLines called for ', turn_type, ' turn']);
    [rows, cols] = size(R); % get image dimensions
    for i = 1:len
        new_point = round(drone_position + i*step);
        if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols
            R(new_point(1), new_point(2)) = color(1);
            G(new_point(1), new_point(2)) = color(2);
            B(new_point(1), new_point(2)) = color(3);
        end
    end
end


function [len, R, G, B] = traceLine(drone_position, step, BW, R, G, B)
    len = 0;
    [rows, cols] = size(BW);
    continue_trace = true;
    for i = 1:max(rows,cols)
        new_point = round(drone_position + i*step);
        if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
            R(new_point(1), new_point(2)) = 0;
            G(new_point(1), new_point(2)) = 255;
            B(new_point(1), new_point(2)) = 0;
            len = len + 1;
        else
            continue_trace = false;
        end
        
        if ~continue_trace
            break;
        end
    end
end

function [x, y] = ddaLine(x1, y1, x2, y2)
    dx = x2 - x1;
    dy = y2 - y1;
    
    step = max(abs(dx), abs(dy));
    
    x_inc = dx / step;
    y_inc = dy / step;
    
    x = x1;
    y = y1;
    
    result_x = [];
    result_y = [];
    
    for i = 0:step
        result_x = [result_x; round(x)];
        result_y = [result_y; round(y)];
        x = x + x_inc;
        y = y + y_inc;
    end
    
    x = result_x;
    y = result_y;
end