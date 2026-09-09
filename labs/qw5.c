//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
        printf("Output: Palindrome\n");
    else
        printf("Output: Not a Palindrome\n");

    return 0;
}
