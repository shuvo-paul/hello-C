#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Please enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    double s = (double) (a + b + c)/2;

    double area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("area is %lf\n", area);

    return 0;
}