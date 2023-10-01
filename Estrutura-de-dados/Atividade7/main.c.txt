#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    Pilha *pilha = criarPilha(5);
    empilhar(pilha, 1);
    empilhar(pilha, 2);
    empilhar(pilha, 3);
    
    printf("Topo: %d\n", topoDaPilha(pilha));
    printf("Desempilhado: %d\n", desempilhar(pilha));
    printf("Topo: %d\n", topoDaPilha(pilha));
    
    liberarPilha(pilha);

    Fila *fila = criarFila(5);
    enfileirar(fila, 10);
    enfileirar(fila, 20);
    enfileirar(fila, 30);
    
    printf("Frente: %d\n", frenteDaFila(fila));
    printf("Desenfileirado: %d\n", desenfileirar(fila));
    printf("Frente: %d\n", frenteDaFila(fila));
    
    liberarFila(fila);

    return 0;
}
