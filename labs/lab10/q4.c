//Code by Mudit
//Date: 30/09/2026
#include <stdio.h>

int main() {
    unsigned int hours, minutes, seconds;
    unsigned int total;

    // Read hours, minutes and seconds
    printf("Enter hours, minutes and seconds: ");
    scanf("%u %u %u", &hours, &minutes, &seconds);

    // Convert everything to seconds
    total = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds elapsed are %u\n", total);

    return 0;
}
