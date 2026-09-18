/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program to demonstrate user input in C++
   Date: 2026-09-18 
   Version: 1.1 */
    
#include <stdio.h>
int main() { 
    float Height; // %f
    double Bank_Balance; // %lf
    int Phone_Number; // %d

    //Taking user input
    printf("Enter your height in  Centimeters: ");
    scanf("%f", &Height);
    printf("Enter your bank balance: ");
    scanf("%lf", &Bank_Balance);
    printf("Enter your phone number: ");
    scanf("%d", &Phone_Number);

    //Displaying the user input
    printf("Your height is: %.2f Centimeters\n", Height);
    printf("Your bank balance is: %.2lf\n", Bank_Balance);
    printf("Your phone number is: %d\n", Phone_Number);

    return 0; 
}


    

