#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Size 10

int main(){
  int A[Size],c,p;
  srand(time(NULL));
  for (int i=0;i<Size;i++) A[i]=1+rand()%100;
  for (int i=0;i<Size;i++) printf("%d\t",A[i]);
  printf("\n");
  for (int i=0; i<Size;i++)
    {
      p=1;
      for (int j=0;j<Size-i-1;j++)
	if (A[j]>A[j+1])
	  {
	    c=A[j];
	    A[j]=A[j+1];
	    A[j+1]=c;
	    p=0;
	  }
      if (p) break;
    }
  for (int i=0;i<Size;i++) printf("%d\t",A[i]);
  printf("\n");
  return 0;
}
