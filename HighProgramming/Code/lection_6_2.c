#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Size 10

int main(){
  int A[Size];
  for (int i=0;i<Size;i++){
    printf("A[%d]=",i);
    scanf("%d",&A[i]);
  }
  int p=0;
  for (int k=0;k<Size/2;k++)
      if(A[k]!=A[Size-k-1]) {p=1;break;}

  if (p) printf("Массив несимметричный\n");
  else printf("Массив симметричный\n");
  return 0;
}
