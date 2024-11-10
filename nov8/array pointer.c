#include <stdio.h>
int main()
{
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int *ptr = arr;              
    int sum = 0;                 
    int n = sizeof(arr) / sizeof(arr[0]); 

    
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of the array elements: %d\n", sum);
    return 0;
}
}


