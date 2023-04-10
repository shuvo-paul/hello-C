#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, length, k, f, i;
    k = 0;
    f = 1;

    scanf("%d %s", &n, s);
    
    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        if (s[i] == '!') {
            k++;
        }
    }

    i = 0;
    while (1)
    {
        f = f * n;
        n = n - k;
        i++;

        if(n <= 1) {
            break;
        }
    }
    
    

    printf("%d\n", f);
}