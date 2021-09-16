#include "mylib.h"
#define m 5

void convert_matrix(int [], int [][m], int);
void show_2d(int [][5], int);

int main(){
  int A[m*m], B[m][m];

  fill(A,m*m);
  show(A,m*m);

  convert_matrix(A,B,m);
  show_2d(B,m);

  return 0;

}

void show_2d(int B[][m], int n){
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%d  ", B[i][j]);
    printf("\n");
  }
}

void convert_matrix(int A[], int B[][m], int n){
  int k=0;
  for (int i=0;i<n;i++)
    for (int j=0;j<n;j++){
      B[i][j]=A[k];
      k++;
    }
}
