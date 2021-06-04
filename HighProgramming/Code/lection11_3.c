#include<ctype.h>
#include<stdio.h>

int main()
{
  char word[15];
  printf("введите строку\n");
  scanf("%s",word);
  for(int i=0;i<15;i++)
    {
      if(isdigit(word[i])==0)
	{
	  word[i]=0;
	}
      else printf("%c",word[i]);
    }
  printf("\n");
  return 0;
}
