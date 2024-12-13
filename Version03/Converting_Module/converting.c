#define _CRT_SECURE_NO_WARNINGS // Avoid warnings for simplicity
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void converting() {
     // Version 1: String to int conversion
    printf("*** Start of Converting Strings to int Demo ***\n");
    char int_string[80]; // Declaring a character array to store input
    int int_number;      // Declaring an integer type variable

    printf("Type the int numeric string (q - to quit): \n");
    while (fgets(int_string, sizeof(int_string), stdin)) { // Use fgets for safe input
        int_string[strcspn(int_string, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(int_string, "q") == 0) { // Exit loop if user enters "q"
            break;
        }

        int_number = atoi(int_string); // Convert string to integer
        printf("Converted number is %d\n", int_number); // Print the converted number
        printf("Type the int numeric string (q - to quit): \n");
    }
    printf("*** End of Converting Strings to int Demo ***\n\n");

    // Version 2: String to double conversion

     printf("*** Start of Converting Strings to double Demo ***\n");
    char double_string[80]; // Declaring a character array to store input
    double double_number;   // Declaring a double type variable

    printf("Type the double numeric string (q - to quit): \n");
    while (fgets(double_string, sizeof(double_string), stdin)) { // Use fgets for safe input
        double_string[strcspn(double_string, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(double_string, "q") == 0) { // Exit loop if user enters "q"
            break;
        }

        double_number = atof(double_string); // Convert string to double
        printf("Converted number is %f\n", double_number); // Print the converted number
        printf("Type the double numeric string (q - to quit): \n");
    }
    printf("*** End of Converting Strings to double Demo ***\n\n");


    printf("*** Start of Converting Strings to long Demo ***\n");
    char long_string[80]; // Character array for user input
    long long_number;

    printf("Type the long numeric string (q - to quit):\n");
    while (fgets(long_string, sizeof(long_string), stdin)) {
        // Remove newline character if present
        long_string[strcspn(long_string, "\n")] = '\0';

        if (strcmp(long_string, "q") == 0) {
            break; // Exit loop if 'q' is entered
        }

        // Validate input and convert
        if (isdigit(long_string[0]) || (long_string[0] == '-' && isdigit(long_string[1]))) {
            long_number = atol(long_string);
            printf("Converted number is %ld\n", long_number);
        } else {
            printf("Invalid numeric string. Please try again.\n");
        }

        printf("Type the long numeric string (q - to quit):\n");
    }

    printf("*** End of Converting Strings to long Demo ***\n\n");
}
