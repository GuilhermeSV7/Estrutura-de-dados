// Aplicação de Filha e Pilha.
// Sistema de Reservas para um Restaurante

#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    // 1º Passo: Cria uma fila de espera para as pessoas que ligam para fazer uma reserva no restaurante.
    Fila *filaDeEspera = criarFila(10);
    
    //2º Passo: Cria uma pilha de atendimento para as pessoas que estão sendo atendidas
    Pilha *pilhaDeAtendimento = criarPilha(10);
    
    // 3º Passo: Incluir as pessoas entram na fila de espera
    enfileirar(filaDeEspera, 1);
    enfileirar(filaDeEspera, 2);
    enfileirar(filaDeEspera, 3);
    
    printf("Pessoas na fila de espera:\n");
    
    // 4º Passo: Enquanto houver pessoas na fila de espera, continua o loop
    while (!filaVazia(filaDeEspera)) {
        
        // 5º Passo: Obtenha a primeira pessoa da fila
        int pessoa = frenteDaFila(filaDeEspera);
        
        // 6º Passo: Imprime uma mensagem indicando que a pessoa entrou na fila de espera
        printf("Pessoa %d entrou na fila de espera.\n", pessoa);
        
        // 7º Passo: Coloca a pessoa na pilha de atendimento
        enfileirar(pilhaDeAtendimento, pessoa);
        
        // 8º Passo: Remove a pessoa da fila de espera
        desenfileirar(filaDeEspera);
    }
    
    printf("\nAtendimento em andamento:\n");
    
    // 9º Passo: Enquanto houver pessoas sendo atendidas, continua o loop
    while (!pilhaVazia(pilhaDeAtendimento)) {
        // Obtenha a pessoa no topo da pilha de atendimento
        int pessoa = topoDaPilha(pilhaDeAtendimento);
        
        // 10º Passo: Imprime uma mensagem indicando que a pessoa está sendo atendida
        printf("Atendendo pessoa %d.\n", pessoa);
        
        // 11º Passo: Remove a pessoa da pilha de atendimento
        desempilhar(pilhaDeAtendimento);
    }
    
    // 12º Passo: Libera a memória das estruturas de dados (fila e pilha)
    liberarFila(filaDeEspera);
    liberarPilha(pilhaDeAtendimento);

    return 0;
}
