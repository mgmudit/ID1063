//Code by Mudit
//iDate: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

void randomVector(int *a, int n)
{
    double x;

    // Generate n uniform random numbers using sir's function
    uniform("vector.dat", n);

    FILE *fp = fopen("vector.dat", "r");

    // Convert each random number to an integer from 0 to 100
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &x);
        a[i] = (int)(x * 101);
    }

    fclose(fp);
}

int main()
{
    int n;

    // Read the length of the vector
    printf("Enter n: ");
    scanf("%d", &n);

    // Allocate memory for n elements
    int *a = malloc(n * sizeof(int));

    // Set a different random seed for each run
    srand(time(NULL));

    // Generate the random vector
    randomVector(a, n);

    // Print the vector
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    free(a);

    return 0;
}
