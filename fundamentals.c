#include "fundamentals.h" 
void fundamentals()
{
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[80];
	char num_input[10];
	int position;
	while (TRUE) {
		printf("Type a string (q - to quit):\n");
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0) break;
		while (TRUE) {
			printf("Type the character position within the string:\n");
			gets(num_input); 
			position = atoi(num_input);
			if (position >= strlen(buffer1)) {
				printf("Wrong position... type again, please\n");
				continue;
			}
		}
		printf("The character found at %d position is \'%c\'\n",
			position, buffer1[position]);
		break;
	}
	printf("*** End of Indexing Strings Demo ***\n\n");
}