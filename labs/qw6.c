//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <stdlib.h>

// Reference for dynamic memory allocation:
// https://github.com/gadepall/cprog/blob/main/codes/msoft/libs/matfun.h
// Adapted createMat() allocation from double to char
char *createChar(int n)
{
    char *a;

    // Allocate n characters + 1 for the null character '\0'
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

    // Store n characters in the allocated memory
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    // Add null character to make the array a valid C string
    str[n] = '\0';

    printf("String: %s\n", str);

    // Free the dynamically allocated memory
    free(str);

    return 0;
}
