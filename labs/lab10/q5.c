//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, temperature;
    bool safe = true;
    
    // Taking the input
    scanf("%d", &n);

    // Check each temperature reading
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperature);

        if (temperature < 20 || temperature > 80) {
            safe = false;
        }
    }
    
    // Printing the conditions
    if (safe)
        printf("Safe\n");
    else
        printf("Unsafe\n");

    return 0;
}
