#include <stdio.h> 

int main() 
{ 
    int i, left, right, temp; 
    int arr[5]; 
     
    for(i = 0; i < 5; ++i) 
    { 
        printf("\nEnter arr[%d]: ",i); 
        scanf("%d",&arr[i]); 
    } 
     
    printf("\nOriginal array is as follows: "); 
    for(i = 0; i < 5; ++i) 
    { 
        printf("arr[%d] = %d\t",i,arr[i]); 
    } 
     
    left = 0;   
    right = 4;  
     
    while(left < right) 
    { 
        temp = arr[left]; 
        arr[left] = arr[right]; 
        arr[right] = temp; 
        ++left; 
        --right; 
    } 
     
    printf("\nReversed array is as follows: "); 
    for(i = 0; i < 5; ++i) 
    { 
        printf("arr[%d] = %d\t",i,arr[i]); 
    } 
     
    return 0; 
}
