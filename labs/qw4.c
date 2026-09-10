//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int index = -1;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    // Search for the first occurrence
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            index = i;
            break;
        }
    }

    printf("Index: %d\n", index);

    return 0;
}
