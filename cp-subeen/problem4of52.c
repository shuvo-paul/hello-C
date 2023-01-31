#include <stdio.h>

int main() {
    int t, i, j;

    scanf("%d", &t);
    int n[t];
    for(i = 0; i < t; i++) {
        printf("Enter Case %d: ", i+1);
        scanf("%d", &n[i]);
    }

    for(i = 0; i < t; i++) {
        printf("Case %d: ", i+1);

        for(j=2; j <= n[i]; j++) {
            if(n[i] % j == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}