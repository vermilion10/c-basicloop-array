/*desc: menentukan median dari array yang inputan dan jumlah elemennya ditentukan oleh user
author: vermilion10
date: november 2024*/

#include <stdio.h>
int main(){
    int N;
    printf("enter total integer: ");
    scanf("%d", &N);
    int arr[N];
    float result;
    printf("enter %d integer (pisah spasi): ", N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    if (N%2 == 0){
        result = (arr[N/2-1] + arr[N/2]) / 2.0;
    } else {
        result = arr[N/2];
    }
    printf("median: %.2f", result);
    return 0;
}