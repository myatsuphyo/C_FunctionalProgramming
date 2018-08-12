/*file: palindrome.c */
/* author: Myat Su Phyo (email: m.s.phyo@student.rug.nl) */
/* date: 11/10/2017 */
/* version: 1.1 */
/* Description: This program is to print the number of non-overlapping discs */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int check = 1; //already assume the sentence is palindrome
char *input;

//to dinamically allocate the array
void *safeMalloc (int n){
	void *p;
		p = malloc(n);
	if (p==NULL){
		printf("Error: malloc(%d) failed. Out of memory?\n", n);
		exit(EXIT_FAILURE);
	}
	return p;
}

int isPalindromic(int i, int j){
	
	//check if it's not palindromic
	if (input[i]!=input[j]) {
		check = 0;
		return; 
	}
	
	//check to stop or do recursion
	if (i==j || j<i) return; 
	else isPalindromic(i+1, j-1);
}

int main (int argc, char *argv[]) {
	int i = 1;
	int lastIndex;
	char a;
	
	input = safeMalloc(i*sizeof(char)+1);
	
	do {
		a = getchar();
		if (a>='a' && a<='z' || a>='A' && a<='Z'){
			a = toupper(a);
			input[i] = a;
			i++;	
			input = realloc(input, i*sizeof(char)+1);
		}
	} while (a!='\n'); 
	 
	input[0] = i; //saving length of the array at first index

	lastIndex= i-1;
	isPalindromic(1,lastIndex);

	//because empty string can be considered as a palindrome.
	if (i==1){
		printf("The sentence is a palindrome."); 
		return 0;
	}
	
	if (check==1) printf("The sentence is a palindrome.");
	if (check==0) printf("The sentence is not a palindrome.");
	
}