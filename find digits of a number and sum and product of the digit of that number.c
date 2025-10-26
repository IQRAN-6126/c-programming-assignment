#include <stdio.h> 

int main() 
{ 
    int number, digitCount = 0, sum = 0, product = 1, temp; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 
    temp = number; 

    while(temp > 0) 
    { 
        int digit = temp % 10; 
        sum += digit; 
        product *= digit; 
        temp /= 10; 
        digitCount++; 
    } 

    printf("\nNumber of digits = %d", digitCount); 
    printf("\nSum of digits = %d", sum); 
    printf("\nProduct of digits = %d", product); 
    return 0; 
}
