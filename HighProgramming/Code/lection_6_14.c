#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int A[10][10];
  int i,j,b;
  srand(time(NULL));
  rand()%10;
  for(i=0;i<10;i++)
    {
      for(j=0;j<10;j++)
	{
	  A[i][j]=rand()%10;
	  printf("%d",A[i][j]);
	}
      printf("\n");
    }
  printf("Transponyrovanye");
    for(i=0;i<10;i++)
    {
      for(j=0;j<10;j++)
	{
	  b=A[i][j];
	  A[i][j]=A[j][i];
	  A[j][i]=b;
	  printf("%d",A[i[j]);
	}
      printf("\n");
    }

}
