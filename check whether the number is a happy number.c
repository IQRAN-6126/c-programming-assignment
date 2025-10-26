#include <stdio.h> 

int main() 
{ 
    int number, temp, sum, digit; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 

    while(number != 1 && number != 4) 
    { 
        sum = 0; 
        temp = number; 
        while(temp > 0) 
        { 
            digit = temp % 10; 
            sum += digit * digit; 
            temp /= 10; 
        } 
        number = sum; 
    } 

    if(number == 1) 
        printf("\nThe number is a Happy number"); 
    else 
        printf("\nThe number is not a Happy number"); 

    return 0; 
}
