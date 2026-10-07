#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int sirena(int a, int b)
{
    // 1, если ровно одна лампа нечётная
    return (a % 2 != 0) != (b % 2 != 0);
}

main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;
    scanf("%d%d", &a, &b);

    printf("датчики %d %d %s\n", a, b,
        (sirena(a, b)) ? "сирена включена" : "сирена выключена");
}