#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,s=0,d,p=12345;
  do 
    {
      printf("Введите 1 для того чтобы положить деньги на счёт, 2 для того, чтобы снять деньги на счёт и 3, чтобы закрыть счёт, 4 для того, чтобы посмотреть счёт, 5 для того, чтобы изменить пароль: ");
      scanf("%d", &a);
      switch (a)
	{
	case 1:
	  printf("Введите пароль: ");
	  scanf("%d",&d);
	  while (p!=d)
	    {
	      printf("Пароль неверный, введите пароль: ");
	      scanf("%d",&d);
	    }
	    printf("Введите денюжку: ");
	    scanf("%d",&d);
	    s+=d;
	    printf("У вас на счету %d рублей\n", s);
	    break;
	case 2:
	  printf("Введите пароль: ");
	  scanf("%d",&d);
	  while (p!=d)
	    {
	      printf("Пароль неверный, введите пароль: ");
	      scanf("%d",&d);
	    }
	  printf("Сколько денюжек хотите забрать?");
	  scanf("%d",&d);
	  if (s<d)  printf("У вас нет столько денюжек");
	  else
	    {
	      s-=d;
	      printf("На счету осталось %d денюжек\n", s);
	    }
	  break;
	case 3:
	  printf("Введите пароль: ");
	  scanf("%d",&d);
	  while (p!=d)
	    {
	      printf("Пароль неверный, введите пароль: ");
	      scanf("%d",&d);
	    }
	  printf("Сумма к возврату: %d\nДо свиданья!",s);
	  break;
	case 4:
	  printf("Введите пароль: ");
	  scanf("%d",&d);
	  while (p!=d)
	    {
	      printf("Пароль неверный, введите пароль: ");
	      scanf("%d",&d);
	    }
	  printf("Сумма на счёте: %d\n",s);
	  break;
	case 5:
	  printf("Введите пароль: ");
	  scanf("%d",&d);
	  while (p!=d)
	    {
	      printf("Пароль неверный, введите пароль: ");
	      scanf("%d",&d);
	    }
	  printf("Введите новый пароль: ");
	  scanf("%d",&p);
	  printf("Пароль успешно изменён");
	  break;
	default:
	  printf("Вы что-то не то ввели!!!\n");
	  break;
	}
    } while (a!=3);
    return 0;
}

	  	  
	  
	    
      
