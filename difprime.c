/*desc: menampilkan selisih bilangan prima dari yang terbesar dan terkecil dalam interval x sampai y
author: vermilion10
date: november 2024*/

#include <stdio.h>

int cekPrima(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(){
   
    int x, y, selisih, primamax=0, primamin=0;
    printf("inputkan nilai x dan y:");
    scanf("%d %d", &x, &y);
    for (int i=x; i<= y; i++){
        if (cekPrima(i)){
            if (primamin == 0){
                primamin = i;
            }
            primamax=i;
        }
    }
    if (primamin != 0 && primamax != 0){
        selisih = primamax - primamin;
    }
    printf("%d", selisih);
    return 0;
}