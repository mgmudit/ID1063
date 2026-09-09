//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dynamically allocate memory for a string
char *createChar(int n)
{
    char *a;

    a = (char *)malloc((n + 1) * sizeof(char));

    return a;
}

int main()
{
    int n = 100;
    char x, y;

    // Dynamically allocate memory for the input string
    char *str = createChar(n);

    printf("Input: ");
    fgets(str, n + 1, stdin);

    // Remove the newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    printf("Character to replace: ");
    scanf(" %c", &x);

    printf("Replace with: ");
    scanf(" %c", &y);

    // Replace every occurrence of x with y
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == x)
            str[i] = y;
    }

    printf("Output: %s\n", str);

    // Release dynamically allocated memory
    free(str);

    return 0;
}
