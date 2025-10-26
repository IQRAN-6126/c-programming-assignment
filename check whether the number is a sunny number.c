#include <stdio.h>

int main() 
{
    int number;
    printf("\nEnter a positive integer: ");
    scanf("%d", &number);

    int next = number + 1;
    int i = 1;

    while (i * i <= next)
    {
        if (i * i == next)
        {
            printf("\n%d is a Sunny number", number);
            return 0;
        }
        i++;
    }

    printf("\n%d is not a Sunny number", number);
    return 0;
}
