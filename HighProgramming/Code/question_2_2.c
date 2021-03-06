#include<stdio.h>

int main(){
  int a,b;
  scanf("%d%d", &a, &b);
  if (a != b)
    if (a>b) printf("%d это большее число\n",a);
    else printf("%d это большее число\n",b);
  // printf("%d это большее число\n", (a > b) ? a : b);
  else printf("Числа равны\n");
  
  return 0;
}
