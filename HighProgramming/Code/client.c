#include <stdio.h>
#define name_file "data"

struct client
{
char last_name [15 ] ;
char first_name [10] ;
char birhday [11] ;
};

void show(void);
void add_client(void);

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
  if ((f=fopen(name_file, "a"))== NULL)
    printf("Не могу открыть файл\n");
  else
    {
      printf("Введите фамилию клиента:"); scanf("%s",&data.last_name);
      printf("Введите имя клиента:"); scanf("%s",&data.first_name);
      printf("Введите дату рождения клиента:"); scanf("%s",&data.birhday);
      fwrite(&data, sizeof(struct client),1,f);
      fclose(f);
    }
}

int main (){
  int n;
  scanf("%d",&n);
  if (n== 1) show();
  if (n==2) add_client();
  return 0;
}
