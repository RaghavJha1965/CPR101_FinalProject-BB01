#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tokenizeInput(const char* prompt, const char* delimiter, const char* itemType) {
    char input[200];
    char* token;
    int counter;

    printf("%s\n", prompt);
    while (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = '\0'; // Remove newline character
        if (strcmp(input, "q") == 0) {
            break; // Exit loop if 'q' is entered
        }

        token = strtok(input, delimiter);
        counter = 1;
        while (token) {
            printf("%s #%d is '%s'\n", itemType, counter++, token);
            token = strtok(NULL, delimiter);
        }
        printf("%s\n", prompt);
    }
}

void tokenizing() {
    printf("*** Start of Tokenizing Demo ***\n");

    // Tokenizing words
    tokenizeInput("Type a few words separated by space (q - to quit):", " ", "Word");

    // Tokenizing phrases
    tokenizeInput("Type a few phrases separated by comma (q - to quit):", ",", "Phrase");

    // Tokenizing sentences
    tokenizeInput("Type a few sentences separated by dot (q - to quit):", ".", "Sentence");

    printf("*** End of Tokenizing Demo ***\n");
}
