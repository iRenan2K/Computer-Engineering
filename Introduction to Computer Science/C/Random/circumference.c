#include <stdio.h>
#include <ctype.h>
#include <math.h>

char choice;
const double PI = 3.14159265358979323;
double radius, diameter, perimeter, area;

// Function Prototypes
void forRadius(double radius);
void toRadius();

int main() {
    printf("\nHello! Welcome to the circle's calculator!\n\n");

    while (1) {
        printf("\nEnter \"R\" for radius, \"D\" for diameter, \"P\" for perimeter, or \"A\" for area to choose a value, in meters: ");
        scanf(" %c", &choice);
        while (getchar() != '\n');

        switch (toupper(choice)) {
            case 'R':
                while (1) {
                    printf("\nEnter the radius value, in meters: ");
                    if (scanf(" %lf", &radius) != 1 || radius < 0) {
                        printf("Error: Invalid radius value. Please enter a valid non-negative value!\n");
                        while (getchar() != '\n');
                        continue;
                    }
                    forRadius(radius);
                    break;
                }
                break;
            case 'D':
            case 'P':
            case 'A':
                toRadius();
                break;
            default:
                printf("Invalid choice. Please enter a valid value!\n");
                continue;
        }

        break;

    } 

    return 0;
}

// Function to calculate and display information for the radius
void forRadius(double radius) {
    diameter = 2 * radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nRadius:     %lf meters", radius);
    printf("\nDiameter:   %lf meters", diameter);
    printf("\nPerimeter:  %lf meters", perimeter);
    printf("\nArea:       %lf square meters\n", area);
}

// Function to transform all other values into radius, in meters
void toRadius() {
    while (1) {
        switch (toupper(choice)) {
            case 'D':
                printf("\nEnter the diameter value, in meters: ");
                if (scanf(" %lf", &diameter) != 1 || diameter < 0) {
                    printf("Error: Invalid diameter value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = diameter / 2;
                break;
            case 'P':  
                printf("\nEnter the perimeter value, in meters: ");
                if (scanf(" %lf", &perimeter) != 1 || perimeter < 0) {
                    printf("Error: Invalid perimeter value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = perimeter / (2 * PI);                
                break;
            case 'A':    
                printf("\nEnter the area value, in square meters: ");
                if (scanf(" %lf", &area) != 1 || area < 0) {
                    printf("Error: Invalid area value. Please enter a valid non-negative numeric value!\n");
                    while (getchar() != '\n');
                    continue;
                }
                radius = sqrt(area / PI);
                break;
        }

        break;
    }

    forRadius(radius);
}

/*

Suggestions for geometric functionalities:

1. Calculate Arc Length
2. Calculate Area of Circular Sectors
3. Circles Concentricity
4. Relationship between Circumference and Diameter
5. Circle Inscribed in a Square
6. Proportion Calculator
7. 3D Plane Circle Characteristics
8. Circle Tangent to Two Line Segments
9. Function to draw a 2D circle graph on the Cartesian plane (<graphics.h> or <SDL2/SDL.h>)
10. Function to draw a 3D sphere and its parameters(3D graphics library or APIs like OpenGL or DirectX)



Additional suggestions for geometric functionalities:

11. Function to calculate and display information for a sector of the circle 
    - arc length, sector area, central angle

12. Function to calculate and display information for a segment of the circle
    - segment's area/height

13. Function to calculate and display information for an inscribed angle
    - angle formed by the chord and arc

14. Function to calculate and display information for a circle inscribed in a triangle
    - find the radius of the inscribed circle and its center coordinates

15. Function to calculate and display information for a circle circumscribed around a triangle
    - find the radius of the circumscribed circle and its center coordinates

16. Function to calculate and display information for a regular polygon inscribed in a circle
    - determine the side length, perimeter, and area of the polygon

17. Function to calculate and display information for a regular polygon circumscribed around a circle
    - determine the side length, perimeter, and area of the polygon

18. Function to calculate and display information for the intersection of two circles
    - calculate and display information about the points where two circles intersect
    - determine the number of intersection points and their coordinates

19. Function to calculate and display information for the common tangent of two circles
    - determine the length and position of the common tangent line

20. Function to calculate and display information for the circle tangent to two circles
    - determine the radius and position of the tangent circle

21. Function to calculate and display information for the concentric circles
    - display information about the radius and position of each circle

22. Function to calculate and display information for the Pappus's Centroids Theorem
    - calculate and display information about the centroid of the area formed by rotating one circle around the other

23. Function to calculate and display information for the area of the circle ring
    - calculate and display the area of the region between two concentric circles

*/