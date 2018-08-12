/*file: palindromic.c */
/* author: Myat Su Phyo (email: m.s.phyo@student.rug.nl) */
/* date: 12/09/2017 */
/* version: 1 */
/* Description: This program checks whether the input number is palindromic or not */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	int i;
	scanf("%d", &i);
	
	if (i>=100 && i<1000){
		int first_digit = i%10;
		int n = i/10;
		int second_digit = n%10;
		int third_digit = n/10;
		
		if (first_digit == third_digit)
			printf ("%d is a palindromic number.", i);
		else 
			printf ("%d is not a palindromic number.", i);
		return 0;
		
	}
	
	if (i>=10 && i<100) {
		int first_digit = i%10;
		int second_digit = i/10;
		if (first_digit == second_digit)
			printf ("%d is a palindromic number.", i);
			
		else 
			printf ("%d is not a palindromic number.", i);
		return 0;
	}
	
	
	
		
}