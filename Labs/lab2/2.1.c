#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>
#include <locale.h>

int Num2_1()
{

	setlocale(LC_ALL, "Russian");

	printf("Лаба 2.1, 5 вариант, Богуславский Михаил, КЭ-119\n\n");

	int n = 1, a = 0, s = 0, b = 0, d = 0;
	double sum = 0;
	bool c = true;
	int* p = (int*)malloc(n * sizeof(int));

	printf("Введите количество элементов массива : ");
	scanf("%d", &n);

	for (int a, i = 0; n > i; i++)
	{
		printf("Введите наполнение массива : ");
		scanf("%d", &a);
		p[i] = a;
	}

	for (int i = 0; n > i + 3;)
	{
		if (p[i + 1] >= p[i + 3])
		{
			c = false;
			//printf("sxasas %d %d %d\n", c, p[i + 1], p[i + 3]);
		}
		i += 2;
	}

	for (int i = 0; n > i;)
	{
		if (p[i])
			s += 1;
		//printf("asdsfaf %d %d\n", s, p[i]);
		i += 2;
	}

	for (int i = 1; n > i;)
	{
		if (p[i])
			d += 1;
		//printf("asdasdsd %d %d\n", d, p[i]);
		i += 2;
	}

	if (c == true)
	{
		for (int i = 0; i < n;)
		{
			a += p[i];
			i += 2;
			//printf("asdd %d\n", a);
		}
		sum = a / s;
		printf("Среднее арифметическое четных элементов : %Lf\n", sum);
	}
	else
	{
		for (int i = 0; n > i; i++)
		{
			if (p[i] > 0)
				b += 1;
		}
		printf("Количество положительных элементов : %d", b);
	}
}