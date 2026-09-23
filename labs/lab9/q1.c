//Code by Mudit
//Date: 23/09/2026
#include <stdio.h>
#include <math.h>

double norm(double a[], int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * a[i];
    }

    return sqrt(sum);
}


double rms(double a[], int n)
{
    n = n;   // n is already supplied

    double normA = norm(a, n);

    return normA / sqrt(n);
}


int main()
{
    // Example 1
    int n1 = 4;
    double a1[] = {4, 3, 0, 5};

    // Example 2
    int n2 = 4;
    double a2[] = {1, -1, 1, -1};

    // Example 3
    int n3 = 1;
    double a3[] = {7.5};

    double answer1 = rms(a1, n1);
    double answer2 = rms(a2, n2);
    double answer3 = rms(a3, n3);


    printf("Example 1:\n");
    printf("n = %d\n", n1);
    printf("Readings = ");

    for (int i = 0; i < n1; i++)
        printf("%g ", a1[i]);

    printf("\nNorm = %.4f", norm(a1, n1));
    printf("\nRMS = %.2f\n\n", answer1);


    printf("Example 2:\n");
    printf("n = %d\n", n2);
    printf("Readings = ");

    for (int i = 0; i < n2; i++)
        printf("%g ", a2[i]);

    printf("\nNorm = %.4f", norm(a2, n2));
    printf("\nRMS = %.2f\n\n", answer2);


    printf("Example 3:\n");
    printf("n = %d\n", n3);
    printf("Readings = ");

    for (int i = 0; i < n3; i++)
        printf("%g ", a3[i]);

    printf("\nNorm = %.4f", norm(a3, n3));
    printf("\nRMS = %.2f\n", answer3);


    return 0;
}
