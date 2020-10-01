#include<stdio.h>
int main()
{
  int a,b,c,d,e,q;
  printf("Введите пятизначное число\n");
  scanf("%d",&q);
  e=q%10;
  d=(q=q/10)%10;
  c=(q=q/10)%10;
  b=(q=q/10)%10;
  a=(q=q/10)%10;
  printf("%d  %d  %d  %d  %d\n",a,b,c,d,e);
  return 0;
}
