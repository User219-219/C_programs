/* Author:Kennedy Derrick Praise
   Registration_number:BCS-03-0139/2026
   Description:A C++ program that calculates the water bill for a given amount of units consumed in a month
   Date:2026-10-08
   Version:1.3*/

   #include <stdio.h>
   int main () {
    float units, Water_bill;
    printf("Enter the number of units you consumed this month:");
    scanf("%f", &units);

    if (units <= 30) {
        Water_bill = units * 20;
    } else if(units <= 60) {
        Water_bill = units * 25;
        } else if(units >60) {
            Water_bill = units * 30;
        }
    printf("Your water bill for the month is Ksh %.2f", Water_bill);
    return 0;
   }