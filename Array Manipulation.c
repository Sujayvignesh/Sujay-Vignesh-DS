#include <stdio.h>

int arrayManipulation(int n, int queries[][3], int q) {
    long long arr[n + 1];  
    for (int i = 0; i <= n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < q; i++) {
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];

        arr[a - 1] += k;  
        if (b < n) {
            arr[b] -= k;  
        }
    }

    long long max_value = 0;
    long long current_value = 0;
    for (int i = 0; i < n; i++) {
        current_value += arr[i];
        if (current_value > max_value) {
            max_value = current_value;
        }
    }

    return max_value;
}

int main() {
    int n, q;

    scanf("%d %d", &n, &q);

    int queries[q][3];
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &queries[i][0], &queries[i][1], &queries[i][2]);
    }

    int result = arrayManipulation(n, queries, q);

    printf("%d\n", result);

    return 0;
}
