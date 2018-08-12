#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[]){
	int a,b;
	char op;
	
	if(scanf("%d", &a)==1){
		scanf("%c", &op);
		
		if (scanf("%d", &b)==1){
			printf("x=%d\n", (op=='+'?a+b:a-b));
		}
		else {
			scanf("x=%d", &b);
			printf("x=%d\n",(op=='+'?b-a:a-b));
		}
	}
	else {
		scanf("%c%d=%d", &op, &a, &b);
		printf("x=%d\n", (op=='+'?b-a:b+a));
	}
	
	return 0;
}