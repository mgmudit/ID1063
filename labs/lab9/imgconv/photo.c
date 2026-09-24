//Code by Mudit
//Date: 24/09/2026
#include <stdio.h>

int main()
{
    int T;
    int pixel;

    // Read threshold
    scanf("%d", &T);

    // Read grayscale pixels and apply threshold
    while (scanf("%d", &pixel) == 1)
    {
        if (pixel >= T)
            printf("255\n");
        else
            printf("0\n");
    }

    return 0;
}
