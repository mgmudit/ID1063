//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Enter the elements ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Find the position of the minimum value
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[min_index])
            min_index = i;
    }

    // Point to the cursed chest
    int *p = &a[min_index];

    // Remove all coins from the cursed chest
    *p = 0;
    
    printf("The modified array is ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
