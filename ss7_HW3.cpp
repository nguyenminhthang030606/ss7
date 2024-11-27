#include <stdio.h>

int main() {
    int num[5],sochan = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) sochan = 1;
    }

    if (sochan) {
        for (int i = 0; i < 5; i++) {
            if (num[i] % 2 != 0) num[i] += 1;
            printf("%d ", num[i]);
        }
    } else {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

