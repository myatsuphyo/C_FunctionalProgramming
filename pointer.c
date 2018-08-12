#include<stdio.h>
#include<stdlib.h>

int main () {
	int num;
	int *p;
	scanf("%d", &num);
	
	*p = num;
	printf("%d\n", num);
	printf("%d\n", &num);
	printf("%d\n", *p);
	printf("%d\n", p);
}