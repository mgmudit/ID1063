//Code by Mudit
//Date: 23/09/2026
#include <stdio.h>
#include <math.h>

//Definig the function given in the question
int firstStable(double a[], int n, double tolerance)
{   
    //Checking one by one
    for (int i = 0; i < n - 1; i++)
    {
        if (fabs(a[i + 1] - a[i]) <= tolerance)
            return i;
    }
    
    //If no such found return -1
    return -1;
}

int main()
{
    int n;
    double tolerance;
    
    //Taking input
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);

    double a[n];
    printf("Enter the values: ");

    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    printf("Enter tolerance: ");
    scanf("%lf", &tolerance);

    //Using the function
    printf("Output is %d\n", firstStable(a, n, tolerance));

    return 0;
}
