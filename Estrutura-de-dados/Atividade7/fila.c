#include "fila.h"
#include <stdlib.h>

struct Fila {
    int *dados;
    int tamanho;
    int inicio;
    int fim;
};

Fila* criarFila(int tamanho) {
    Fila *fila = (Fila*)malloc(sizeof(Fila));
    fila->dados = (int*)malloc(sizeof(int) * tamanho);
    fila->tamanho = tamanho;
    fila->inicio = fila->fim = -1;
    return fila;
}

void enfileirar(Fila *fila, int valor) {
    if ((fila->fim + 1) % fila->tamanho != fila->inicio) {
        if (fila->inicio == -1) {
            fila->inicio = 0;
        }
        fila->fim = (fila->fim + 1) % fila->tamanho;
        fila->dados[fila->fim] = valor;
    }
}

int desenfileirar(Fila *fila) {
    if (!estaVazia(fila)) {
        int valor = fila->dados[fila->inicio];
        if (fila->inicio == fila->fim) {
            fila->inicio = fila->fim = -1;
        } else {
            fila->inicio = (fila->inicio + 1) % fila->tamanho;
        }
        return valor;
    }
    return -1; // Fila vazia
}

int frenteDaFila(Fila *fila) {
    if (!estaVazia(fila)) {
        return fila->dados[fila->inicio];
    }
    return -1; // Fila vazia
}

int estaVazia(Fila *fila) {
    return fila->inicio == -1;
}

void liberarFila(Fila *fila) {
    free(fila->dados);
    free(fila);
}
