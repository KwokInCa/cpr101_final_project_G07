#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h" 

void tokenizing() {

	printf("*** Start of Tokenizing Sentences Demo ***\n"); 
	char sentences[200]; 
	char* end_token;

	char* sentence; 
	int s_counter;
	while (TRUE) {
		printf("Type a few sentences separated by dot(q - to quit):\n"); 
		gets(sentences); 
		if (strcmp(sentences, "q") == 0) break; 
		sentence = strtok_r(sentences, ".", &end_token);
		s_counter = 1; 
		while (sentence) {

			printf("sentence #%d is \'%s\'\n", s_counter++, sentence); 

			tokenizing_phrases(sentence);

			sentence = strtok_r(NULL, ".", &end_token);
		}
	} printf("*** End of Tokenizing Sentences Demo ***\n\n");

}

void tokenizing_phrases(char* phrases)
{
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char* end_token;

	char* phrase;
	int p_counter;
	phrase = strtok_r(phrases, ",", &end_token);

	p_counter = 1;
	while (phrase) {
		printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);

		tokenizing_words(phrase);

		phrase = strtok_r(NULL, ",", &end_token);
	}

	printf("*** End of Tokenizing Phrases Demo ***\n\n");

}

void tokenizing_words(char* words)
{
	printf("*** Start of Tokenizing Words Demo ***\n");
	char* end_token;

	char* word;
	int w_counter;
	word = strtok_r(words, " ", &end_token);
	w_counter = 1;
	while (word) {
		printf("Word #%d is \'%s\'\n", w_counter++, word);
		word = strtok_r(NULL, " ", &end_token);
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");

}