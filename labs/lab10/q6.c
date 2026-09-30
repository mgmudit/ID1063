//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>

int main() {
    int a, b;
    int *p;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Point p to the smaller value
    if (a < b)
        p = &a;
    else
        p = &b;

    // Add 10 using the pointer
    *p = *p + 10;

    printf("The output after adding 10 %d %d\n", a, b);

    return 0;
}
