#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); // do dai mang  

    printf("Do dai cua mang: %d\n", length);
    printf("Cac phan tu: ");
    for (int i = 0; i < length; ++i) {
        printf("%d\n ", arr[i]);
    }
    return 0;
}

