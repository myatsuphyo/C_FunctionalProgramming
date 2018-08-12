/*file: camping.c */
/* author: Myat Su Phyo (email: m.s.phyo@student.rug.nl) */
/* date: 12/09/2017 */
/* version: 1.1 */
/* Description: This program calculate how much times Dad must walk to fill the bath */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	int num[4];
	int t;
	
	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);
	scanf("%d", &num[3]);
	
	
	if (num[1]<num[0]){
		t = num[1];
		num[1] = num[0];
		num[0] = t;
	}
	if (num[2]<num[0]){
		t = num[2];
		num[2] = num[0];
		num[0] = t;
	}
	if (num[3]<num[0]){
		t = num[3];
		num[3] = num[0];
		num[0] = t;
	}
	if (num[2]<num[1]){
		t = num[2];
		num[2] = num[1];
		num[1] = t;
	}
	if (num[3]<num[1]){
		t = num[3];
		num[3] = num[1];
		num[1] = t;
	}
	if (num[3]<num[2]){
		t = num[3];
		num[3] = num[2];
		num[2] = t;
	}
		
	printf ("%d %d %d %d", num[0], num[1], num[2], num[3]);
	return 0;
}