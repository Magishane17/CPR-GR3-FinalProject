/*
Author
	Name        :		Andrea Selina Perez
	Email       :		asperez@myseneca.ca
	ID          :		135629228
	Date written:		November 28, 2022
	Course		:		CPR101
	Project		:		
	
Purpose
	Demonstrate an index-referenced character in a C string
*/
	

//FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10
#include "fundamentals.h"


//Function runs with a controlled iterative structure (do-while)
void fundamentals(void) {

	/* Version 1 */

	printf("*** Start of Indexing Strings Demo ***\n");
	char	buffer1[BUFFER_SIZE];
	char	numInput[NUM_INPUT_SIZE];
	size_t	position;

	/*Iteration is controlled by a condition that uses a predefined string function (strcmp()).
	It uses two values (buffer1 & "q") as string arguments to compare.
	It loops for as long as the strcmp() function returns 0 value.*/
	do {

		/*Prompt printf() statement serves as the beginning of the loop body.
		It asks for user input that will either continue or end the iteration structure.
		It states input 'q' as a loop terminator.*/
		printf("Type not empty string (q - to quit):\n"); 
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';

		/*Conditional statement that checks if user string input results in loop body to continue.
		It prompts user to input numerical parameter for character position.*/
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';

			/*Variable position stores the return value of the atoi() function.
			It will serve as the input string array index*/
			position = atoi(numInput); 

			/*Conditional statement that checks if user input for character position is larger 
			than the length of the string input.*/
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}

			/*Statement that display the result of the character position in the string input.
			Input values for character position that are beyond the string length will display 
			the maximum value of the string length.*/
			printf("The character found at %d position is \'%c\'\n",
							(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");


	/* Version 2 */


	/* Version 3 */

}