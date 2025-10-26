#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float average;
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average =(float)(a + b + c + d + e) / 5.0;
    printf("Average = %.2f\n", average);
    return 0;
}
