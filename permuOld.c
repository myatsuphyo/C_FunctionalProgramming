#include<stdio.h>
#include<stdlib.h>

int check = 1;
int count = 0;
int num;

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

void swap(int *fir, int *sec)
{
    int temp = *fir;
    *fir = *sec;
    *sec = temp;
}

/*void checkUpDown (int *ary){
	int i;
	
	for (i = 0; i<num; i++){
		printf("%d", ary[i]);
	}
	
	/*
	for (i = 0; i<num; i++){
		
		//if index is 0 
		if (i==0) { 
			if (ary[i] > ary[i+1])  {
					printf("in if 1");
					check = 0; 
					return ;
			}	
		}
		
		if ((i+1)%2 == 0){
			if (ary[i]<ary[i-1] || ary[i]<ary[i+1]) {
					printf("in if 2");
					check = 0;
					return;
			}
		}
		
		if ((i+1)%2 != 0){
			if (ary[i]>ary[i-1] || ary[i]>ary[i+1]) {
					printf("in if 3");
					check = 0;
					return;
			}
		}
		
		if ( check == 1 ) count++;
	}
	
	
	return;
}*/

/* arr is the string, curr is the current index to start permutation from and size is sizeof the arr */
void permutation(int *arr, int currentIndex, int size)
{
	int a , i;
	int *permu = safeMalloc(size*sizeof(int));
    if(currentIndex == size-1)
    {
        for(a=0; a<size; a++)
		{
            permu[a] = arr[a];
		}
		//count ++ ;
		// checking Up Down 
		for (i = 0; i<=a; i++){
					
					if (i == 0 )
					{
						if (permu[i] > permu[i+1]){
							check = 0;
						}
					}
					if (i!= 0 && i%2 != 0){
						if (permu[i]<permu[i-1] || permu[i]<permu[i+1]) {
							check = 0;
						}
					}
		
					if (i!=0 && i%2 == 0){
						if (permu[i]>permu[i-1] || permu[i]>permu[i+1]) {
							check = 0;
						}
					}
				}
		//until this part */
		free(permu);
		return;
	}
    else
    {
        for(i=currentIndex; i<size; i++)
        {
            swap(&arr[currentIndex], &arr[i]);
            permutation(arr, currentIndex+1, size);
            swap(&arr[currentIndex], &arr[i]);
        }
    } 
		
		
		
	
		
}

int main(int argc, char *argv[])
{

	int num;
	int i;
	int size;
	
	scanf ("%d", &num);
	int *ary = safeMalloc(num*sizeof(int));
	
	for (i=0; i<num; i++){
		ary[i] = i + 1;
	}
	
    permutation(ary, 0, num);
	printf("%d", count);
	free(ary);  
    return 0;
}
