#include <stdio.h>
#define size 1000000
int main(){
  int A[size];
  for(int i=0;i<size;i++)
    A[i]=i+1;
  int m=1,h,j;
  while (m<size){
    h=A[m];
    for (int i=m+h;i<size;i+=h) A[i]=0;
    j=m+1;
    while (A[j]==0) j++;
    m=j;
  }
  for(int i=0;i<size;i++)
    if (A[i]!=0) printf("%d\n",A[i]);
  return 0;
}
