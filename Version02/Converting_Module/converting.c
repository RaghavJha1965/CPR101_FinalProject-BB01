// name :- betjoy 
// student id :- 184604239

#include "converting.h"                        //including the header file

/* Version 1 */
// CONVERTING V1

void converting() {
    
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
}
