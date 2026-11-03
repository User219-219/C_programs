/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple c program to display the weekly revenue of a hotel using a 1D array.
   Date: 2026-11-03
   Version: 2.1 */




# include<stdio.h>
int main() { 
    float revenue[7] = { 1345.6 , 2546, 1456.34, 3467, 1245, 3421, 980 };
    float total_weekly_revenue ;
    float average_daily_revenue ;

    printf("The revenue for day one is %.2f\n", revenue[0]);
    printf("The revenue for day two is %.2f\n", revenue[1]);
    printf("The revenue for day three  is %.2f\n", revenue[2]);
    printf("The revenue for day four is %.2f\n", revenue[3]);
    printf("The revenue for day five is %.2f\n", revenue[4]);
    printf("The revenue for day six  is %.2f\n", revenue[5]);
    printf("The revenue for day seven is %.2f\n", revenue[6]);



    total_weekly_revenue = revenue[0] + revenue[1] + revenue[2] + revenue[3] + revenue[4] + revenue[5] + revenue[6];
    printf("The total weekly revenue is %.2f\n", total_weekly_revenue);



    average_daily_revenue = total_weekly_revenue / 7;
    printf("The average daily revenue is %.2f\n", average_daily_revenue);


        return 0;


    
    






    

}