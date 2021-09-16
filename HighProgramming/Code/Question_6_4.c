#include <stdio.h>
#define A 40
#define B 18

void show(int [][B], int, int);

int main()
{
	int arr[A][B] = {}, i = 0, j = 0, num = 1, m, counter = 0;
	if (A<= B) m = A; else m = B;

	for (int k = 0; k <= m; k++)
	{
		if (counter >= A * B) break;
		for (j; j < (B - k); j++)
		{
			arr[i][j] = num++;
			counter++;
		}
		j--;
		show(arr, A, B);

		if (counter >= A * B) break;
		for (i = 1 + k; i  < (A - k); i++)
		{
			arr[i][j] = num++;
			counter++;
		}
		j--; i--;
		show(arr, A, B);

		if (counter >= A * B) break;
		for (j; j - k  >= 0; j--)
		{
			arr[i][j] = num++;
			counter++;
		}
		j++; i--;
		show(arr, A, B);

		if (counter >= A * B) break;
		for (; i  >= 1 + k; i--)
		{
			arr[i][j] = num++;
			counter++;
		}
		j++; i++;
		show(arr, A, B);
	}


return 0;
}

void show(int x[][B], int a, int b)
{

  system("sleep 0.1x");
  system("clear");
  
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++) printf("%d\t", x[i][j] );
		printf("\n");
	}
	printf("\n\n");
}
