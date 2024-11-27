#include <stdio.h>

int main() {
    int num[5];
  for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            num[i] += 3; 
        } else {
            num[i] += 2;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

