#include<stdio.h>
int main(){
  int m,n;
  printf("Введите количество человек: n=");
  scanf("%d",&n);
  printf("Введите шаг выбывания: m=");
  scanf("%d",&m);
  int A[n];
  for (int i=0;i<n;i++) A[i]=1;
  int position=0, count=1, p=n;
  while(p==1){
    if (A[position]!=0)
      {
	if (count == m)
	  {
	    A[position]=0;
	    count=1;
	    p--;
	  }
      }
	else
	  {
	    count++; 
	    position=(position+1)%n;
	  }	
  }
 for (int i=0;i<n;i++)printf("%d\n",A[i]);
  return 0;
}
  
