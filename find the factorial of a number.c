#include <stdio.h> 

int main() 
{ 
    int number, i; 
    unsigned long long factorial = 1; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 
    for(i = 1; i <= number; ++i) 
    { 
        factorial *= i; 
    } 
    printf("\nFactorial of %d is %llu", number, factorial); 
    return 0; 
}
