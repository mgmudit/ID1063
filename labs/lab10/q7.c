//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

void randomArray(int *a, int n)
{
    double x;

    // Generate n uniform random numbers using sir's function
    uniform("array.dat", n);

    FILE *fp = fopen("array.dat", "r");

    // Convert the random numbers into values from 0 to 100
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &x);
        a[i] = (int)(x * 101);
    }

    fclose(fp);
}

void cursedChest(int *a, int n)
{
    int *p = &a[0];

    // Find the chest containing the minimum number of coins
    for (int i = 1; i < n; i++)
    {
        if (a[i] < *p)
            p = &a[i];
    }

    // Remove all coins from the cursed chest
    *p = 0;
}

int main()
{
    int n;

    // Read the number of treasure chests
    printf("Enter length of array: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));

    // Set a different random seed for each run
    srand(time(NULL));

    // Generate the random array
    randomArray(a, n);

    printf("Generated array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nUpdated array:\n");

    // Find the minimum using a pointer and set it to 0
    cursedChest(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    free(a);

    return 0;
}
