#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char name[200];
    char buffer[1000];
    char c;
    printf("Введите имя файла: ");
    scanf("%s",name);
    FILE *text1, *text2;
    if((text1 = fopen(name,"r"))==NULL)
    printf("ошибка!\n");
    else 
    {
        text2 = fopen("file2.txt", "w");
        while((c = fgetc(text1)) != '\n');
        while (!feof(text1))
        {
            c=fgetc(text1);
            fputc(c,text2);        
        }
    fclose(text1);
    fclose(text2);

    text2 = fopen("file2.txt", "r");
    text1 = fopen(name, "w");
    while (!feof(text2))
        {
            c=fgetc(text2);
            fputc(c,text1);        
        }
    fclose(text1);
    fclose(text2);
    system("sleep 5");
    system("rm file2.txt");
    }
    return 0;
}
