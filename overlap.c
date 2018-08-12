/*file: camping.c */
/* author: Myat Su Phyo (email: m.s.phyo@student.rug.nl) */
/* date: 12/09/2017 */
/* version: 1 */
/* Description: This program calculate how much times Dad must walk to fill the bath */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	  
	int xa1, ya1, xa2, ya2, xb1, yb1, xb2, yb2;
	
	//points of first rectangle
	scanf("%d", &xa1);
	scanf("%d", &ya1);
	scanf("%d", &xa2);
	scanf("%d", &ya2);
	
	//points of second rectangle
	scanf("%d", &xb1);
	scanf("%d", &yb1);
	scanf("%d", &xb2);
	scanf("%d", &yb2);
	
					 
	if (xa1 > xb2 ||
        xb1 > xa2 ||
        ya1 > yb2 ||
        yb1 > ya2)  {
		printf ("no overlap");
		return 0;
	}
	else {
		printf ("overlap");
		return 0;
	}
}