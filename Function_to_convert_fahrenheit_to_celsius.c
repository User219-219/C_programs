/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple function to convert Fahrenheit to Celsius
   Date: 2026-10-27
   Version: 2.0 */

#include <stdio.h>
float convert_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    float celsius;
     printf("Enter the temperature in Fahrenheit: ");
     scanf("%f", &fahrenheit);

    celsius = convert_to_celsius(fahrenheit);
     printf("The temperature in Celsius is: %f\n", celsius);
     
     return 0;
}