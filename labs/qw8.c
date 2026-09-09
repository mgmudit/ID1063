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
    int n;
    char x, y;

    printf("Enter maximum string length: ");
    scanf("%d", &n);

    char *str = createChar(n);

    // Space before %c consumes the newline left by scanf
    scanf("%*c");

    printf("Input: ");
    fgets(str, n + 1, stdin);

    // Remove newline added by fgets, if present
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

    free(str);

    return 0;
}
