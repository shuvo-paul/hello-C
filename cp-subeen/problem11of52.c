#include <stdio.h>
#include <math.h>

int main() {
    int T, n, i, j;

    long long int f = 1;

    printf("Total inputs: ");
    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        scanf("%d", &n);

        for(j = 2; j <= n; j++) {
            f = f * j;
        }

        printf("%lld\n", f);

    }

    return 0;
}