#include <stdio.h>

void rotateLeft(int d, int arr[], int n) {
    d = d % n;
    
    for (int i = d; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < d; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;
    
    scanf("%d %d", &n, &d);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    rotateLeft(d, arr, n);
    
    return 0;
}
