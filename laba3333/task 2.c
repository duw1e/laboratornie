#define _CRT_SECURE_NO_DEPRICATE
#include <stdio.h>
#include <locale.h>

main()
{
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d %f %lf\n", x, y, z);
	printf("%f %lf\n", (float)a/b, (double)a/b);
	system("pause");
}