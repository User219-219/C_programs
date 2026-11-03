/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program for a basic password system in c
   Date: 2026-10-25
   Version: 1.7 */

#include <stdio.h>
#include <string.h>

int main() {
    char password[5];

    do {
        printf("Enter your 4-digit password: ");
        scanf("%4s", password);

        if (strcmp(password, "1234") == 0) {
            printf("Access granted\n");
        } else {
            printf("Access Denied! Please enter the correct password.\n");
        }
    } while (strcmp(password, "1234") != 0);

    return 0;
}