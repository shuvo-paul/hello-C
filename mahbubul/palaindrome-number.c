#include <stdio.h>

int main() {
    int num, reversed;

    scanf("%d", &num);
    reversed = ((num%10)*10) + (num/10);

    if (num == reversed)
    {
        printf("plaindrome number\n");
        return 0;
    }

    printf("Not plaindrome\n");

    return 0;
    
}