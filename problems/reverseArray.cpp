#include <stdio.h>

int* reverseArray(int array[], int n){

    int aux = 0;
    for(int i = 0, j = n-1; i < n/2; i++, j--){
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }

    return array;
}

int main(){

    int n = 0;
    scanf("%d", &n);

    int array[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int* resultArray = reverseArray(array, n);

    for(int i = 0; i < n; i++){
        printf("%d", resultArray[i]);
    }
}