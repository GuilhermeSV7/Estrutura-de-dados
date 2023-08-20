#include <stdio.h>

void multiplicarArrays(int arr1[], int arr2[], int tamanho, int resultado[]) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int array1[tamanho], array2[tamanho], resultado[tamanho];

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array2[i]);
    }

    multiplicarArrays(array1, array2, tamanho, resultado);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
