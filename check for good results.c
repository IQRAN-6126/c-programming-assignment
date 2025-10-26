#include <stdio.h>

int main()
{
    int m1, m2, m3;
    float avg;

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;

    if (avg >= 60 || m1 >= 80 || m2 >= 80 || m3 >= 80)
        printf("Good result\n");
    else
        printf("Needs improvement\n");

    return 0;
}
