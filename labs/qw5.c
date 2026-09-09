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
    char str1[] = "madam";
    char str2[] = "hello";

    printf("Input: %s\n", str1);

    if (isPalindrome(str1))
        printf("Output: Palindrome\n");
    else
        printf("Output: Not a Palindrome\n");

    printf("\nInput: %s\n", str2);

    if (isPalindrome(str2))
        printf("Output: Palindrome\n");
    else
        printf("Output: Not a Palindrome\n");

    return 0;
}
