#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
main()
{
	char c; //= 'i';
	int i; //= 2;
	float f; //= 3.14f;
	double d; //= 5e-12;
	scanf("%c%d%f%lf", &c, &i, &f, &d);
	printf("%c, %d, %f, %e", c,i,f,d);
	system("pause");
}