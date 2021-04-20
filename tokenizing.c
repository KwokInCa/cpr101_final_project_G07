#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h" 

void tokenizing() {
	// version 3

	printf("*** Start of Tokenizing Sentences Demo ***\n"); 
	char sentences[200]; 
	char* sentence; 
	int s_counter;
	while (TRUE) {
		printf("Type a few sentences separated by dot(q - to quit):\n"); 
		gets(sentences); 
		if (strcmp(sentences, "q") == 0) break; 
		sentence = strtok(sentences, "."); 
		s_counter = 1; 
		while (sentence) {

			printf("sentence #%d is \'%s\'\n", s_counter++, sentence); 
			sentence = strtok(NULL, ".");
		}
	} printf("*** End of Tokenizing Sentences Demo ***\n\n");

	// version 2
	printf("*** Start of Tokenizing Phrases Demo ***\n"); 
	
	char phrases[200]; 
	char* phrase; 
	int p_counter; 

	while (TRUE) {
		printf("Type a few phrases separated by comma(q - to quit):\n"); 
		gets(phrases); 
		if (strcmp(phrases, "q") == 0) break; 
		
		phrase = strtok(phrases, ","); 
		p_counter = 1;
		while (phrase) {
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase); 
			phrase = strtok(NULL, ",");
		}

	} 
	
	printf("*** End of Tokenizing Phrases Demo ***\n\n");

	// version 1
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[200];

	char* word;
	int w_counter;
	while (TRUE) {
		printf("Type a few words separated by space(q - to quit):\n");
		gets(words);
		if (strcmp(words, "q") == 0) break;
		word = strtok(words, " ");
		w_counter = 1;
		while (word) {
			printf("Word #%d is \'%s\'\n", w_counter++, word);
			word = strtok(NULL, " ");
		}
	} printf("*** End of Tokenizing Words Demo ***\n\n");
}
