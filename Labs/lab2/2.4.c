#include <stdio.h>
#include <malloc.h>
#include <locale.h>


void Num2_4()
{

	setlocale(LC_ALL, "Russian");

	printf("Лаба 2.4, 5 вариант, Богуславский Михаил, КЭ-119\n\n");

	int n =1 ,num = 0;

	printf("Введите n : \n");
	scanf("%d", &n);

	int **p = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		p[i] = (int*)malloc(n * sizeof(int));
	}

	for (int i = 0; n > i; i++)
		for (int j = 0; n > j; j++)
		{
			printf("Вводите наполнение матрицы : ");
			scanf("%d", &p[i][j]);
		}

	int* a = calloc(n, sizeof(int));

	for (int i = 0; num < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == num || j == num)
			{
				a[num] += p[i][j];
				//printf("%d -----", p[i][j]);
			}

			if (i == num && j == num)
			{
				i = 0;
				num+=1;
			}
		}

	for(int i = 0; n > i;i++)
		printf("%d\t", a[i]);


	for (int i = 0; i < n; i++) {
		free(p[i]);
	}
	free(p);
	free(a);
}