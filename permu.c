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
	int *permu = malloc(size*sizeof(int));
    if(currentIndex == size-1)
    {
        for(a=0; a<size; a++)
		{
            permu[a] = arr[a];
			
		}
		count ++ ;
	/* checking Up Down 
		for (i = 0; i<size-1; i++){
					
					if (i == 0)
					{
						if (permu[i] > permu[i+1])
						{
							count--;
							return;
						}
					}
					
					if (i!= 0 && i%2 != 0)
					{
						if (permu[i]<permu[i-1] || permu[i]<permu[i+1]) 
						{
							count --;
							return ;
						}
					}
		
					if (i!=0 && i%2 == 0)
					{
						if (permu[i]>permu[i-1] || permu[i]>permu[i+1]) 
						{
						count --;
						return;
						}
					}
					
		}
		until this part */
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
	
    permutation(ary, 0, num);
	printf("%d", count);
    return 0;
}
