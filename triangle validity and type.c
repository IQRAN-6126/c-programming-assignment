#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid triangle: sides must be positive\n");
    }
    else if ((a + b > c) && (a + c > b) && (b + c > a))
    {                                                                                                
        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return 0;
}
