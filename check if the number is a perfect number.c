#include <stdio.h> 

int main() 
{ 
    int number, i, sum = 0; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 

    for(i = 1; i < number; i++) 
    { 
        if(number % i == 0) 
            sum += i; 
    } 

    if(sum == number) 
        printf("\n%d is a perfect number", number); 
    else 
        printf("\n%d is not a perfect number", number); 

    return 0; 
}
