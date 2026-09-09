//Code by Mudit 
//Date: 09/09/2026
#include <stdio.h>

int main()
{
    char str[100];
    char temp;

    printf("Enter a word: ");
    scanf("%s", str);

    temp = str[0];
    str[0] = str[1];
    str[1] = temp;

    printf("Modified word: %s\n", str);

    return 0;
}
