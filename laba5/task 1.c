#define _CRT_SECURE_NO_DEPRECATE
#define _USE_NATH_DEFINES
#define M_PI 3.14159265358979323846
#include <math.h>
#include <stdio.h>
#include <locale.h>
main()
{
	double dr;
	scanf("%lf", &dr);
	double ans = sin(dr * M_PI / 180);
	printf("%lf\n", ans);
	system("pause");
}
