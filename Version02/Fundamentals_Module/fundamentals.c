#include "fundamentals.h"		// header file for fundamentals											

/* Version 1 */

void fundamentals() {			
    
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
    
    
    							//Defining the function "fundamentals", which deals with the indexing part of the project.
	printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80];
    char num_input[10];
    unsigned int position;

    printf("Type not empty string (q - to quit):\n");
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
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
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
        gets(buffer1); // Reads user input into buffer1
    }
    printf("*** End of Indexing Strings Demo ***\n\n");


/* Version 2 */

	printf("*** Start of Measuring Strings Demo ***\n");					
	char buffer2[80];														//Creating a character type array "buffer2" which can hold upto 79 characters, and 1 extra space for the null character
	printf("Type a string (q - to quit):\n");
	gets(buffer2);															//Gets the input from the user and store it in array "buffer2"
	while (strcmp(buffer2, "q") != 0){										//A while loop which will be executed unless and until buffer2's value is equal to "q"; if q is entered, the program will end.
		printf("The length of the string is %lu\n", strlen(buffer2));						
		printf("Type a string (q - to quit):\n");
		gets(buffer2);											
	}
	printf("*** End of Measuring Strings Demo ***\n\n");					
}
	
