#include<stdio.h>
#include <math.h>

int main(){
  int a,b,c,d;
  float x1,x2;
  printf("Программа решает квадратные уравнения ax^2+bx+c=0\n");
  printf("a="); scanf("%d",&a);
  printf("b="); scanf("%d",&b);
  printf("c="); scanf("%d",&c);
  d=b*b-4*a*c;
  if (d>0)
    {
      x1=(-b+sqrt(d))/(2*a);
      x2=(-b-sqrt(d))/(2*a);
      printf("Решение: x1=%f, x2=%f\n",x1,x2);
    }
  else if (d==0)
    {
      x1=(float)-b/(2*a);
      printf("Решение: x1=x2=%f\n",x1);
    }
  else
      printf("Решение: найдены комплексные корни\n");
  
  return 0;
}
