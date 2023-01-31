#include <stdio.h>
#include <math.h>

int ara[40];
int size = 40;

void print_ara()
{
    int i;

    for (i = 2; i < size; i++)
    {
        printf("%4d", ara[i]);
    }
    
    printf("\n");

    for (i = 2; i < size; i++)
    {
        printf("----");
    }
    
    printf("\n");

    for (i = 2; i < size; i++)
    {
        printf("%4d", i);
    }
    
    printf("\n\n\n");
}