#include <stdio.h>
#include<ctype.h>

#define SIZE 10

int main(){
  char s[SIZE];
  printf("Введите строку: ");
  scanf("%s",s);

  for(int i = 0; i < SIZE; i++)
    {
      if(islower(s[i])) s[i] = toupper(s[i]);
      else if (isupper(s[i])) s[i] = tolower(s[i]);
    }
  printf("%s\n", s);

  for (int i=0; i<256;i++)
    if (i%6 !=0) printf("%d - %c\t",i,i);
    else printf("\n%d - %c\t",i,i);

  for(int i = 0; i < SIZE; i++)
    {
      if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
      else if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
  printf("%s\n", s);
  
  return 0;
}
  
