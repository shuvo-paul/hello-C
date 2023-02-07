#include <stdio.h>
#include <math.h>

int main() {
    double a;
    int r;

    scanf("%lf", &a);
    a = sqrt(a);
    double decimal = a - (int) a;

    if (decimal > 0.5)
    {
        r = ceil(a);
    } else {
        r = floor(a);
    }
    
    printf("%d\n", r);
}