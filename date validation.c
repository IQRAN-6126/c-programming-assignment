#include <stdio.h>

int main()
{
    int d, m, y, valid = 1;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    if (m < 1 || m > 12)
        valid = 0;
    else {
        int daysInMonth;
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            daysInMonth = 31;
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            daysInMonth = 30;
        else if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            daysInMonth = 29;
        else
            daysInMonth = 28;

        if (d < 1 || d > daysInMonth)
            valid = 0;
    }

    if (valid)
        printf("Valid date\n");
    else
        printf("Invalid date\n");

    return 0;
}
