#include <stdio.h>
#include <math.h>

int main() {
    int t, n, i;
    double r;

    printf("Print inputs: ");
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        printf("Case %d: ", i+1);
        scanf("%d", &n);
        r = sqrt(n);

        if(ceil(r) == floor(r)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}