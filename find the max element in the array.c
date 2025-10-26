#include <stdio.h> 

int main() 
{ 
    int i, n, maximum; 
    printf("\nEnter the total number of elements to be stored in the array: "); 
    scanf("%d",&n); 
    int arr[n]; 
     
    for(i = 0; i < n; ++i) 
    { 
        printf("\nEnter an integer: "); 
        scanf("%d",&arr[i]); 
    } 
     
    maximum = arr[0]; 
    for(i = 0; i < n; ++i) 
    { 
        if(arr[i] > maximum) 
        { 
            maximum = arr[i]; 
        } 
    } 
     
    printf("\nThe maximum element in the array is %d",maximum); 
     
    return 0; 
}
