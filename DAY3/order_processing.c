#include <stdio.h>

// Function declarations
void orderPizza();
void orderBurger();
void orderPasta();
void orderSalad();
void displayMenu();

int main() {
    int choice;

    // Display the menu to the user
    displayMenu();

    // Prompt user for selection
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Handle the user's choice using a switch statement
    switch (choice) {
        case 1:
            orderPizza();
            break;
        case 2:
            orderBurger();
            break;
        case 3:
            orderPasta();
            break;
        case 4:
            orderSalad();
            break;
        default:
            printf("Invalid choice! Please select a valid option from 1 to 4.\n");
            break;
    }

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("Welcome to the Food Ordering System!\n");
    printf("Here is our menu:\n");
    printf("1. Pizza ($12.99)\n");
    printf("2. Burger ($8.99)\n");
    printf("3. Pasta ($10.49)\n");
    printf("4. Salad ($7.99)\n");
}

// Function to handle Pizza order
void orderPizza() {
    float price = 12.99;
    printf("You have ordered a Pizza!\nPrice: $%.2f\n", price);
}

// Function to handle Burger order
void orderBurger() {
    float price = 8.99;
    printf("You have ordered a Burger!\nPrice: $%.2f\n", price);
}

// Function to handle Pasta order
void orderPasta() {
    float price = 10.49;
    printf("You have ordered a Pasta!\nPrice: $%.2f\n", price);
}

// Function to handle Salad order
void orderSalad() {
    float price = 7.99;
    printf("You have ordered a Salad!\nPrice: $%.2f\n", price);
}
