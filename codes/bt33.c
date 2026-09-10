//Code by Mudit
//Date: 10/09/2026
#include <stdio.h>
#include <math.h>

int main()
{
    double x = 1.0;          // Given initial guess x0 = 1
    double next_x;
    int iterations = 6;

    printf("Newton-Raphson Method\n");
    printf("Equation: e^x - 2 = 0\n");
    printf("Difference equation: x[n+1] = x[n] - 1 + 2e^(-x[n])\n\n");

    printf("n\t x[n]\n");

    // Print the initial value
    printf("0\t %.8lf\n", x);

    // Apply the Newton-Raphson update repeatedly
    for (int n = 0; n < iterations; n++)
    {
        // x[n+1] = x[n] - 1 + 2e^(-x[n])
        next_x = x - 1.0 + 2.0 * exp(-x);

        printf("%d\t %.8lf\n", n + 1, next_x);

        // Use the new value in the next iteration
        x = next_x;
    }

    return 0;
}
