#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <locale.h>
#define k 8.2
main()
{
	setlocale(LC_ALL, "RUS");
	double x,y,b,a;
	scanf("%lf", &x);
	b = sqrt(fabs(x));
	a = pow(b, 4) + pow(k, 3);
	y = pow(log(a), 3) + exp(-x);
	printf("x=%.2lf y=%.2lf\n",x, y);
	sistem("pause");
} 
