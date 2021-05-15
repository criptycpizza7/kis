#include <stdio.h>
#include <stdlib.h>
#define name_file "data"

struct client
{
int numclient;
char last_name [15] ;
char first_name [10] ;
char birhday [11] ;
};

void show(void);
void add_client(void);
void find_fix(void);
void modify_client(void);
int client_exists(int);

void find_fix(void)
{
	struct client data;
	FILE *f;
	int n;
	printf("Введите номер клиента"); scanf("%d",&n);
	if((f=fopen(name_file, "r"))==NULL)
		printf("Не могу открыть файл\n");
	else
		while(fread(&data, sizeof(struct client),1,f))
		{
			if(data.numclient == n)
			{
				printf("Клиент найден\n");
				printf("Клиент %d\n",data.numclient);
				printf("Фамилия:%s\n",data.last_name);
				printf("Имя:%s\n",data.first_name);
				printf("Дата рождения:%s\n",data.birhday);
				printf("---------------------\n");
				fclose(f);
				return;
			}
			
		}
	printf("Клиент не найден");
	fclose(f);
	
}
void show (void){
  struct client data;
  FILE *f;
  int n=1;
  if ((f=fopen(name_file, "r"))== NULL)
    printf("Не могу открыть файл\n");
  else
    while(fread(&data, sizeof(struct client),1,f))
      {
	printf("Клиент %d\n",n);
	printf("Фамилия:%s\n",data.last_name);
	printf("Имя:%s\n",data.first_name);
	printf("Дата рождения:%s\n",data.birhday);
	printf("---------------------\n");
	n++;
	
      }
  fclose(f);
}

void add_client(void){
  struct client data;
  FILE *f;
  int n=1;

  printf("Введите фамилию клиента:"); scanf("%s",&data.last_name);
  printf("Введите имя клиента:"); scanf("%s",&data.first_name);
  printf("Введите дату рождения клиента:"); scanf("%s",&data.birhday);

  do{
  printf("Введите номер клиента:");scanf("%d",&data.numclient);
  }while(client_exists(data.numclient));
  
  
  if ((f=fopen(name_file, "a"))== NULL)
    printf("Не могу открыть файл\n");
  else
    {
      
      fwrite(&data, sizeof(struct client),1,f);
      fclose(f);
    }
}

void modify_client(void){
  int findp = 0;
  int m = 0;
  struct client data;
  FILE *f;
  int n;
  printf("Введите номер клиента"); scanf("%d",&n);
  if((f=fopen(name_file, "r"))==NULL)
    printf("Не могу открыть файл\n");
  else
  {
    while(fread(&data, sizeof(struct client),1,f))
      {
	if(data.numclient == n)
	  {
	    findp = 1;
	    break;
	  }
	m++;
      }
    fclose(f);
  }

  if(findp)
    {
      printf("Введите фамилию клиента:"); scanf("%s",&data.last_name);
      printf("Введите имя клиента:"); scanf("%s",&data.first_name);
      printf("Введите дату рождения клиента:"); scanf("%s",&data.birhday);
      data.numclient = n;
      
      if((f=fopen(name_file, "w"))==NULL)
	printf("Не могу открыть файл\n");
      else
	{
	  fseek(f, m*sizeof(struct client), SEEK_SET);
	  fwrite(&data, sizeof(struct client),1,f);
	  fclose(f);
	}
    }
}

int client_exists(int n){
  struct client data;
  FILE *f;
  if((f=fopen(name_file, "r"))==NULL) return 0;
  else
    while(fread(&data, sizeof(struct client),1,f))
      {
	if(data.numclient == n)
	  {
	    fclose(f);
	    return 1;
	  }
	}
  fclose(f);
  return 0;
}

int main (){
  int n;
  while(1)
    {
      //system("clear");
      printf("1 - показать всех\n2 - добавить клиента\n3 - найти клиента по номеру\n4 - изменить клиента\n5 - выход\n");
      printf("Выбор:");
      scanf("%d",&n);
      if (n== 1) show();
      if (n==2) add_client();
      if (n==3) find_fix();
      if (n==4) modify_client();
      if (n==5) break;
    }
  return 0;
}
