#include <stdio.h>

int main() {
    int height;

    printf("Please enter height: ");

    scanf("%d", &height);

    for (int row = 1; row <= height; row++)
    {
        for (int i = 1; i <= height - row; i++)
        {
            printf(" ");
        }

        for (int i = 1; i <= 2*row-1; i++)
        {
            printf("*");
        }
        
        
        printf("\n");
        
    }
}