// Name: Raghav Nareshkumar Jha
// Student ID: 122731227

#include "tokenizing.h" // Include the tokenizing header file
#include <stdio.h>
#include <string.h>

// Function to tokenize a string based on a delimiter
void tokenize_string(const char* delimiter) {
    char input[200];    // Buffer for user input
    char* token;        // Pointer for individual tokens
    int counter;        // Counter for tokens

    printf("Type a few words separated by '%s' (q - to quit):\n", delimiter);
    while (fgets(input, sizeof(input), stdin)) { // Safely read user input
        input[strcspn(input, "\n")] = '\0'; // Remove newline character

        if (strcmp(input, "q") == 0) { // Exit if user types 'q'
            break;
        }

        if (strlen(input) == 0) { // Handle empty input
            printf("Input is empty. Please type something.\n");
            continue;
        }

        token = strtok(input, delimiter); // Tokenize the input
        counter = 1; // Reset counter

        while (token) { // Process each token
            printf("Word #%d: '%s'\n", counter++, token);
            token = strtok(NULL, delimiter); // Get the next token
        }

        printf("Type a few words separated by '%s' (q - to quit):\n", delimiter);
    }
}

// Main tokenizing function
void tokenizing() {
    printf("*** Start of Tokenizing Words Demo ***\n");
    tokenize_string(" "); // Tokenize based on spaces
    printf("*** End of Tokenizing Words Demo ***\n\n");
}
