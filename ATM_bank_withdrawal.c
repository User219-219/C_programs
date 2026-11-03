/* Author: Kennedy Derrick Praise 
   Registration_Number: BCS-03-0139/2026
   Description: A simple program to display the basic functioning of withdrawal of money from a bank account in c
   Date: 2026-10-25
   Version: 1.4 */

#include <stdio.h>

int main () {
    int Bank_account_number;
    int Bank_account_balance;
    int Withdrawal_amount;
    int Account_balance_after_withdrawal;
    char choice = 'y';

    printf("Enter your 3 digit Bank_account_number: ");
    scanf("%d", &Bank_account_number);
    printf("Enter your Bank_account_balance: ");
    scanf("%d", &Bank_account_balance);

    if(Bank_account_balance <= 0) {
        printf("your account balance is insufficient for withdrawal\n");
        return 0;
    }

    while(Bank_account_balance > 0) {
        printf("Enter the amount of money you would like to withdraw: ");
        scanf("%d", &Withdrawal_amount);

        if(Withdrawal_amount <= 0) {
            printf("Please enter a valid withdrawal amount greater than zero\n");
            continue;
        } else if(Withdrawal_amount > Bank_account_balance) {
            printf("Your account doesnt have sufficient funds for this withdrawal\n");
            continue;
        } else {
            Account_balance_after_withdrawal = Bank_account_balance - Withdrawal_amount;
            printf("you have successfully withdrawn: %d, your new account balance is :%d\n", Withdrawal_amount, Account_balance_after_withdrawal);
            Bank_account_balance = Account_balance_after_withdrawal;
        }

        if (Bank_account_balance == 0) {
            printf("Your account balance is now zero you cannot withdraw any more money.\n");
            break;
        }

        // choice to continue or exit
        printf("Do you want to make another withdrawal? y/n: ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') {
            printf("Thank you. Final balance: %d\n", Bank_account_balance);
            break;
        }
    } 

    return 0;
}