#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <locale.h>
#include <math.h>


void Num2_2()
{

	setlocale(LC_ALL, "Russian");

	printf("Лаба 2.2, 5 вариант, Богуславский Михаил, КЭ-119\n\n");

	int n,c,v,k = 0;

	printf("Введите количество элементов массива : ");
	scanf("%d", &n);

	int* p = (int*)malloc(n * sizeof(int));
	int max = -99999999, min = 99999999;

	for (int i = 0; n > i; i++)
	{
		printf("Введите наполнение массива : ");
		scanf("%d", &p[i]);
	}

	for (int i = 0; n > i; i++)
	{
		if (p[i] > max)
		{
			max = p[i];
			c = i;
		}
		if (p[i] == max)
		{
			v = i;
		}
	}

	for (int i = 0; n > i; i++)
	{
		if (p[i] <= min)
		{
			min = p[i];
		}
	}

	for (int i = 0; n > i; i++)
	{
		if (p[i] == min)
		{
			k += 1;
		}
	}

	p[((v - c) / 2 + c)] = pow(min, k);

	printf("max %d %d %d ==== %d ===== %d\n", max, c,v, min, p[((v - c) / 2 + c)]);

	for (int i = 0; n > i; i++)
		printf("%d\t", p[i]);

	free(p);
}