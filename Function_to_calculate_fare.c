/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple function to calculate the fare based on distance in kilometers
   Date: 2026-10-27
   Version: 1.9 */

#include <stdio.h>
int calculate_fare(int fare, int distance) {
  return fare * distance;
}

int main(void) {
  int distance;
  int fare;
    printf("Enter the distance in KM: ");
    scanf("%d", &distance);
  fare = calculate_fare(10, distance);
  printf("Fare is: %d", fare);
  return 0;
}




