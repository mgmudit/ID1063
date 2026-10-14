//Code by Mudit
//Date: 14/10/2026
#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0, j = 0;

    // Find the end of the first string
    while (dest[i] != '\0')
    {
        i++;
    }

    // Add a space between the two words
    dest[i] = ' ';
    i++;

    // Append the second string to the first
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Terminate the concatenated string
    dest[i] = '\0';

    return dest;
}

int main()
{
    char dest[200], src[100];

    // Take the two words as input
    printf("Enter 1st word: ");
    scanf("%99s", dest);

    printf("Enter 2nd word: ");
    scanf("%99s", src);

    // Concatenate and display the result
    my_strcat(dest, src);
    printf("Concatenated string: %s\n", dest);

    return 0;
}
