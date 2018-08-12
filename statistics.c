
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int length; // to use length in all functions without passing it as a parameter

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

//Bubble Sort

void swap (int i, int j, int arr[]){
	int h = arr[i];
	arr [i]= arr[j];
	arr[j] = h;
}
int* bubbleSort(int arr[]){
	int i, j, change;
	
	for (i=0; i<length; i++){
		change = 0;
		
		for (j=0; j+1<length-i; j++){
			if ( arr[j] > arr[j+1]){
				swap (j, j+1, arr);
				change = 1;
			}
		}
		
		if (change ==0) {
			break;
		}
	}
	
	return arr;
	
}

//finding mean 
double findMean (int arr[]){
	double mean ;
	int sum = 0;
	int i;
	
	for (i=0; i<length; i++){
		sum += arr[i];
	}
	
	mean = (double)sum / length;
	printf("mean: %.2f\n", mean);
	return;
}

//finding median
int  findMedian(int arr[]) {
	
	int median;
	
    if(length%2==0) {
        // if there is an even number of elements, return mean of the two elements in the middle
		median = ((arr[length/2] + arr[length/2 - 1]) / 2);
        printf("median: %d\n", median);
		return;
    } else {
        // else return the element in the middle
		median = arr[length/2];
		printf("median: %d\n", median);
        return;
    }
}

int findMode (int arr[]){

int number = arr[0];
int mode = number;
int count = 1;
int countMode = 1;
int countAry[100];
int i;

for (i=1; i<length; i++)
{
      if (arr[i] == number) 
      { // count occurrences of the current number
         ++count;
      }

       if (count > countMode) 
       {
            countMode = count; // mode is the biggest ocurrences
           	mode = number;
			//check = 1;	
       }
	   
	   
	  countAry[i]= count;
      count = 1; // reset count for the new number
      number = arr[i];
}

	if (findMode(countAry)== 0) return 0;
	
	if(countMode==1){
		  return 0;
	  }
	  else{
		  return mode;
	  } 

}
int main (int argc, char *argv[]) {
	
	int i,  h;
	int *input;
	int median, mode;
	double mean;
	
	scanf("%d", &length); 
	
	input = safeMalloc(sizeof(int)*length); // allocate the memory for your array

	for(i = 0; i < length ; i++){
		scanf("%d", &h);
		*(input+i) = h;
	}
	
	input = bubbleSort (input);
	
	findMean(input);
	findMedian(input);
	findMode(input);
	free(input);
	
	return 0;
}