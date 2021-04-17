#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *pred;
  struct node *next;
};


void add_begin(struct node **,int );
void add_end(struct node **, int);
void add_position(struct node **, int, int);
void show_list(struct node *);

void add_begin(struct node ** p, int x){
  struct node *current;
  current=(struct node *)malloc(sizeof(struct node));
  current->data=x;
  current->pred=NULL;
  current->next=*p;
  (*p)->pred=current;
  *p=current;
}

void add_position(struct node ** p, int x, int position){
  struct node *current1, *next, *new;
  current1 = *p;
  for(int i = 0; i < position; i++)
    current1 = current1->next;

  next = current1->next;
  new = (struct node*)malloc(sizeof(struct node));
  new->data = x;
  
  current1->next = new;
  new->pred = current1;
  
  next->pred = new;
  new->next = next;
}

void add_end(struct node ** p, int x){
  struct node *current1, *current2;
  current1 = *p;
  while(current1->next != NULL) current1 = current1->next;
  current2 = (struct node*)malloc(sizeof(struct node));
  current2->data = x;
  current1->next = current2;
  current2->pred = current1;
  current2->next = NULL;
}

void show_list(struct node * f){
  while (f != NULL){
    printf("%d\t",f->data);
    f=f->next;
  }
}

int main(){
  struct node *head;
  int key, position;
  head=(struct node *)malloc(sizeof(struct node));
  head->data=1;
  head->pred=NULL;
  head->next=NULL;

  do{
    printf("Введите ключ: 1 - добавить в начало, 2 - добавить на позицию, 3 - добавить в конец, 4 - выход\n ");
    scanf("%d",&key);
    if (key==1){
      printf("Введите значение ");
      scanf("%d",&key);
      add_begin(&head, key);
    } else if (key==2){
      printf("Введите значение и позицию ");
      scanf("%d%d",&key, &position);
      add_position(&head, key, position);
    } else if (key==3){
      printf("Введите значение ");
      scanf("%d",&key);
      add_end(&head, key);
    }
  }
    while (key!=4);

    printf("---------------\n");
    show_list(head);
    return 0;
}


