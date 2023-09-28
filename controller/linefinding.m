function [len_center, len_left, len_right, len_left_or, len_right_or, len_back_center, len_back_left, len_back_right, R_out, G_out, B_out] = droneGuidanceLines(R, G, B, BW)
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
    step_back_center = [1, 0]; % downward direction
    step_back_left = [cosd(angle), -sind(angle)]; % angle to the left backward
    step_back_right = [cosd(angle), sind(angle)]; % angle to the right backward
    
    % Flags to check if lines should continue
    continue_center = true;
    continue_left = true;
    continue_right = true;
    continue_left_or = true;
    continue_right_or = true;
    continue_back_center = true;
    continue_back_left = true;
    continue_back_right = true;

    % Lengths of lines initialized to 0
    len_center = 0;
    len_left = 0;
    len_right = 0;
    len_left_or = 0;
    len_right_or = 0;
    len_back_center = 0;
    len_back_left = 0;
    len_back_right = 0;

    % Calculate the endpoints for each line
    for i = 1:max(rows,cols)
        % Center line
        if continue_center
            new_point = round(drone_position + i*step_center);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_center = len_center + 1;
            else
                continue_center = false;
            end
        end
        
        % Left line
        if continue_left
            new_point = round(drone_position + i*step_left);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_left = len_left + 1;
            else
                continue_left = false;
            end
        end
        
        % Right line
        if continue_right
            new_point = round(drone_position + i*step_right);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_right = len_right + 1;
            else
                continue_right = false;
            end
        end
        
        % Left orthogonal line
        if continue_left_or
            new_point = round(drone_position + i*step_left_or);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_left_or = len_left_or + 1;
            else
                continue_left_or = false;
            end
        end

        % Right orthogonal line
        if continue_right_or
            new_point = round(drone_position + i*step_right_or);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_right_or = len_right_or + 1;
            else
                continue_right_or = false;
            end
        end

        % Update back center line
        if continue_back_center
            new_point = round(drone_position + i*step_back_center);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_back_center = len_back_center + 1;
            else
                continue_back_center = false;
            end
        end

        % Update back left line
        if continue_back_left
            new_point = round(drone_position + i*step_back_left);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_back_left = len_back_left + 1;
            else
                continue_back_left = false;
            end
        end

        % Update back right line
        if continue_back_right
            new_point = round(drone_position + i*step_back_right);
            if new_point(1) > 0 && new_point(2) > 0 && new_point(1) <= rows && new_point(2) <= cols && BW(new_point(1), new_point(2)) == 1
                R(new_point(1), new_point(2)) = 0;
                G(new_point(1), new_point(2)) = 255;
                B(new_point(1), new_point(2)) = 0;
                len_back_right = len_back_right + 1;
            else
                continue_back_right = false;
            end
        end

        % Stop the loop if all lines are terminated
        if ~continue_center && ~continue_left && ~continue_right && ~continue_left_or && ~continue_right_or && ~continue_back_center && ~continue_back_left && ~continue_back_right
            break;
        end
    end

     % Storing the intersections with the edge
    edge_points = [];
    

    
direction_lengths = [len_center, len_left, len_right, len_left_or, len_right_or, len_back_left, len_back_right];
directions = [step_center; step_left; step_right; step_left_or; step_right_or; step_back_left; step_back_right];
endpoints = [drone_position + len_center*step_center;
             drone_position + len_left*step_left; 
             drone_position + len_right*step_right;
             drone_position + len_left_or*step_left_or;
             drone_position + len_right_or*step_right_or;
             drone_position + len_back_left*step_back_left;
             drone_position + len_back_right*step_back_right];
    
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
    
    % Draw a line connecting the two extreme points
    if size(edge_points, 1) >= 2
        % Sort points by their x-coordinate (or use y if you want vertical sorting)
        sorted_points = sortrows(edge_points, 1);
        start_point = sorted_points(1,:);
        end_point = sorted_points(end,:);
        [x_line, y_line] = ddaLine(start_point(1), start_point(2), end_point(1), end_point(2));

        
        % Coloring the line segment in blue
        R(sub2ind(size(R), x_line, y_line)) = 0;
        G(sub2ind(size(G), x_line, y_line)) = 0;
        B(sub2ind(size(B), x_line, y_line)) = 255;
    end

    
    % Split RGB channels for output
    R_out = R;
    G_out = G;
    B_out = B;
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