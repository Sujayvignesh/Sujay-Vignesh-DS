#include <stdio.h>

int hourglassSum(int arr[6][6]) {
    int max_sum = -63; 
    
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            int top = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1];
            int middle = arr[i][j];
            int bottom = arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            
            int hourglass = top + middle + bottom;
            
            if (hourglass > max_sum) {
                max_sum = hourglass;
            }
        }
    }
    
    return max_sum;
}

int main() {
    int arr[6][6];
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int result = hourglassSum(arr);
    printf("%d\n", result);
    
    return 0;
}
