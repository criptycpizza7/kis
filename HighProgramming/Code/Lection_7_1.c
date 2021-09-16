#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 10


int main()
{
	int A[SIZE];
    int *B[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        A[i] = rand()%10;
        B[i] = &A[i];
    }

    for(int i = 0; i < SIZE; i++)
        printf("%d ", *B[i]);
    printf("\n");

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE - 1; j++)
            if(*B[j] > *B[j+1])
            {
                int *temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }

    printf("Array:\n");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", A[i]);
    printf("\n");

    printf("Pointer array:\n");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", *B[i]);
    printf("\n");


	return 0;
}


