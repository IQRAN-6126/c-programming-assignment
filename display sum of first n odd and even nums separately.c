#include <stdio.h> 

int main() 
{ 
    int n, i, sumOdd = 0, sumEven = 0; 
    printf("\nEnter the value of n: "); 
    scanf("%d", &n); 

    for(i = 1; i <= n; i++) 
    { 
        sumOdd += (2 * i - 1); 
        sumEven += (2 * i); 
    } 

    printf("\nSum of first %d odd numbers = %d", n, sumOdd); 
    printf("\nSum of first %d even numbers = %d", n, sumEven); 
    return 0; 
}
