/*file: no1.c */
/* author: Myat Su Phyo (email: m.s.phyo@student.rug.nl) */
/* date: 22/10/2017 */
/* version: 1.1 */
/* Description: This program is to output the minimal number of operations to convert the first string into the second */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int a,int b) {
	if (a<b) {
		return a;
	}
	if (a>b){
		return b;
	}
}
 
int operation(char *str1, char *str2, int m, int n) {
    int array[m+1][n+1];
	int i, j;
	
    for (i=0; i<=m; i++) {
        for (j=0; j<=n; j++) {
     
			//just in case if input1 is empty
            if (i==0) {
                array[i][j] = j;  
			}
            
			//just in case if input2 is empty
            else if (j==0) {
                array[i][j] = i; 
			}
			
            
            else if (str1[i-1] == str2[j-1])
                array[i][j] = array[i-1][j-1];
 
           
            else {
                array[i][j] = 1 + check(array[i][j-1],  
                                  check( array[i-1][j], 
                                   array[i-1][j-1])); 
            }
        }
    }
    return array[m][n];
}

int main(int argc, char *argv[]) {
    char string1[25];
	char string2[25];
    int num;
	
	
	gets(string1);
	gets(string2);
	
    num = operation( string1 , string2 , strlen(string1), strlen(string2)); 
    printf("%d\n", num);
 
    return 0;
}