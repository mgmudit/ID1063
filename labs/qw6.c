//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>

int main()
{
    int n;

    printf("Enter integer n: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter %d characters:\n", n);

    // Read exactly n characters
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    // Add null character to make it a valid C string
    str[n] = '\0';

    printf("String: %s\n", str);

    return 0;
}
