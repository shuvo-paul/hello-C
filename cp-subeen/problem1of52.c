#include <stdio.h>

int main() {
    int T, n;
    int i = 0;

    scanf("%d", &T);

    while(i < T) {
        scanf("%d", &n);

        if(n % 2 == 0) {
            printf("even\n");
        }else {
            printf("odd\n");
        }
        i++;
    }
}