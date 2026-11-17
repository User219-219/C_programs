/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple c program to add a book title using c files and keep records
   Date: 2026-11-18
   Version: 2.4*/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    char Book_name[300];
    FILE*fptr;
    fptr = fopen("D:\\Books_borrowed\\Books_borrowed.txt", "a");

    if(fptr == NULL){
        printf("Error in oppening the file");
        exit(1);

    }
    printf("Enter the tiltle of the book borrowed:");
    fgets(Book_name, sizeof(Book_name), stdin);

    fprintf(fptr, "This is the book title:  %s \n", Book_name);
    fclose(fptr);

    printf("The book title is succesfully stored.");

    return 0;


}
