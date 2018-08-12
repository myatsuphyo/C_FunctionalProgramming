#include <stdio.h>
#include <stdlib.h>
int main () {
	int sum = 0, i;
	int m = 5;
	for (i=1; i<=m; i++){
		sum = m* (m+1) * (m+2)/6;
	}
	printf("%d", sum);
}