#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for (i = 0, j = 9; i < 10 && i < j; i++, j--)
    {
        /* code */
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for ( i = 0; i < 10; i++)
    {
        /* code */

        printf("number %d\n", arr[i]);
    }
    
}