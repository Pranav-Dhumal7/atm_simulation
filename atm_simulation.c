#include <stdio.h>

float balance = 1000.0;

void check_balance() {
    printf("Your current balance is: $%.2f\n", balance);
}

void withdraw_money() {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);
    
    if (amount > balance) {
        printf("Insufficient balance!\n");
    } else if (amount <= 0) {
        printf("Invalid amount. Please enter a positive number.\n");
    } else {
        balance -= amount;
        printf("You have successfully withdrawn $%.2f. Your new balance is: $%.2f\n", amount, balance);
    }
}

void deposit_money() {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive number.\n");
    } else {
        balance += amount;
        printf("You have successfully deposited $%.2f. Your new balance is: $%.2f\n", amount, balance);
    }
}

void atm_menu() {
    int choice;
    
    while (1) {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");

        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                withdraw_money();
                break;
            case 3:
                deposit_money();
                break;
            case 4:
                printf("Thank you for using our ATM service!\n");
                return;
            default:
                printf("Invalid option! Please choose a valid option.\n");
        }
    }
}

int main() {
    atm_menu();
    return 0;
}
