#include <stdio.h>

void minMaxArray(int arr[], int tamanho, int *min, int *max) {
    *min = *max = arr[0]; // Inicializa min e max com o primeiro elemento

    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // Atualiza o valor mínimo
        }
        if (arr[i] > *max) {
            *max = arr[i]; // Atualiza o valor máximo
        }
    }
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

    int menor, maior;
    minMaxArray(array, tamanho, &menor, &maior);

    printf("O menor elemento do array é: %d\n", menor);
    printf("O maior elemento do array é: %d\n", maior);

    return 0;
}
