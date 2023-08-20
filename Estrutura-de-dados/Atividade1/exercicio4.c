#include <stdio.h>

int contarOcorrencias(int arr[], int tamanho, int busca) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == busca) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int array[tamanho];
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    int numeroBusca;
    scanf("%d", &numeroBusca);

    printf("%d\n", contarOcorrencias(array, tamanho, numeroBusca));

    return 0;
}
