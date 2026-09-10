//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}
