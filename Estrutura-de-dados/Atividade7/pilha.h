#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha Pilha;

Pilha* criarPilha(int tamanho);
void empilhar(Pilha *pilha, int valor);
int desempilhar(Pilha *pilha);
int topoDaPilha(Pilha *pilha);
int estaVazia(Pilha *pilha);
void liberarPilha(Pilha *pilha);

#endif
