#include <stdio.h>

int main() {
    int height, row, col;

    printf("Please enter height: ");

    scanf("%d", &height);

    for (row = 1; row <= height; row++)
    {
        for (int i = 1; i <= height - row; i++)
        {
            printf(".");
        }

        for (int i = 1; i <= 2*row-1; i++)
        {
            printf("*");
        }

        for (int i = 1; i <= height - row; i++)
        {
            printf(".");
        }
        printf("\n");
        
    }

    for (row = height - 1; row > 0; row--)
    {
        for (int i = 1; i <= height - row; i++)
        {
            printf(".");
        }

        for (int i = 1; i <= 2 * row - 1; i++)
        {
            printf("*");
        }

        for (int i = 1; i <= height - row; i++)
        {
            printf(".");
        }
        printf("\n");
    }
}