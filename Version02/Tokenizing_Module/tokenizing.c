// name :- Raghav Nareshkumar Jha
// student id :- 122731227

#include "tokenizing.h" // Include tokenizing header file

void tokenize_input(const char* input_prompt, const char* delimiter, const char* quit_condition) {
    char buffer[200];    // Buffer for user input
    char* token;         // Pointer to individual tokens
    int counter;         // Counter for tokens

    printf("%s", input_prompt); // Display the prompt
    fgets(buffer, sizeof(buffer), stdin); // Safely get user input
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove trailing newline

    while (strcmp(buffer, quit_condition) != 0) { // Check if user input matches quit condition
        token = strtok(buffer, delimiter); // Tokenize the input based on the delimiter
        counter = 1; // Reset token counter

        while (token) { // Process each token
            printf("Token #%d: '%s'\n", counter++, token);
            token = strtok(NULL, delimiter); // Get the next token
        }

        printf("%s", input_prompt); // Display the prompt again
        fgets(buffer, sizeof(buffer), stdin); // Get new user input
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove trailing newline
    }
}

void tokenizing() {
    printf("*** Start of Tokenizing Words Demo ***\n");
    tokenize_input("Type a few words separated by space (q - to quit):\n", " ", "q");
    printf("*** End of Tokenizing Words Demo ***\n\n");

    printf("*** Start of Tokenizing Phrases Demo ***\n");
    tokenize_input("Type a few phrases separated by comma (q - to quit):\n", ",", "q");
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}


void main(){
    tokenizing();
}