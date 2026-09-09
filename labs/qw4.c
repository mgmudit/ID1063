//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>

int main()
{
    char str[] = "banana";
    char ch = 'n';
    int index = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            index = i;
            break;
        }
    }

    printf("Input: %s\n", str);
    printf("character: %c\n", ch);
    printf("Output: %d\n", index);

    return 0;
}
