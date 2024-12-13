// name :- betjoy 
// student id :- 184604239

#include "converting.h"

/* Version 1 */
// CONVERTING V1

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
}

