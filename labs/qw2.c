#include <stdio.h>

void printBorder(int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("*");
    }

    printf("\n");
}

int main()
{
    int count;

    printf("Enter number of stars: ");
    scanf("%d", &count);

    printBorder(count);

    return 0;
}
