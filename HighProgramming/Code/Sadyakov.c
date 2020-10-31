#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,t;
  int pr=1;
  srand(time(NULL));
  i=rand()%100+1;
  printf("Угадайте случайное число от 1 до 100\n"); scanf("%d",&t);
  for(int count=0; count!=3; count++){
printf("Введите ваше число  от 1 до 100\n"); scanf("%d",&t);
 if (t==i){
   printf("Вы угадали число, оно равно = %d\n",t);
   pr=0;
   break;}
 else if (t<i)
   printf("Неправильное число, загаданное число больше\n");
 else printf("Неправильное число, загаданное число меньше\n");
 }
  if (pr) printf("Вы проиграли\n");
  else printf("Вы выиграли\n");
 
  return 0;
}
