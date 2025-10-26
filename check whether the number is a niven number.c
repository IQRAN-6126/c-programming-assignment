#include <stdio.h> 

int main() 
{ 
    int number, sum = 0, temp; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 
    temp = number; 

    while(temp > 0) 
    { 
        sum += temp % 10; 
        temp /= 10; 
    } 

    if(number % sum == 0) 
        printf("\n%d is a Niven number", number); 
    else 
        printf("\n%d is not a Niven number", number); 

    return 0; 
}
