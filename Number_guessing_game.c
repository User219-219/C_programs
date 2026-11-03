/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program to play a number guessing game in c
   Date: 2026-10-25
   Version: 1.5*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

    int  secret_number, guess, attempts = 0;
    srand((unsigned int)time(NULL));
    secret_number = rand() % 20 + 1; //Generating a random number betweem 1 and 20
     
    printf("Welcome to the Number guessing game!\n");
    printf("Praise: i have selected a secret number between 1 and 20, try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
         if (guess <1 || guess >20) {
                printf("Your guess is invalid, you are out of range. Please guess a number between 1 and 20.\n");
                attempts--; //invalid guesses not counted

            }
        attempts++;
        
        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the secret number %d in %d attempts.\n", secret_number, attempts);
           
        }
    } while (guess != secret_number);
    return 0;


}