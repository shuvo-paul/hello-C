#include <stdio.h>

int main() {
    int n = 1000;
    int b = 5;
    while(n > 0) {
        printf("%d\t", n);
        b--;
        if(b == 0) {
            printf("\n");
            b = 5;
        }

        n--;
    }

    return 0;
}