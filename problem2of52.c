#include <stdio.h>
#include <string.h>

int main() {
    int T;
    int i = 0;
    char n[101];

    scanf("%d", &T);

    while(i < T) {
        scanf("%s", n);

        int length = strlen(n);
        int last = (int) n[length - 1];

        if(last % 2 == 0) {
            printf("even\n");
        }else {
            printf("odd\n");
        }
        i++;
    }
}