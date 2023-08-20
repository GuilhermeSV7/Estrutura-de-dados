#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int tamanho;
    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);
    
    int array[tamanho];
    
    printf("Informe os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("A soma dos elementos do array é: %d\n", somaArray(array, tamanho));
    
    return 0;
}
