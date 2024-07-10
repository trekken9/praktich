#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2, d;

    printf("Введіть координати центру першого кола (x1 y1) та радіус r1: ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати центру другого кола (x2 y2) та радіус r2: ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d == 0 && r1 == r2) {
        printf("-1\n"); // нескінченна кількість точок перетину
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n"); // немає точок перетину
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n"); // одна точка перетину
    } else {
        printf("2\n"); // дві точки перетину
    }

    return 0;
}
