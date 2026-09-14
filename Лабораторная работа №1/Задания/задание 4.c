#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*                                         *");
	puts("*     Выполнил Иванов И.И.                *");
	puts("*                                         *");
	puts("*******************************************");
}
void date()
{
	puts(" _   _     _   _   _ ");
	puts(" _| |_| |  _| | | |_|");
	puts("|_  |_| | |_  |_| |_|");
}
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Нажмите Enter для продолжения");
	getchar();
	date();
	name();
	puts("Продолжение программы");
	return 0;
}