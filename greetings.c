#include <stdio.h>

// Function to greet the user
void greetUser(const char *name) {
    printf("Hello, %s! Welcome to Dreamizer's Programming Class!\n", name);
}

// Function to thank the user
const char* thankUser() {
    return "Thank you for practicing coding today!";
}

int main() {
    char name[50]; // Variable to store user's name

    // Prompt user for their name
    printf("Enter your name: ");
    scanf("%49s", name); // Read user input, limit to 49 characters to avoid overflow

    // Call the greetUser function
    greetUser(name);

    // Call the thankUser function and print its return value
    const char *message = thankUser();
    printf("%s\n", message);

    return 0;
}
