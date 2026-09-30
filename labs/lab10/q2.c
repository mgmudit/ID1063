//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include "coeffs.h"

void binaryMatrix(int n, int m)
{
    double x;

    // Generate n*m random numbers using uniform() function
    uniform("matrix.dat", n * m);

    // Open the file containing the random numbers
    FILE *fp = fopen("matrix.dat", "r");

    // Read the numbers row by row and convert them to 0 or 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                printf("0 ");
            else
                printf("1 ");
        }

        printf("\n");
    }

    // Close the file
    fclose(fp);
}

int main()
{
    int n, m;

    // Read the number of rows and columns
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &n, &m);

    // Generate and print the binary matrix
    binaryMatrix(n, m);

    return 0;
}
