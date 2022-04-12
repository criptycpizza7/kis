#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 50

int main()
{
  FILE *s;
  if((s=fopen("s.txt","r"))==NULL)
     printf("Ошибка! Файл не может быть открыт для чтения");
 else{
  char *character;
  long int number;
  char charact;
  char *digitarray=NULL;
  int *numarray=malloc(sizeof(char));
  int index = 0;
  int numindex=0;
 
  do{
    while( isdigit(charact = fgetc(s)))
      {
	digitarray[index] = charact;
	digitarray = (char*)realloc(digitarray, sizeof(char) * (index+1));
	index++;
      }
    if (digitarray != NULL){
    number = atol(digitarray);
    numarray = (int*)realloc(numarray,sizeof(int)*(numindex+1));
    numarray[numindex] = number;
    numindex++;
    index = 0;
    free(digitarray);}
  }while(!feof(s));

  for (int i = 0; i < numindex; i++)
    printf("%d\n", numarray[i]);

  free(numarray);
  return 0;
}
}
