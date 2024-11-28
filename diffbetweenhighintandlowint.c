/*desc: selisih bilangan terbesar dan terkecil dalam array berisi 10 integer
author: vermilion10
date: november 2024*/

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortDescend(int arr[], int n){
    for (int i = 0; i  < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[10];
    printf("enter 10 integer (pisah spasi): ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    sortDescend(arr, 10);
    printf("selisih bilangan terbesar dan terkecil adalah: %d", arr[0]-arr[9]);
    return 0;
}