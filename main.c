#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include "input.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

 float sum(int arr[], int arrLength){
     float total=0;
    for(int i=0;i<arrLength;i++){
        total = total+arr[i];
    }
    return total;
}

float mean(int arr[], int arrLength){
    float average=0;
    average = (sum(arr,5))/5;
    return average;
}

double variance(int arr[], int arrLength){
    float variance=0;
    float som =sum(arr,5);
    float means=mean(arr,5);
    variance=(float)pow(som-means,2)/arrLength-1;
    return variance;
}

int main() {

    /* Program code. */
    int v[] = {2,3,6,4,7};
    printArray(v,5);
    printf("A Soma de todos os valores é: %.0f\n", sum(v,5));
    printf("A Média de todos os valores é: %.2f\n", mean(v,5));
    printf("A Variação de todos os valores é: %.2f\n", variance(v,5));
    return EXIT_SUCCESS;
}
