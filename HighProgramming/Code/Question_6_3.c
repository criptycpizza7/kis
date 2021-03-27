#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void fillARR(int [][SIZE],int );
void Process(int [][SIZE], int );
int main()
{
  int A[SIZE][SIZE];
  fillARR(A,SIZE);
  Process(A,SIZE);


  return 0;
}

void fillARR (int A[][SIZE], int S)
{
  srand(time(NULL));
  for (int i=0; i<S; i++)
    {
      for(int j=0;j<S;j++)
	{
	  A[i][j]=rand()%10;
	  printf("%d ",A[i][j]);
	}
      printf("\n  ");
    }
}

void Process(int A[][SIZE], int S)
{
  int Result=0,m,k,Result1=0;
  for(int i=0;i<S;i++)
    {
      k=i,m=0;
      while((m<S)&(k<S))
	{
	  Result+=A[k][m];
	  Result1+=A[m][k];
	  m++;
	  k++;	  
	}      
      printf("%d ",Result);
      printf("%d ",Result1);
      Result=0;
      Result1=0;
    }
}
