#include <stdio.h> 

int main() 
{ 
    float principal, rate, time, si; 
    printf("\nEnter principal, rate and time: "); 
    scanf("%f %f %f", &principal, &rate, &time); 
    si = (principal * rate * time) / 100; 
    printf("\nSimple Interest is %.2f", si); 
    return 0; 
}
