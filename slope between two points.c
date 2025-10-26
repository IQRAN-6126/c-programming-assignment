#include <stdio.h>

int main() 
{
    float x1, y1, x2, y2, slope;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    if (x2 - x1 == 0)
  {
        printf("Slope is undefined \n");
  }
    else 
  {
        slope = (y2 - y1) / (x2 - x1);
        printf("Slope = %.2f\n", slope);
  }
    return 0;
}
