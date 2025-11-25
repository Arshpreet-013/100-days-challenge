//Rotate an array to the right by k positions.
#include <stdio.h>
void rotate(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    int temp[k];
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    // Shift the rest of the elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    // Copy the k elements from the temporary array to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }       
}
int main() {
    int i;
    int arr[5] = {10, 20, 30, 40, 50};  
    int n = 5; // Size of the array
    int k = 2; // Number of positions to rotate
    rotate(arr, n, k); // Rotate the array
    // Print the rotated array
    printf("Rotated array elements are:\n");
    for (i = 0; i < n; i++) {  
        printf("%d\n", arr[i]);
    }
    return 0;
}