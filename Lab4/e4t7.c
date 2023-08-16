/* 
   Lab Experiment 4
   Task 7
   
   This program takes input string from the user 
   and counts the vowels in it
 */

#include <stdio.h>
#include <ctype.h>
#define VOWELS ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
	
int main(void){
	
	/* Initailizing Variables */
	char str[100];
	int i = 0;
	int no_vowels = 0; /* Number of vowels */
	
	printf("Enter a string with/without spaces\n");
	scanf(" %[^\n]s", str); 
	/* [^\n] means to scan string until first enter is pressed */
	
	while (str[i] != '\0') { /* \0 is the last character of an array */
		str[i] = tolower(str[i]); /* Convert characters to lowercase */
		if (VOWELS){
			no_vowels++;
		}
		i++;
	}
	
	printf("Number of vowels in the string: %d\n", no_vowels);
	
	return 0;
}