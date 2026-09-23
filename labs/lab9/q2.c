//Code by Mudit
//Date: 23/09/2026
#include <stdio.h>

int daysElapsed(int day, int month)
{
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    int total = day;

    for (int i = 0; i < month - 1; i++)
    {
        total += days[i];
    }

    return total;
}

int main()
{
    int day, month;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    int answer = daysElapsed(day, month);

    printf("Days elapsed = %d\n", answer);

    return 0;
}
