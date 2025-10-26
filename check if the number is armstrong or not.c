#include <stdio.h> 

int main() 
{ 
    int number, sum = 0, temp, remainder; 
    printf("\nEnter a 3-digit number: "); 
    scanf("%d", &number); 
    temp = number; 

    while(temp != 0) 
    { 
        remainder = temp % 10; 
        sum += remainder * remainder * remainder; 
        temp /= 10; 
    } 

    if(sum == number) 
        printf("\n%d is an Armstrong number", number); 
    else 
        printf("\n%d is not an Armstrong number", number); 

    return 0; 
}
