#include "fundamentals.h"		// header file for fundamentals											

/* Version 1 */

void fundamentals() {										//Defining the function "fundamentals", which deals with the indexing part of the project.
	printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80];
    char num_input[10];
    unsigned int position;

    printf("Type not empty string (q - to quit):\n");
    
    gets(buffer1);

    while (strcmp(buffer1, "q") != 0) {
        printf("Type the characer position within the string:\n");
        gets(num_input);
        position = atoi(num_input);

        if (position >= strlen(buffer1)) {
            position = strlen(buffer1) - 1;
            printf("Too big... Position reduced to max. available\n");
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);

        printf("Type not empty string (q - to quit):\n");
        gets(buffer1); // Reads user input into buffer1
    }
    printf("*** End of Indexing Strings Demo ***\n\n");
    				
}
	

void main(){
    fundamentals();
}