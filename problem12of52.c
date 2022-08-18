#include <stdio.h>
#include <math.h>
//TODO: need to understand how this formula works
int main() {
    int T, n, i, count;

    printf("Total inputs: ");
    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        scanf("%d", &n);
        count = 0;
        while (n > 0)
        {
            count += n/5;
            n /= 5; //pow trick of the formula
        }

        printf("%d\n", count);
    }

    return 0;
}