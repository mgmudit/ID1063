//Code by Mudit
//Date: 23/09/2026
#include <stdio.h>

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
    // Example data
    int n = 8;
    int k = 3;

    int a[8] = {1, 1, 0, 1, 1, 1, 1, 0};

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        int length = runLength(a, n, i);

        if (length > k)
        {
            // The violation occurs at the kth+1
            // studying session of this run.
            answer = i + k + 1;
            break;
        }
    }

    printf("n = %d\n", n);
    printf("k = %d\n", k);

    printf("Entries: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nPosition = %d\n", answer);

    return 0;
}
