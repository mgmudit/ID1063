//Code by Mudit
//Date: 09/09/2026
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Reference for dynamic memory allocation:
// https://github.com/gadepall/cprog/blob/main/codes/msoft/libs/matfun.h
// Adapted createMat() allocation from double to char
char *createChar(int n)
{
    char *a;

    a = (char *)malloc((n + 1) * sizeof(char));

    return a;
}

int main()
{
    int n;
    int ch;

    printf("Enter n: ");
    scanf("%d", &n);

    // Remove the newline left behind by scanf
    while ((ch = getchar()) != '\n' && ch != EOF);

    char *str = createChar(n);

    printf("Enter %d characters: ", n);

    // Read characters including spaces
    fgets(str, n + 1, stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("String: %s\n", str);

    free(str);

    return 0;
}
