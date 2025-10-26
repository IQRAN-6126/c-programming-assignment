#include <stdio.h> 

int main() 
{ 
    int i, searchElement, flag = 0; 
    int arr[] = {5, 12, 1, 0, -6}; 
     
    printf("\nEnter an integer: "); 
    scanf("%d",&searchElement); 
     
    for(i = 0; i < 5; ++i) 
    { 
        if(searchElement == arr[i]) 
        { 
            flag = 1; 
            break; 
        } 
    } 
     
    if(flag == 0) 
    { 
        printf("\nThe element is not present in the array"); 
    } 
    else 
    { 
        printf("\nThe element is present in the array at index %d",i); 
    } 
     
    return 0; 
}
