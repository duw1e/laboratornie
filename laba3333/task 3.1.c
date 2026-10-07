#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	scanf("%d", &N);
	int d_1 = N /100;
	int d_2 = (N % 100)/10;
	int d_3 = N % 10;
	printf("последняя цифра числа N: %d\n", d_3);
	printf("первая цифра числа N: %d\n", d_1);
	printf("вторая цифра числа N: %d\n", d_2);
	printf("сумма цифр числа N: %d", d_1 + d_2 + d_3);
	printf("число наоборот: %d%d%d", d_3, d_2, d_1);
	system("pause");
}