#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d\n", (n*(n+1))/2);
    } else if (n < 0)
    {
        printf("%d\n", ((2 - n) * (n + 1)) / 2);
    } else {
        printf("1\n");
    }
    return 0;
}