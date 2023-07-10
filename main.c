#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int minSteps(int x, int y) {
    int steps = 0;
    while (x < y) {
        if ((y - x) % 2 == 0) {
            x = (x + y) / 2;
        } else if (y % 2 == 0) {
            y--;
        } else {
            y++;
        }
        steps++;
    }

    return steps;
}

int main() {
    SetConsoleOutputCP(1251);
    int x, y;
    printf("������ �������� x: ");
    scanf("%d", &x);
    printf("������ �������� y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("̳������� ������� �����: %d\n", result);

    return 0;
}
