/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple c program to calculate the total amount of sales from values saved in a .txt file and give out the output.
   Date: 2026-11-18
   Version: 2.8*/


#include<stdio.h>
#include<stdlib.h>


int main() {

    float  Transactions;
    float Total_sales ;

     FILE *file;
    file = fopen("D:\\sales\\sales.txt", "r");

    if(file == NULL) {
        printf("Error opening the file");
            exit(1);

    }
            while(fscanf(file, "%f", &Transactions) == 1) {
                Total_sales += Transactions;
            }
    fclose(file);
    printf("Total sales: %.2f\n", Total_sales);

    return 0;
}
