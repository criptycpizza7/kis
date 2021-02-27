#include<stdio.h>
#include<math.h>

int prime(unsigned long int);

int main(){
  printf("n=");
  unsigned long int n;
  scanf("%lu",&n);
  /*
  if (prime(n))
    printf("Число %lu простое\n",n);
  else
    printf("Число %lu составное\n",n);
  */
  for (int i=2; i<=1000; i++)
    if (prime(i))
      printf("%d \n",i);
  return 0;
}

int prime(unsigned long int n){
  int c=1;
  if (n!=2)
    {
      for (unsigned long int i=2; i<=ceil(sqrt(n));i++)
	if ((n%i)==0)
	  {
	    c=0;
	    break;
	  }
    }
  return c;
}
