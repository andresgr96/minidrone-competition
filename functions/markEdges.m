

% Detect the edges
gray_img = rgb2gray(I);
edges = edge(gray_img, 'Canny');

% Perform the Hough Transform to detect lines
[H,theta,rho] = hough(edges);

% Identify peaks in the Hough transform
P = houghpeaks(H, 4); % Adjust the second parameter based on the number of lines you expect to detect

% Extract lines from the detected peaks
lines = houghlines(edges,theta,rho,P, 'FillGap', 50, 'MinLength', 7); 
% The 'FillGap' and 'MinLength' parameters can be adjusted based requirements

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

% Setting a tolerance for considering points with 'almost' same x or y coordinate
tolerance = 1;

% Sort waypoints based on x-coordinates
sorted_waypoints = sortrows(waypoints, 1);

% Group waypoints with similar x-coordinates
grouped_waypoints = [];
k = 1;
while k < length(sorted_waypoints)
    if abs(sorted_waypoints(k, 1) - sorted_waypoints(k+1, 1)) <= tolerance
        mid_point = mean([sorted_waypoints(k,:); sorted_waypoints(k+1,:)], 1);
        grouped_waypoints = [grouped_waypoints; mid_point];
        k = k + 2; % skip the next point since we've processed it
    else
        k = k + 1;
    end
end

% Sort waypoints based on y-coordinates (for horizontal tracks)
sorted_waypoints_y = sortrows(waypoints, 2);

% Group waypoints with similar y-coordinates
k = 1;
while k < length(sorted_waypoints_y)
    if abs(sorted_waypoints_y(k, 2) - sorted_waypoints_y(k+1, 2)) <= tolerance
        mid_point = mean([sorted_waypoints_y(k,:); sorted_waypoints_y(k+1,:)], 1);
        grouped_waypoints = [grouped_waypoints; mid_point];
        k = k + 2; % skip the next point since we've processed it
    else
        k = k + 1;
    end
end

% Display the original image with the edges marked and midpoints of the track
figure, imshow(img1), hold on

for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    line(xy(:,1), xy(:,2), 'Color', 'green', 'LineWidth', 2, 'LineStyle', '-');
end

% Overlay waypoints on the image
plot(grouped_waypoints(:,1), grouped_waypoints(:,2), 'mo', 'MarkerSize', 10, 'LineWidth', 2);

hold off;
