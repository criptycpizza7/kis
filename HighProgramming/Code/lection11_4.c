#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 50

int main()
{
  char array[SIZE];
  scanf("%s", array);
  char *character = array;
  long int number;

  int *numarray = malloc(sizeof(int));
  int index = 0;  
  
  do{
    if(!isdigit(*character))
      {
	character++;
	continue;
      }
    number = strtol(character, &character, 0);
    numarray[index] = number;
    index++;
    numarray = (int*)realloc(numarray, sizeof(int) * (index+1));
  }while((*character) != '\0');

  for (int i = 0; i < index; i++)
    printf("%d\n", numarray[i]);

  free(numarray);
  return 0;
}
