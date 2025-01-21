#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayMenu() {
    printf("\n--- MTN Mobile Services ---\n");
    printf("1. Airtime Recharge\n");
    printf("2. Internet Bundle\n");
    printf("3. Mobile Money Transfer\n");
    printf("4. Check Balance\n");
    printf("Please choose an option (1-4): ");
}

int main() {
    int option;
    float amount, balance = 1000.0; // Mock balance
    char recipient[50];

    while (1) {
        displayMenu();
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("Enter amount for airtime recharge: ");
            scanf("%f", &amount);
            printf("Recharge successful! Airtime of %.2f RWF added.\n", amount);
            break;

        case 2:
            printf("Enter amount for internet bundle: ");
            scanf("%f", &amount);
            if (amount >= 500) {
                printf("Internet bundle purchased successfully for %.2f RWF.\n", amount);
            } else {
                printf("⚠ Error: Amount must be >= 500 RWF to purchase a bundle.\n");
            }
            break;

        case 3:
            printf("Enter recipient's name: ");
            scanf("%s", recipient);
            printf("Enter amount to transfer: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Transfer successful! %.2f RWF sent to %s.\n", amount, recipient);
            } else {
                printf("⚠ Error: Insufficient balance or invalid amount.\n");
            }
            break;

        case 4:
            printf("Your balance is: %.2f RWF\n", balance);
            break;

        default:
            printf("⚠ Error: Invalid option. Please try again.\n");
            break;
        }

        char choice;
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            printf("Thank you for using MTN Mobile Services!\n");
            break;
        }
    }

    return 0;
}
