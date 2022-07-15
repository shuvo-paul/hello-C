#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, i, j, k, temp;

    printf("Total Input: ");
    scanf("%d", &t);
    int n[t][3];

    for(i = 0; i< t; i++) {
        printf("Case %d: ", i+1);
        scanf("%d %d %d", &n[i][0], &n[i][1], &n[i][2]);
    }

    for(i = 0; i < t; i++) {
        for(j = 0; j < 2; j++) {
            for(k = j+1; k < 3; k++) {
                if(n[i][j] > n[i][k]) {
                    temp = n[i][j];
                    n[i][j] = n[i][k];
                    n[i][k] = temp;
                }
            }
        }

        printf("Case %d: %d %d %d\n", i+1, n[i][0], n[i][1], n[i][2]);
    }

}