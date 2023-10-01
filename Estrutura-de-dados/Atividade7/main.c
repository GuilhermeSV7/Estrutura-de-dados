#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    // Cria uma fila de espera para as pessoas que chegam ao banco
    Fila *filaDeEspera = criarFila(10);
    
    // Cria uma pilha de atendimento para as pessoas que estão sendo atendidas
    Pilha *pilhaDeAtendimento = criarPilha(10);
    
    // Pessoas entram na fila de espera
    enfileirar(filaDeEspera, 1);
    enfileirar(filaDeEspera, 2);
    enfileirar(filaDeEspera, 3);
    
    printf("Pessoas na fila de espera:\n");
    
    // Enquanto houver pessoas na fila de espera, continua o loop
    while (!filaVazia(filaDeEspera)) {
        // Obtenha a primeira pessoa da fila
        int pessoa = frenteDaFila(filaDeEspera);
        
        // Imprime uma mensagem indicando que a pessoa entrou na fila de espera
        printf("Pessoa %d entrou na fila de espera.\n", pessoa);
        
        // Coloca a pessoa na pilha de atendimento
        enfileirar(pilhaDeAtendimento, pessoa);
        
        // Remove a pessoa da fila de espera
        desenfileirar(filaDeEspera);
    }
    
    printf("\nAtendimento em andamento:\n");
    
    // Enquanto houver pessoas sendo atendidas, continua o loop
    while (!pilhaVazia(pilhaDeAtendimento)) {
        // Obtenha a pessoa no topo da pilha de atendimento
        int pessoa = topoDaPilha(pilhaDeAtendimento);
        
        // Imprime uma mensagem indicando que a pessoa está sendo atendida
        printf("Atendendo pessoa %d.\n", pessoa);
        
        // Remove a pessoa da pilha de atendimento
        desempilhar(pilhaDeAtendimento);
    }
    
    // Libera a memória das estruturas de dados (fila e pilha)
    liberarFila(filaDeEspera);
    liberarPilha(pilhaDeAtendimento);

    return 0;
}
