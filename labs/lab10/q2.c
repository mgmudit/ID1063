//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include "coeffs.h"

int main()
{
    int m, n;
    double x;

    // Read the matrix dimensions
    printf("Enter the dimensions of matrix: ");
    scanf("%d %d", &m, &n);

    // Generate m*n random numbers using uniform() function
    uniform("matrix.dat", m * n);

    // Open the generated file for reading
    FILE *fp = fopen("matrix.dat", "r");

    // Convert the random numbers into 0 or 1
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }

    fclose(fp);

    return 0;
}
