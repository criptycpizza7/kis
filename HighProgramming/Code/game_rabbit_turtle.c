// Игра заяц-черепаха
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int turtle_move(void);
int rabbit_move(void);
void visual(int, int);

int main(){
  int rabbit=0, turtle=0;
  srand(time(NULL));
  do {
    system("clear");
    visual(turtle,rabbit);
    rabbit+=rabbit_move();
    turtle+=turtle_move();
    if (rabbit<0) rabbit=0;
    if (turtle<0) turtle=0;
    if (rabbit>size) rabbit=size;
    if (turtle>size) turtle=size;
    printf("\n");
    system("sleep 0.1");
  } while (rabbit<size && turtle<size);
  if (rabbit ==size && turtle==size)
    printf("\nНичья!!!\n");
  else if (rabbit ==size)
    printf("\nЗаяц победил!!!\n");
  else printf("Черепаха оказалась проворнее!!!\n");
  return 0;  
}

int turtle_move(){
  int move, r;
  r=1+rand()%100;
  if (r<=50) move=3;
  else if (r>50 && r<=70) move=-6;
  else move=1;
  return move;
}

int rabbit_move(){
  int move, r;
  r=1+rand()%100;
  if (r<=20) move=0;
  else if (r>20 && r<=40) move=9;
  else if (r>40&& r<=50) move =-12;
  else if (r>50 && r<=80) move=1;
  else move=-2;
  return move;
}

void visual(int turtle, int rabbit){
  for (int i=0; i<size; i++){
    if (i == turtle && i == rabbit) printf("W");
    else if (i==turtle) printf("T");
    else if (i==rabbit) printf("R");
    else printf(" ");}
}
