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

    if(sum > number) 
        printf("\n%d is an Abundant number", number); 
    else 
        printf("\n%d is not an Abundant number", number); 

    return 0; 
}
