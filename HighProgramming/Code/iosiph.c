#include <stdio.h>
#define LOT 10

void show(int [], int );
int check(int [], int );

int main()
{
	printf("Введите шаг выбывания: ");
	int circle[LOT] = {}, count = 0, step, pos = -1, i;
	scanf("%d", &step);
	do {
		for (i = 1; i <= step; i++)
		{
			do {
				pos++;
				if (pos == LOT) pos = 0; 
			} while (circle[pos] == 1); 
		}
		circle[pos] = 1;
		count++;
		show(circle, LOT);
	} while (count != LOT - 1);
	show(circle, LOT);
	pos = check(circle, LOT);
	printf("Остался человек под номером %d", pos);
	return 0;
}

void show(int a[], int b)
{
	system("sleep 1");
	system("clear");
	for (int i = 0; i < b; i++) printf("%d ", a[i]);
	printf("\n");
}

int check(int a[], int b)
{
	int i = 0;
	while (a[i] != 0) i++;
	return i + 1;
}

