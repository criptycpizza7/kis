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

  int pr=1;
  while (c!=0&& pr)
    {
      if (r%10 != c%10) pr=0;
      r/=10; c/=10;
    }
  if (pr) printf("Палиндром\n");
  else printf("Не палиндром\n");
  
  
  return 0;
}
