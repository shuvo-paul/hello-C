#include <stdio.h>
#include <math.h>

int main() {
    double r;

    printf("Please entere radius: ");
    scanf("%lf", &r);
 
    printf("circumference is: %lf\n", 2*M_PI*r);
 
    return 0;
}