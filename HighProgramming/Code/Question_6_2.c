#define NUM 6
#include "mylib.h"



int main()
{
  float a[NUM];
  float sum;
  fillf(a,NUM);
  showf(a,NUM);
  for(int i=0;i<NUM;i++)
    {
      sum=0;
       for(int j=0;j<i;j++)
	 sum+=a[j];
       if(i)
	a[i]-=sum/i; 
    }
  showf(a,NUM);
  return 0;
}
