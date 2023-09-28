% Assuming BW is the binary input image

% Get image dimensions
[rows, cols] = size(BW);

% Define the drone's position (center of the image)
drone_position = [round(rows/2), round(cols/2)];

% Initialize maximum distance and the corresponding waypoint
max_dist = 0;
furthest_waypoint = drone_position;

% Scan in all directions
for theta = 0:1:360
    r = drone_position(1);
    c = drone_position(2);
    
    delta_r = sin(deg2rad(theta));
    delta_c = cos(deg2rad(theta));
    current_waypoint = [];
    current_max = 0;
    
    while r > 0 && r <= rows && c > 0 && c <= cols
        if BW(round(r), round(c)) == 1
            dist = sqrt((r - drone_position(1))^2 + (c - drone_position(2))^2);
            if dist > current_max
                current_max = dist;
                current_waypoint = [round(c), round(r)];
            end
        else
            if ~isempty(current_waypoint) && current_max > max_dist
                max_dist = current_max;
                furthest_waypoint = current_waypoint;
            end
            break;
        end
        r = r + delta_r;
        c = c + delta_c;
    end
end

% Display the binary image
figure, imshow(BW), hold on

% Overlay the waypoint on the image
plot(furthest_waypoint(1), furthest_waypoint(2), 'bo', 'MarkerSize', 10, 'LineWidth', 2);

% Overlay the drone's position
plot(drone_position(2), drone_position(1), 'ro', 'MarkerSize', 10, 'LineWidth', 2);

hold off;
