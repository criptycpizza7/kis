#include <stdio.h>
#include<math.h>
float my_sin(float, float);

int main(){
  float a, e;
  printf("a=");
  scanf("%f",&a);
  printf("e=");
  scanf("%f",&e);
  printf("sin(%f)=%f\n", a, my_sin(a,e));
  printf("реальное значение sin(%f)=%f\n", a, sin(a));
  return 0;
}

float my_sin(float a,float e){
  double s=0,x=a,real_sin=sin(a);
  long int f=1;
  int c=1,i=1;
  while (fabs(s-real_sin)>e)
  {
    if ((i%2)==1)
      {
	s+=(c*x)/f;
	c*=-1;
      }
    x*=a;
    f*=(++i);
  }
  return s;
}
