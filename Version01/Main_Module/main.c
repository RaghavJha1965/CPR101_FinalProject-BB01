// name: - Raghav Nareshkumar Jha
// student Id: - 122731227

#include "fundamentals.h"  // Header for fundamentals module
#include "manipulating.h"  // Header for manipulating module
#include "converting.h"    // Header for converting module
#include "tokenizing.h"    // Header for tokenizing module


void displayMenu() {
    printf("\n--- String Operations Program ---\n");
    printf("1. Fundamentals\n");
    printf("2. Manipulating\n");
    printf("3. Converting\n");
    printf("4. Tokenizing\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    while (1) {  // Loop until the user chooses to exit
        displayMenu();  // Display the menu
        scanf("%d", &choice);
        getchar();  // Consume the newline character left by scanf

        switch (choice) {
            case 1:
                fundamentals();  // Call to fundamentals module
                break;
            case 2:
                manipulating();  // Call to manipulating module
                break;
            case 3:
                converting();  // Call to converting module
                break;
            case 4:
                tokenizing();  // Call to tokenizing module
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;  // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;  // This line will never be reached
}
