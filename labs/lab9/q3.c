//Code by Mudit
//Date: 23/09/2026
#include <stdio.h>

// Finds consecutive 1s starting from position i
int runLength(int a[], int n, int i)
{
    if (a[i] == 0)
        return 0;

    int count = 0;

    while (i < n && a[i] == 1)
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    int n, k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    int a[n];

    printf("Enter the entries: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int answer = 0;

    // Check each position for a violation
    for (int i = 0; i < n; i++)
    {
        int length = runLength(a, n, i);

        if (length > k)
        {
            // Convert 0-based index to session number
            answer = i + k + 1;
            break;
        }
    }

    printf("Output = %d\n", answer);

    return 0;
}
