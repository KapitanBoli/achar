#include <stdint.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>



void Num_6()
{
    long double eps ;
    long double res = 0.f;

    setlocale(LC_ALL, "Russian");

    printf("Введите значения:  ");
    scanf("%Lf" , &eps);

    int i = 1;
    while (true)
    {
        long double sigma = pow(-1, (i + 1)) / (i * (i + 1) * (i + 2));
        if (sigma < eps)
        {
            printf("Результат: %Lf\n", res);
            break;
        }
        else
        {
            res += sigma;
            i++;
        }
    }



}