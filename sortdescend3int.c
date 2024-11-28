/*DESC: MENGURUTKAN TIGA DATA INTEGER YANG DIMASUKKAN SECARA DESCENDING
AUTHOR: vermilion10
DATE: 28 NOVEMBER 2024*/

#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int x, y, z;
    printf("input 3 bilangan integer (pisah spasi): ");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y){
        swap(&x, &y);
    }
    if (x < z){
        swap(&x, &z);
    }
    if (y < z){
        swap(&y, &z);
    }
    printf("urutan dari yang terbesar: %d %d %d", x, y, z);
    return 0;
}