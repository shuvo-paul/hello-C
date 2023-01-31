#include <stdio.h>
#include <string.h>

int main()
{
    char word[80];
    int i, length, result;
    result = 1;

    scanf("%s", word);

    length = strlen(word);

    for (i = 0; i < length; i++)
    {
        if (i <= length-1-i)
        {
            if (word[i] != word[length-1-i])
            {
                result = 0;
            }
        }
    }
    
    if (result)
    {
        printf("%s is a palindrome.\n", word);
    }
    else
    {
        printf("%s is not a palindrome.\n", word);
    }
    
}