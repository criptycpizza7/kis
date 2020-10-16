#include<stdio.h>
int main(){
  int c,count=0,d,r=0;
  scanf("%d",&c);
  d=c;
  while(d!=0)
    {
      r+=(d%10);
      r*=10;
      d/=10;
    }
  r/=10;
  printf("%d\n",r);
  
  
  return 0;
}
