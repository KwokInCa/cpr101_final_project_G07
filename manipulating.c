#define _CRT_SECURE_NO_WARNINGS

#include "manipulating.h" //This header file is available in current directory which includes a function prototype, macro and other necessary header files
void manipulating() //This is a function definition, for a function that manipulates strings.
{
	printf("*** Start of Concatenating Strings Demo ***\n"); //Function from 'stdio.h' file is used to print the starting text
	char string1[80]; //Declares a Character Array of size 80
	char string2[80]; //Declares a Character Array of size 80
	while (TRUE) //While-loop; it iterates until the value of TRUE becomes 0, which isn't possible here and therefore, this is an infinite loop
	{
		printf("Type the 1st string (q - to quit):\n"); //This statement is used to print a prompt for the user to enter an input
		gets(string1); //This is the function that reads a line of text until a newline character is used
		if (strcmp(string1, "q") == 0) break; //If function with a condition comparing the input to 'q' and if true, it exits the loop by using the break statement.
		printf("Type the 2nd string:\n"); //This statement is used to print a prompt for the user to enter an input
		gets(string2); //This is the function that reads a line of text until a newline character is used
		strcat(string1, string2); //This is the function from 'string.h' file used to concatenate the second string onto the first string, therefore concatinating the string
		printf("Concatenated string is \'%s\'\n", string1);  //This statement is used to print the final concatenated string.
	}
	printf("*** End of Concatenated String Demo ***\n\n");  //This statement is used to print the ending text

}
