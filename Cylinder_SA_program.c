/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program to calculate the surface area of a cylinder in C++
   Date: 2026-09-18 
   Version: 1.2 */
   
   #include <stdio.h>
   #include <math.h>
   int main() {
    float radius, height, surface_area;// %f
     float pi = 3.14159;

    // Taking user input for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculating the surface area of the cylinder area = 2 * pi * radius * (radius + height)
    surface_area = 2 * pi * radius * (radius + height);

    // Displaying the result
    printf("The surface area of the cylinder is: %.2f\n", surface_area);

    return 0;
   }