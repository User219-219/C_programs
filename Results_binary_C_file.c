#include<stdio.h>
#include<stdlib.h>

int main () {
    char name [50];
    int marks;
    FILE*fptr;
    fptr = fopen("D:\\Files\\results.dat", "rb+");

    if(fptr == NULL){
        printf("Error in opening the file");
        exit(1);

    }
    printf("what is the students full name: ");
    fgets(&name[0], sizeof(name), stdin);

    printf("what is the students mean examination  marks in percentage: ");
    scanf("%d", &marks);

    fprintf( fptr, "The student name is: %s\n The student_s mean mark is:  %d\n" , name, marks);
    fclose(fptr);

    printf("Student result_details  created successfully \n");

    return 0;





}