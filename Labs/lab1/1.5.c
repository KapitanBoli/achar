#include <stdio.h>
#include <math.h>


double Num_5()
{

	double sum = 0;
	int n;
	scanf("%d", &n);

	while (n > 0)
	{
		sum = sqrt(3 * n + sum);
		n -= 1;
	}
	printf("%Lf", sum);
}