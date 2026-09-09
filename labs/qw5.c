//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <string.h>

// Function to check whether a string is a palindrome
int isPalindrome(char str[])
{
    int len = strlen(str);

    // Compare characters from the beginning and the end
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;   // Not a palindrome
        }
    }

    return 1;   // Palindrome
}

int main()
{
    char str[100];

    printf("Input: ");

    // fgets is used to accept strings containing spaces
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Call the palindrome checking function
    if (isPalindrome(str))
        printf("Output: Palindrome\n");
    else
        printf("Output: Not a Palindrome\n");

    return 0;
}
