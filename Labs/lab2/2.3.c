#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <locale.h>


void Num2_3()
{

	setlocale(LC_ALL, "Russian");

	printf("Лаба 2.3, 5 вариант, Богуславский Михаил, КЭ-119\n\n");

	int m = 0, n, k, c = 0;

	printf("Введите n: ");
	scanf("%d", &n);

	int *p = (int*)malloc(n * sizeof(int));


	for (int i = 0; n > i; i++)
	{
		printf("Введите наполнение массива : ");
		scanf("%d", &p[i]);
	}

	printf("Введите k: ");
	scanf("%d", &k);

	for (int i = 0; n > i; i++)
	{
		if (p[i] == k)
			m += 1;
	}

	m = m * 2 + n;

	int* d = (int*)malloc(m * sizeof(int));

	for (int i = 0, t = 0; n > i; i++, t++)
	{
		if (p[i] == k)
		{
			d[t + 1] = p[i];
			d[t + 2] = 0;
			d[t] = 0;
			t += 2;
			//printf(" ===== %d %d %d\n", t, i, m);
		}
		else
		{
			d[t] = p[i];
			//printf("%d %d %d %d\n", t, i,d[t],m);
		}
	}

	int* f = (int*)malloc(m * sizeof(int));

	for (int i = 0,t = 0; m > i;)
	{
		if (d[t-1] % 2 == 0 && d[t + 1] % 2 == 0 && d[t] % 2 != 0 && d[t-1] != 0 && d[t + 1] != 0 && c == 0 && t != 0)
		{
			//printf("%d -- %d -- %d\n", d[t],d[t+1],d[t+2]);
			t += 1;
			f[i] = d[t];
			//printf("============== %d", f[i]);
			c = 1;
			m -= 1;

		}
		else
		{
			f[i] = d[t];
			//printf("%d %d\n",f[i], d[t]);
			i++;
			t++;
		}
	}


	for (int i = 0; m >i;i++)
	{
		printf("%d\t", f[i]);
	}


	free(p);
	free(d);
}