#include "pilha.h"
#include <stdlib.h>

struct Pilha {
    int *dados;
    int tamanho;
    int topo;
};

Pilha* criarPilha(int tamanho) {
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->dados = (int*)malloc(sizeof(int) * tamanho);
    pilha->tamanho = tamanho;
    pilha->topo = -1;
    return pilha;
}

void empilhar(Pilha *pilha, int valor) {
    if (pilha->topo < pilha->tamanho - 1) {
        pilha->dados[++pilha->topo] = valor;
    }
}

int desempilhar(Pilha *pilha) {
    if (!estaVazia(pilha)) {
        return pilha->dados[pilha->topo--];
    }
    return -1; // Pilha vazia
}

int topoDaPilha(Pilha *pilha) {
    if (estaVazia(pilha)) {
        return pilha->dados[pilha->topo];
    }
    return -1; // Pilha vazia
}

int estaVazia(Pilha *pilha) {
    return pilha->topo == -1;
}

void liberarPilha(Pilha *pilha) {
    free(pilha->dados);
    free(pilha);
}
