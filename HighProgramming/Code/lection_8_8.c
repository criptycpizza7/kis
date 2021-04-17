#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *pred;
  struct node *next;
};


void add_begin(struct node **,int );
void add_end(struct node **, int);
void show_list(struct node *);

void add_begin(struct node ** p, int x){
  struct node *current;
  current=(struct node *)malloc(sizeof(struct node));
  current->data=x;
  current->next=*p;
  (*p)->pred=current;
  *p=current;
}

void add_end(struct node ** p, int x){
}

void show_list(struct node * f){
  while (f != NULL){
    printf("%d\t",f->data);
    f=f->next;
  }
}

int main(){
  struct node *head;
  int key;
  head=(struct node *)malloc(sizeof(struct node));
  head->data=1;
  head->pred=NULL;
  head->next=NULL;

  do{
    printf("Введите ключ: 1 - добавить, 2 - выход");
    scanf("%d",&key);
    if (key==1){
      printf("Введите значение ");
      scanf("%d",&key);
      add_begin(&head, key);
    }
  }
    while (key!=2);

    printf("---------------\n");
    show_list(head);
    return 0;
}


