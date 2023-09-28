% Detect the edges
gray_img = rgb2gray(I);
edges = edge(gray_img, 'Canny');

% Perform the Hough Transform to detect lines
[H,theta,rho] = hough(edges);
P = houghpeaks(H, 4);

% Extract lines from the detected peaks
lines = houghlines(edges,theta,rho,P, 'FillGap', 50, 'MinLength', 7);

% Display the original image with the edges marked
figure, imshow(img1), hold on

for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    line(xy(:,1), xy(:,2), 'Color', 'green', 'LineWidth', 2, 'LineStyle', '-');
end

% Initializing a matrix to store waypoints
waypoints = [];

% Extract midpoints from lines to generate waypoints
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    midpoint = mean(xy,1); % Calculate the midpoint of the segment
    waypoints = [waypoints; midpoint];
end

tolerance = 1;

% Group waypoints based on x-coordinates
grouped_waypoints = [];
sorted_waypoints = sortrows(waypoints, 1);

k = 1;
while k < length(sorted_waypoints)
    if abs(sorted_waypoints(k, 1) - sorted_waypoints(k+1, 1)) <= tolerance
        mid_point = mean([sorted_waypoints(k,:); sorted_waypoints(k+1,:)], 1);
        grouped_waypoints = [grouped_waypoints; mid_point];
        k = k + 2;
    else
        k = k + 1;
    end
end

% Group waypoints with similar y-coordinates
sorted_waypoints_y = sortrows(waypoints, 2);
k = 1;
while k < length(sorted_waypoints_y)
    if abs(sorted_waypoints_y(k, 2) - sorted_waypoints_y(k+1, 2)) <= tolerance
        mid_point = mean([sorted_waypoints_y(k,:); sorted_waypoints_y(k+1,:)], 1);
        grouped_waypoints = [grouped_waypoints; mid_point];
        k = k + 2;
    else
        k = k + 1;
    end
end

% Find the waypoint closest to the drone (highest y-coordinate)
[~, index] = max(grouped_waypoints(:,2));
closest_waypoint = grouped_waypoints(index, :);

% Display the original image with the edges marked and the closest waypoint
figure, imshow(img1), hold on
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    line(xy(:,1), xy(:,2), 'Color', 'green', 'LineWidth', 2, 'LineStyle', '-');
end

% Overlay the closest waypoint on the image
plot(closest_waypoint(1), closest_waypoint(2), 'bo', 'MarkerSize', 10, 'LineWidth', 2);


hold off;
