#include <stdio.h> 

int main() 
{ 
    int males, females; 
    float ratio; 
    printf("\nEnter number of males and females: "); 
    scanf("%d %d", &males, &females); 
    ratio = (float)males / females; 
    printf("\nGender ratio is %.2f", ratio); 
    return 0; 
}
