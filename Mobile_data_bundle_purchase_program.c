/* Author:Kennedy Derrick Praise
   Registration_number:BCS-03-0139/2026
   Description:A C++ program that calculates the Displays a data bundle purchase manu,asks the user to enter a choice and uses a switch statement to display the data bundle purchased and the amount to be paid
   Date:2026-10-08
   Version:1.4*/

    #include <stdio.h>
int main() {
    int choice;
    printf("Select your preferred data bundle:\n");
    printf("1. 200MB for Ksh 50\n");
    printf("2. 500MB for Ksh 100\n");
    printf("3. 1GB for Ksh 200\n");
    printf("4. 2GB for Ksh 350\n");
    printf("Enter your choice (1-4): ");

     if (scanf("%d", &choice) !=1) {
        printf("Invalid input, please enter a valid choice of 1-4.\n");
        return 1; // Exit the program with an error code
     }
     switch(choice) {
        case 1:
            printf("You have purchased 200MB for Ksh 50.\n");
            break;
        case 2:
            printf("You have purchased 500MB for Ksh 100.\n");
            break;
        case 3:
            printf("You have purchased 1GB for Ksh 200.\n");
            break;
        case 4:
            printf("You have purchased 2GB for Ksh 350.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-4).\n");
     }
     return 0; 

}