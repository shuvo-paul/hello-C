#include <stdio.h>

int main() {
    int t, i, j, k;
    printf("Total inputs: ");
    scanf("%d", &t);

    int n[t];

    for(i = 0; i < t; i++) {
        printf("Case %d: ", i+1);
        scanf("%d", &n[i]);
    }

    for(i = 0; i < t; i++) {
        printf("Case %d:\n", i+1);
        for(j = 0; j < n[i]; j++) {
            for(k = 0; k < n[i]; k++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}