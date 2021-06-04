#include <stdio.h>
#include <ctype.h>

int main()
{
  char symbol;
  FILE *file;
  FILE *newFile;

  if((file = fopen("file.txt", "r")) == NULL)
    {
      printf("Can't open file");
      return 0;
    }

  if((newFile = fopen("newFile.txt", "w")) == NULL)
    {
      printf("Can't create file");
      return 0;
    }

  while((symbol = fgetc(file)) != EOF)
      if(isdigit(symbol))
	fputc(symbol, newFile);

  fclose(file);
  fclose(newFile);
  return 0;
}
