#include <stdio.h>
#include <math.h>

double rms(double a[], int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * a[i];
    }

    return sqrt(sum / n);
}

int main()
{
    int n;
    scanf("%d", &n);

    double a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }

    printf("%.2f\n", rms(a, n));

    return 0;
}
