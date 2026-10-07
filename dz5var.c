#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

	setlocale(LC_ALL, "RUS");

	// сила тока через напряжение и сопротивление
	puts("Введи напряжение U (В)");
	float U;
	scanf("%f", &U);

	puts("Введи сопротивление R (Ом)");
	float R;
	scanf("%f", &R);

	float I;
	I = U / R;   // закон Ома

	printf("%.2f В при сопротивлении %.2f Ом это сила тока %.4f А\n", U, R, I);

	system("pause");
	return 0;
}