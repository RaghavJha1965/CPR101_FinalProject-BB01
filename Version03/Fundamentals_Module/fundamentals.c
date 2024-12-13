#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

void tokenizing() {
    /* Version 1 */
    printf("*** Start of Tokenizing Strings Demo (Version 1: Space Delimiter) ***\n");
    char input_v1[MAX_LENGTH];
    char* token_v1;
    int counter_v1;

    printf("Type a few words separated by space (q - to quit):\n");
    while (fgets(input_v1, sizeof(input_v1), stdin)) {
        input_v1[strcspn(input_v1, "\n")] = '\0'; // Remove newline character

        if (strcmp(input_v1, "q") == 0) break;

        token_v1 = strtok(input_v1, " "); // Tokenize based on spaces
        counter_v1 = 1;

        while (token_v1) {
            printf("Word #%d is '%s'\n", counter_v1++, token_v1);
            token_v1 = strtok(NULL, " ");
        }

        printf("Type a few words separated by space (q - to quit):\n");
    }
    printf("*** End of Tokenizing Strings Demo (Version 1) ***\n\n");

    /* Version 2 */
    printf("*** Start of Tokenizing Strings Demo (Version 2: Multiple Delimiters) ***\n");
    char input_v2[MAX_LENGTH];
    char* token_v2;
    int counter_v2;

    printf("Type a few words separated by spaces, commas, or dots (q - to quit):\n");
    while (fgets(input_v2, sizeof(input_v2), stdin)) {
        input_v2[strcspn(input_v2, "\n")] = '\0'; // Remove newline character

        if (strcmp(input_v2, "q") == 0) break;

        token_v2 = strtok(input_v2, " ,."); // Tokenize based on spaces, commas, and dots
        counter_v2 = 1;

        while (token_v2) {
            printf("Token #%d is '%s'\n", counter_v2++, token_v2);
            token_v2 = strtok(NULL, " ,.");
        }

        printf("Type a few words separated by spaces, commas, or dots (q - to quit):\n");
    }
    printf("*** End of Tokenizing Strings Demo (Version 2) ***\n\n");

    /* Version 3 */
    printf("*** Start of Tokenizing Strings Demo (Version 3: Enhanced Tokenization) ***\n");
    char input_v3[MAX_LENGTH];
    char* token_v3;
    int counter_v3;

    printf("Type a few words separated by spaces, commas, or dots (q - to quit):\n");
    while (fgets(input_v3, sizeof(input_v3), stdin)) {
        input_v3[strcspn(input_v3, "\n")] = '\0'; // Remove newline character

        if (strcmp(input_v3, "q") == 0) break;

        if (strlen(input_v3) == 0) {
            printf("Empty input! Please type something.\n");
            continue;
        }

        token_v3 = strtok(input_v3, " ,.");
        counter_v3 = 1;

        while (token_v3) {
            printf("Token #%d is '%s'\n", counter_v3++, token_v3);
            token_v3 = strtok(NULL, " ,.");
        }

        printf("Type a few words separated by spaces, commas, or dots (q - to quit):\n");
    }
    printf("*** End of Tokenizing Strings Demo (Version 3) ***\n\n");
}
