#include<stdio.h>

void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                change(&arr[j], &arr[j + 1]);
            }
        }
    }
    
}

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int even[n], odd[n], evenCount = 0, oddCount = 0;
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    bubbleSort(even, evenCount);
    bubbleSort(odd, oddCount);
    for (i = 0; i < evenCount; i++) {
        arr[i] = even[i];
    }
    for (j = 0; j < oddCount; j++) {
        arr[i + j] = odd[j];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

