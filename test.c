#include<stdio.h>
#include<stdlib.h>

int check = 1;
int count = 0;
int num;

void swap(int *fir, int *sec)
{
    int temp = *fir;
    *fir = *sec;
    *sec = temp;
}

/* arr is the string, curr is the current index to start permutation from and size is sizeof the arr */
void permutation(int *arr, int currentIndex, int size)
{
	int a , i;
	int *permu = malloc(size*sizeof(int));
    if(currentIndex == size-1)
    {
        for(a=0; a<size; a++)
		{
            permu[a] = arr[a];
			printf("%d", permu[a]);
		}
		printf("\n");
		count ++ ;
		return;
	}
    else
    {
        for(i=currentIndex; i<size; i++)
        {
            swap((arr+currentIndex), (arr+i));
            permutation(arr, currentIndex+1, size);
            swap((arr+currentIndex), (arr+i));
        }
    } 

	free(permu);			
}

int main(int argc, char *argv[])
{
	int num; 
	int i;
	int size;
	
	scanf ("%d", &num);
	int *ary = malloc(num*sizeof(int));
	
	for (i=0; i<num; i++){
		ary[i] = i + 1;
	}
	
    permutation(ary, 0, num); //permutation (array , currentindex aka starting point, size );
	printf("%d", count);
    return 0;
}
