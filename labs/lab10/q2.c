//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

void binaryMatrix(int a[][100], int n, int m)
{
    double x;

    // Generate n*m random numbers using sir's uniform() function
    uniform("matrix.dat", n * m);

    FILE *fp = fopen("matrix.dat", "r");

    // Convert random numbers into 0 or 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }

    fclose(fp);
}

void printMatrix(int a[][100], int n, int m)
{
    // Print the generated binary matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }
}

void minesweeper(int a[][100], int n, int m)
{
    // Find the Minesweeper value for every cell
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // A mine is represented by -1
            if (a[i][j] == 1)
            {
                printf("-1 ");
                continue;
            }

            int count = 0;

            // Check all possible neighboring cells
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    if (di == 0 && dj == 0)
                        continue;

                    int r = i + di;
                    int c = j + dj;

                    // Make sure the neighbor is inside the matrix
                    if (r >= 0 && r < n && c >= 0 && c < m)
                        count += a[r][c];
                }
            }

            printf("%d ", count);
        }

        printf("\n");
    }
}

int main()
{
    int n, m;
    int a[100][100];

    // Read the number of rows and columns
    printf("Enter the dimensions: ");
    scanf("%d %d", &n, &m);

    // Set a different random seed for each run
    srand(time(NULL));

    // Generate the random binary matrix
    binaryMatrix(a, n, m);

    printf("Generated Matrix:\n");
    printMatrix(a, n, m);

    printf("\nMinesweeper Solution:\n");
    minesweeper(a, n, m);

    return 0;
}
