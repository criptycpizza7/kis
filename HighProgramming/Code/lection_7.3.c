#include<stdio.h>
#include "mylib.h"
#define SIZE 10
void bubbleAsc(int [], int);
void bubbleDesc(int [], int);
void bubbleAsc(int X[],int n)
{
	for (int i=0; i<SIZE-1; i++)
{
	int tmp;
	for (int j=0; j<SIZE-i-1; j++)
	{
		if (X[j] > X[j+1])
		{
		tmp = X[j];
		X[j] = X[j+1];
		X[j+1] = tmp;
		}
	}
 }
}
void bubbleDesc(int X[],int n)
{
	for (int i=0; i<SIZE-1; i++)
{
	int tmp;
	for (int j=0; j<SIZE-i-1; j++)
	{
		if (X[j] < X[j+1])
		{
		tmp = X[j];
		X[j] = X[j+1];
		X[j+1] = tmp;
		}
	}
 }
}
int main(){
  void (*pt)(int[], int);
  char ch=0;
  int A[SIZE];
  fill(A, SIZE);
  show(A, SIZE);
  printf("Что вы хотите сделать?\n");
  printf("1 - сортировать массив по возрастанию\n");
  printf("2 - сортировать массив по убыванию\n");
  scanf("%c", &ch);
  switch(ch)
    {
    case '1':
      pt = bubbleAsc;
      pt(A, SIZE);
      show(A, SIZE);
      break;
    case '2':
      pt = bubbleDesc;
      pt(A, SIZE);
      show(A, SIZE);
      break;
    default:
      printf("Неверно набран номер\n");
      break;
    }
  return 0;
}



   
