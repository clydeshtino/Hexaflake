# Hexaflake 
# By: Clyde Shtino

## About 
The goal of this project is to utilize SFML to generate a hexaflake. This code implements a recursive algorithm to draw a hexagonal snowflake pattern using SFML for rendering. The output is based off of user inputs. The main routine will prompt the user to enter the length (double L) and then it'll prompt the user to input the recursion depth they desire (int n). 

# Hexagonal Snowflake Pattern
For algorithms, this project uses a main that is recursive and it's primary goal is to a snowflake formed with hexagons, hence the name "Hexaflake". The function hexa_flake takes parameters window (SFML window reference), center (center coordinates of the hexagon), l (length of the hexagon's side), n (depth of recursion), and theta (rotation angle). If n is 0, it draws a single hexagon at the specified center with a given rotation angle. If n is greater than 0, it recursively draws smaller hexagons around the central hexagon to create a snowflake pattern. The hexagons are drawn by recursively calling hexa_flake with updated parameters, reducing the size of the hexagons and adjusting their positions.

# SFML Rendering
This code utilizes SFML in order to render our graphics. It creates a sf::CircleShape object representing a hexagon and configures its properties such as position, origin, and color. The hexagon is then rotated by a specified angle and drawn onto the SFML window using window.draw(hex).

# Trignometric Calculations 
Trigonometric functions (std::sin and std::cos) are used to calculate the positions of smaller hexagons relative to the center of the parent hexagon.

# Looping
A do-while loop is used to draw six smaller hexagons around the central hexagon. The loop iterates six times, each time calculating the position of a smaller hexagon by adjusting the angle and distance from the center.
