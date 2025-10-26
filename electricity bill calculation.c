#include <stdio.h>

int main()
{
    float units, bill = 0.0;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units <= 100)
        bill = units * 2;
    else if (units <= 300)
        bill = 100 * 2 + (units - 100) * 3;
    else
        bill = 100 * 2 + 200 * 3 + (units - 300) * 4;

    if (units > 300)
        bill += bill * 0.025; 

    printf("Total Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
