#define _CRT_SECURE_NO_WARNINGS
//macro definition
#define BUFFER_SIZE 80
//header file
#include "converting.h"

/* Version 1 */
//defining of function void. declaring macro for int string to be used input length. 
void converting(void){
//printf("*** Start of Converting Strings to int Demo ***\n");
//char intString[BUFFER_SIZE];
//int  intNumber;


/*entering loop. states exit condition and prompts user for numeric string input. 
do{
    printf("Type an int numeric string (q- to quit) : \n");
    //takes input and evaluates it against buffer macro. 
    fgets (intString, BUFFER_SIZE, stdin);
    intString[strlen(intString) -1] = '\0';
    // Conditional statement that evaluates the input for exit condition. atoi function is used to convert string to integer
    if (strcmp(intString, "q") !=0)
    {
        intNumber = atoi (intString);
        //displays result of conversion
        printf("Converted number is %d\n", intNumber);
    }
} while (strcmp(intString, "q") != 0);
// exit message
printf ("*** End of Converting Strings to int Demo ***\n\n");
} 
*/
/* Version 2 */
//>> insert here
printf("*** Start Of Converting Strings to Double demo ***\n");
char    doubleString[BUFFER_SIZE];
double  doubleNumber;
do
{
    printf("Type the double numeric string (q -  to quit) : \n");
    fgets (doubleString, BUFFER_SIZE, stdin);
    doubleString[strlen(doubleString) - 1] = '\0';
    if ((strcmp (doubleString, "q") !=0))
    {
        doubleNumber = atof (doubleString);
        printf("Converted number is &f\n", doubleNumber);
    }
} while (strcmp (doubleString, "q") != 0);
printf("*** End of Converting Strings to double Demo");

}
/* Version 3 */
//>> insert here



