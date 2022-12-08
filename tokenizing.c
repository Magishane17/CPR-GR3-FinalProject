// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 //define the buffer size
#include "tokenizing.h" //use tokenising prototype from 'tokenizing.h'


// V1
void tokenizing(void) //Create tokenising function
{
	printf("*** Start of Tokenizing Words Demo ***\n");
	char	words[BUFFER_SIZE];
	char*	nextWord = NULL;
	int		wordsCounter; //Declare input array, storage for the delimiter, and a word counter
	do
	{
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin); //Promt the user to input words, the size limit is 300
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) //While the first character is not 'q'
		{
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) //All characters are 1 word unless separated by a space, then it would be a new word
			{
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); //Display all the words to the user and their number until no words left
			}
		}
	} while (strcmp(words, "q") != 0); //Reapet function until user wants to quit
	printf("*** End of Tokenizing Words Demo ***\n\n");
}