#include <stdio.h> 

int main() 
{ 
    int age; 
    char citizen, criminal; 
    printf("\nEnter age: "); 
    scanf("%d", &age); 
    printf("\nAre you a citizen? (Y/N): "); 
    scanf(" %c", &citizen); 
    printf("\nDo you have a criminal record? (Y/N): "); 
    scanf(" %c", &criminal); 

    if(age >= 18 && (citizen == 'Y' || citizen == 'y') && (criminal == 'N' || criminal == 'n')) 
    { 
        if(age >= 60) 
            printf("\nSenior Citizen Eligible"); 
        else 
            printf("\nEligible"); 
    } 
    else 
    { 
        printf("\nNot eligible"); 
        if(age < 18) 
            printf("\nReason: Age below 18"); 
        if(citizen == 'N' || citizen == 'n') 
            printf("\nReason: Not a citizen"); 
        if(criminal == 'Y' || criminal == 'y') 
            printf("\nReason: Criminal record present"); 
    } 
    return 0; 
}
