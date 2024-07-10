#include <stdio.h>
#include <math.h>


int minSteps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;

    int steps = 0;
    int stepLength = 1;
    int currentPos = x;

    while (currentPos < y) {
        currentPos += stepLength;
        steps++;
        if (currentPos >= y) break;

        if (currentPos + stepLength + 1 <= y) {
            stepLength++;
        } else if (currentPos + stepLength <= y) {
            
        } else {
            stepLength--;
        }
    }

    return steps;
}

int main() {
    int x, y;
    printf("Введіть x: ");
    scanf("%d", &x);
    printf("Введіть y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, result);

    return 0;
}
