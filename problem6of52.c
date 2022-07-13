#include <stdio.h>

int main() {
    int t, n, msd, lsd;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        lsd = n%10;

        while(1) {
            n = n / 10;
            if(n == 0) {
                break;
            }
            msd = n%10;
        }
        printf("%d\n", msd + lsd);
    }
    return 0;
}