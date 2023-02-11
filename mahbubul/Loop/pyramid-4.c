#include <stdio.h>

int main() {
    int height, col;

    printf("Please enter height: ");

    scanf("%d", &height);

    for (int row = height; row >= 1; row--)
    {
        for (col = 1; col <= height-row; col++)
        {
            printf(".");
        }

        for (col = 1; col <= row; col++)
        {
            printf("%d", col);
        }

        for (col = row-1; col >=1; col--)
        {
            printf("%d", col);
        }

        for (col = 1; col <= height - row; col++)
        {
            printf(".");
        }

        printf("\n");
    }
}