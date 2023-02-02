#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    printf("Please enter the first point:\n");
    scanf("%d %d", &x1, &y1);
    printf("Please enter the second point:\n");
    scanf("%d %d", &x2, &y2);

    printf("%lf\n", (double) sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}