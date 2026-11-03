#include<stdio.h>
#include<stdlib.h>


int main() { 
    float sales;

     FILE *fptr;
     fptr = fopen("D:\\sales\\sales.txt", "a");

    if(fptr == NULL) {
        printf("Error opening the file");
            exit(1);
    }


            printf("Enter the number of sales records to add: ");
            scanf("%f", &sales);

            fprintf(fptr, "%.2f\n", sales);

             
            fclose(fptr);

            printf("Sales records added successfully.\n");

            return 0;
            


    



}