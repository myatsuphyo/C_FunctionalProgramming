#include<stdio.h>
#include<stdlib.h>

void swap(char *fir, char *sec)
{
    char temp = *fir;
    *fir = *sec;
    *sec = temp;
}

/* arr is the string, curr is the current index to start permutation from and size is sizeof the arr */
void permutation(char * arr, int curr, int size)
{
	int a, i;
    if(curr == size-1)
    {
        for(a=0; a<size; a++)
         printf("%c", arr[a]);
        return;
    }

    else
    {
        for(i=curr; i<size; i++)
        {
            swap(&arr[curr], &arr[i]);
            permutation(arr, curr+1, size);
            swap(&arr[curr], &arr[i]);
        }
    }
}

int main()
{

    char str[] = "abcdefghijk";

    permutation(str, 0, sizeof(str)-1);
    return 0;
}