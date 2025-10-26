#include <stdio.h> 

int main() 
{ 
    float height, weight, bmi; 
    int age; 
    printf("\nEnter height (in meters) and weight (in kilograms): "); 
    scanf("%f %f", &height, &weight); 
    printf("\nEnter age: "); 
    scanf("%d", &age); 

    bmi = weight / (height * height); 
    printf("\nBMI = %.2f", bmi); 

    if(bmi < 18.5) 
        printf("\nUnderweight"); 
    else if(bmi < 25) 
        printf("\nNormal"); 
    else if(bmi < 30) 
        printf("\nOverweight"); 
    else 
        printf("\nObese"); 

    if((bmi >= 25) && (age > 40)) 
        printf("\nConsult doctor"); 

    return 0; 
}
