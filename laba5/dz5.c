#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x, y, z;
    double res1, res2, res3, res4, res5, res6, res7, res8;
    double alfa;

    puts("¬веди x");
    scanf("%lf", &x);

    puts("¬веди y");
    scanf("%lf", &y);

    puts("¬веди z");
    scanf("%lf", &z);

    res1 = -sqrt(fabs(x));
    res2 = pow(y, res1);
    res3 = log(res2);
    res4 = x - y / 2;
    res5 = res3 * res4;
    res6 = atan(z);
    res7 = sin(res6);
    res8 = res7 * res7;

    alfa = res5 + res8;

    printf("x = %.3f, y = %.3f, z = %.3f\n", x, y, z);
    printf("alfa = %.3f\n", alfa);

    system("pause");
    return 0;
}