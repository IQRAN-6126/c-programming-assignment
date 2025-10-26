#include <stdio.h> 

int main() 
{ 
    int n, i, first, second; 
    printf("\nEnter the number of elements: "); 
    scanf("%d",&n); 
    int arr[n]; 

    for(i = 0; i < n; i++) 
    { 
        printf("\nEnter element %d: ", i+1); 
        scanf("%d", &arr[i]); 
    } 

    first = second = arr[0]; 
    for(i = 0; i < n; i++) 
    { 
        if(arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
        else if(arr[i] > second && arr[i] != first) 
        { 
            second = arr[i]; 
        } 
    } 

    printf("\nThe second highest element is %d", second); 
    return 0; 
}
