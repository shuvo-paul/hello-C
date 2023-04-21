#include <stdio.h>
#include <stdbool.h>


int nth_prime(int n) {
    int num =2, count = 0, primes[n];

    while (count < n) {
        bool is_prime = true;

        for (int i = 0; i < count; i++)
        {
            if (num % primes[i] == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            primes[count] = num;
            count++;
        }

        num++;
    }
    return primes[n-1];
}

int main() {

    int k, n, result;

    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        if(n <= 15000) {
            result = nth_prime(n);
            printf("%d\n", result);
            continue;
        }
        printf("The number can't exceed 15000.\n");
        i--;
    }

    return 0;
}