#ifndef FILA_H
#define FILA_H

typedef struct Fila Fila;

Fila* criarFila(int tamanho);
void enfileirar(Fila *fila, int valor);
int desenfileirar(Fila *fila);
int frenteDaFila(Fila *fila);
int estaVazia(Fila *fila);
void liberarFila(Fila *fila);

#endif
