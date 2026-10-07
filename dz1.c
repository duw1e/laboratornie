#pragma execution_character_set("utf-8")
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int A = 300;     // заработок за первые 75 газет
    int X = 5;       // заработок за каждую следующую газету
    int N = 133;     // всего продано газет
    int R = N - 75;  // газет сверх первых 75
    int S = R * X;   // заработок за остальные газеты
    int Y = A + S;   // общий заработок

    printf("«а первые 75 газет получает:%d руб.\n", A);
    printf("√азет после первых 75:%d - 75 = %d шт.\n", N, R);
    printf("«а остальные газеты:%d * %d = %d руб.\n", R, X, S);
    printf("ќбщий заработок:%d + %d = %d руб.\n", A, S, Y);
    printf("ќтвет: мальчик заработает на %d газетах %d руб.\n", N, Y);
    return 0;
}