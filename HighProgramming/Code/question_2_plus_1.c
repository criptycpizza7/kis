#include <stdio.h>
int main ()
{
  int a, b, c, d,e, p,m,z;
  p=0;
  m=0;
  z=0;
  printf("введите 5 чисел");
  scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if (a>0)
    p=p+1;
  else if (a<0)
    m=m+1;
  else
    z=z+1;
  if (b>0)
    p=p+1;
  else if (b<0)
    m=m+1;
  else
    z=z+1;
  if (c>0)
    p=p+1;
  else if (c<0)
    m=m+1;
  else
    z=z+1;
  if (d>0)
    p=p+1;
  else if (d<0)
    m=m+1;
  else
    z=z+1;
  if (e>0)
    p=p+1;
  else if (e<0)
    m=m+1;
  else
    z=z+1;
  printf ("количество положительных чисел:%d \n количество отрицательных чисел: %d\n количество нулевых чисел: %d\n",p,m,z);
  return 0;
}
 
