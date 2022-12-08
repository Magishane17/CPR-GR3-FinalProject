#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // declair BUFFER_SIZE is 80.
#include "manipulating.h"// use manipulating function in manipulating.h 



	void manipulating(void) // call manipulating function. 

	{/* Version 1 */
		printf("*** Start of Concatenating Strings Demo ***\n");
			char	string1[BUFFER_SIZE];
			char	string2[BUFFER_SIZE]; // create two character string array. the size is same as BUFFER_SIZE.
			/*to get two string value, use "do" loop. */
			do {
				printf("Type the 1st string (q - to quit) :\n");
				fgets(string1, BUFFER_SIZE, stdin); // When user input 1st string, and read the string. the maximum size of string is 80, same as BUFFER_SIZE.
				string1[strlen(string1) - 1] = '\0';// all string array include \0 at the end of the string. compiler can know string is finished
				if ((strcmp(string1, "q") != 0)) {// Compare string1 with "q". if user did not enter 'q', "if " loop is working. 
					printf("Type the 2nd string:\n");
					fgets(string2, BUFFER_SIZE, stdin); //When user enter string2, read the string. the maximum size of string is 80,  same as BUFFER_SIZE.
					string2[strlen(string2) - 1] = '\0'; //all string array include \0 at the end of the string.compiler can know string is finished
					strcat(string1, string2); //It is a function that connects string 1 to string 2.
					printf("Concatenated string is \'%s\'\n", string1);
				}
			} while (strcmp(string1, "q") != 0);
			printf("*** End of Concatenating Strings Demo ***\n\n"); // if string1 is not q, this do while loop is working.
		}


	
	//return 0;
//}


		/* Version 2 */
				//printf("*** Start of Concatenating Strings Demo ***\n");
				//char	string1[BUFFER_SIZE];
				//char	string2[BUFFER_SIZE];
				//do {
					//printf("Typethe")


		/* Version 3 */
		//>> insert here



