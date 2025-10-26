#include <stdio.h> 

int main() 
{ 
    int n, i; 
    int term = 1; 
    printf("\nEnter the number of terms: "); 
    scanf("%d", &n); 

    printf("\nSeries: "); 
    for(i = 1; i <= n; i++) 
    { 
        printf("%d ", term); 
        term *= 2; 
    } 
    return 0; 
}
