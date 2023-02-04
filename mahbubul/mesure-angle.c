#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Please enter three sides\n");
    scanf("%d %d %d", &a, &b, &c);

    double alpha = (double) acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2*b*c));

    double beta = (double) acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2*a*c));

    double lambda = (double)(180 - ((alpha * 180 / M_PI) + (beta * 180 / M_PI)));

    printf("alpha is %lf\n", alpha*180/M_PI);
    printf("beta is %lf\n", beta*180/M_PI);
    printf("lambda is %lf\n", lambda);
    return 0;
}