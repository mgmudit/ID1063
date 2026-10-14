//Code by Mudit
//Date: 14/10/2026

#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    char *p = dest;

    // Move p to the end of dest
    while (*p != '\0')
        p++;

    // Add a space
    *p++ = ' ';

    // Append src using pointers
    while (*src != '\0')
        *p++ = *src++;

    // End the resulting string
    *p = '\0';

    return dest;
}

int main()
{
    char dest[200], src[100];

    printf("Enter 1st word: ");
    scanf("%99s", dest);

    printf("Enter 2nd word: ");
    scanf("%99s", src);

    my_strcat(dest, src);

    printf("Result: %s\n", dest);

    return 0;
}

