/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program to display the basic functioning of structures and pointers in c
   Date: 2026-11-18
   Version: 3.1 */


   #include <stdio.h>
#include <string.h>

struct Patient
{
int patientID;
char name[20];
int age;
float temp;
int daysAdmitted;
};

int main(){
    int accommodation;
    struct Patient patient1, patient2;

    patient1.patientID = 0001;
    strcpy(patient1.name, "Henry Wachira");
    patient1.age = 25;
    patient1.temp = 40;
    patient1.daysAdmitted = 10;

    accommodation = patient1.daysAdmitted * 2500;

    printf("Patient ID: %d\n", patient1.patientID);
    printf("Patient Name: %s\n", patient1.name);
    printf("Patient Age: %d\n", patient1.age);
    printf("Patient temperature: %.2f\n", patient1.temp);
    printf("Days admitted: %d\n", patient1.daysAdmitted);
    printf("Accommodation cost: %d\n", accommodation);
    

    return 0;
}