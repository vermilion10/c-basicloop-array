//desc: menentukan apakah komposisi kue K dan Kue L sama
//author: vermilion10
//date: November 2024

#include <stdio.h>
#include <string.h>

int hitungKesamaan(char kueK[][10], char kueL[][10], int pjgK, int pjgL) {
    int sama = 0;
    for (int i = 0; i < pjgK; i++) {
        for (int j = 0; j < pjgL; j++) {
            if (strcmp(kueK[i], kueL[j]) == 0) {
                sama++;
                break;
            }
        }
    }
    return sama;
}

int main() {
    float N;
    char kueK[8][10], kueL[8][10];
    int pjgK = 0, pjgL = 0;

    // Meminta pengguna memasukkan batas minimal kesamaan
    printf("Masukkan batas minimal kesamaan (50 <= N <= 100): ");
    scanf("%f", &N);

    // Meminta pengguna memasukkan komposisi kue K
    printf("Masukkan komposisi kue K (pisahkan dengan spasi, maksimal 8 bahan): ");
    while (scanf("%s", kueK[pjgK]) == 1) {
        pjgK++;
        if (getchar() == '\n') break;
    }

    // Meminta pengguna memasukkan komposisi kue L
    printf("Masukkan komposisi kue L (pisahkan dengan spasi, maksimal 8 bahan): ");
    while (scanf("%s", kueL[pjgL]) == 1) {
        pjgL++;
        if (getchar() == '\n') break;
    }

    int sama = hitungKesamaan(kueK, kueL, pjgK, pjgL);
    float persentaseKesamaanK = ((float)sama / pjgK) * 100;
    float persentaseKesamaanL = ((float)sama / pjgL) * 100;

    if (persentaseKesamaanK >= N || persentaseKesamaanL >= N) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}