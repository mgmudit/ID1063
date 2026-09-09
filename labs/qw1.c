#include <stdio.h>

double calculateArea(double length, double width)
{
    return length * width;
}

int main()
{
    double length, width, area;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);

    area = calculateArea(length, width);

    printf("Area = %.2lf\n", area);

    return 0;
}
