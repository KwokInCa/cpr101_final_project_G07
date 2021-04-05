#include "converting.h"
void converting() {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80];
	int int_number;
	while (TRUE)
	{
		printf(" Type the int numeric string (q - to quit):\n");
		gets(int_string);
		if (strcmp(int_string, "q") == 0) break;
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");
}