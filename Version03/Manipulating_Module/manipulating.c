
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"  //Including the Header file

//Defining the function "manipulating", which concatenates two strings
void manipulating() {
/* Version 1 */
    printf("*** Start of Concatenating Strings Demo ***\n");

    char string1[80];
    char string2[80];

    printf("Type the 1st string (q - to quit):\n");

    // Get input for string1
    while (fgets(string1, sizeof(string1), stdin)) {
        string1[strcspn(string1, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(string1, "q") == 0) break;

        printf("Type the 2nd string:\n");
        fgets(string2, sizeof(string2), stdin);
        string2[strcspn(string2, "\n")] = '\0'; // Remove trailing newline

        // Concatenate string1 and string2
        if (strlen(string1) + strlen(string2) < sizeof(string1)) {
            strcat(string1, string2);
        } else {
            printf("Concatenation exceeds buffer size. Operation aborted.\n");
        }

        printf("Concatenated string is \'%s\'\n", string1);
        printf("Type the 1st string (q - to quit):\n");
    }
    printf("*** End of Concatenating Strings Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n");

    char compare1[80];
    char compare2[80];
    int result;

    printf("Type the 1st string to compare (q - to quit):\n");

    while (fgets(compare1, sizeof(compare1), stdin)) {
        compare1[strcspn(compare1, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(compare1, "q") == 0) break;

        printf("Type the 2nd string to compare:\n");
        fgets(compare2, sizeof(compare2), stdin);
        compare2[strcspn(compare2, "\n")] = '\0'; // Remove trailing newline

        // Compare strings
        result = strcmp(compare1, compare2);

        if (result < 0)
            printf("1st string is less than 2nd\n");
        else if (result == 0)
            printf("1st string is equal to 2nd\n");
        else
            printf("1st string is greater than 2nd\n");

        printf("Type the 1st string to compare (q - to quit):\n");
    }
    printf("*** End of Comparing Strings Demo ***\n\n");

    /* Version 3 */
    printf("*** Start of Searching Strings Demo ***\n");

    char big_string[80];
    char sub_string[80];
    char* address;

    printf("Type the big string (q - to quit):\n");

    while (fgets(big_string, sizeof(big_string), stdin)) {
        big_string[strcspn(big_string, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(big_string, "q") == 0) break;

        printf("Type the substring:\n");
        fgets(sub_string, sizeof(sub_string), stdin);
        sub_string[strcspn(sub_string, "\n")] = '\0'; // Remove trailing newline

        // Search for the substring
        address = strstr(big_string, sub_string);

        if (address != NULL)
            printf("Found at %ld position\n", (long)(address - big_string));
        else
            printf("Not found\n");

        printf("Type the big string (q - to quit):\n");
    }
    printf("*** End of Searching Strings Demo ***\n\n");

}