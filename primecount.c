//desc: display count of prime number from array of integer (10x input by user)
//author: vermilion10
//date: november 2024

#include <stdio.h>

int cekPrima(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[10], count = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (cekPrima(arr[i])) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
