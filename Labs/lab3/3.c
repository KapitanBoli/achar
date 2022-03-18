#include <stdio.h>


void Num3()
{
	FILE* list;

	int a;

	list = fopen("D:\Labs\ConsoleApplication1\ConsoleApplication1\INPUT.txt", "r");

	fscanf(list, "%d", &a);

	printf("%d", a);

	fclose(list);
}