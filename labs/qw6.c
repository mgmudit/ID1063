//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <stdlib.h>

// Dynamically allocate memory for n characters and '\0'
char *createChar(int n)
{
    char *a;

    a = (char *)malloc((n + 1) * sizeof(char));

    return a;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    // Create a dynamically allocated character array
    char *str = createChar(n);

    printf("Enter %d characters:\n", n);

    // Store n characters in the array
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    // Null character makes the character array a valid C string
    str[n] = '\0';

    printf("String: %s\n", str);

    free(str);

    return 0;
}
