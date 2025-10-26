#include <stdio.h> 

int main() 
{ 
    int number, reversed = 0, remainder, original; 
    printf("\nEnter a positive integer: "); 
    scanf("%d", &number); 
    original = number; 

    while(number != 0) 
    { 
        remainder = number % 10; 
        reversed = reversed * 10 + remainder; 
        number /= 10; 
    } 

    if(original == reversed) 
        printf("\nThe number is a palindrome"); 
    else 
        printf("\nThe number is not a palindrome"); 

    return 0; 
}
