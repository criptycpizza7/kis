#include<stdio.h>
#include <math.h>
#include "f.h"
int main(){
  int n;
  printf("n=");
  scanf("%d",&n);
  printf("В числе %d количество цифр равно %d\n",n,count(n));
  printf("%d\n", square(n));
  return 0;
}


  
