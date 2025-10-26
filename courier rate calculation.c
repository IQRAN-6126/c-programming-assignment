#include <stdio.h>

int main() {
    float weight, charge = 0.0;
    char type;

    printf("Enter weight of parcel (in kg): ");
    scanf("%f", &weight);
    printf("Enter courier type (I for International / D for Domestic): ");
    scanf(" %c", &type);

    if (weight <= 5)
        charge = weight * 800;
    else if (weight <= 10)
        charge = 5 * 800 + (weight - 5) * 700;
    else
        charge = 5 * 800 + 5 * 700 + (weight - 10) * 500;

    if (type == 'I' || type == 'i')
        charge += 1500;

    printf("Total courier charge = Rs. %.2f\n", charge);

    return 0;
}
