#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

typedef struct no {
    char* chave;
    char* valor;
    struct no* proximo;
} no;

struct tabela_hash {
    int tamanho;
    no** tabela;
};

tabela_hash* tabela_hash_criar(int tamanho) {
    tabela_hash* nova_tabela = (tabela_hash*)malloc(sizeof(tabela_hash));
    nova_tabela->tamanho = tamanho;
    nova_tabela->tabela = (no**)malloc(sizeof(no*) * tamanho);
    for (int i = 0; i < tamanho; i++) {
        nova_tabela->tabela[i] = NULL;
    }
    return nova_tabela;
}

int calcular_indice(tabela_hash* tabela, char* chave) {
    unsigned long hash = 5381;
    int c;
    while ((c = *chave++)) {
        hash = ((hash << 5) + hash) + c;
    }
    return (int)(hash % tabela->tamanho);
}

void tabela_hash_put(tabela_hash* tabela, char* chave, char* valor) {
    int indice = calcular_indice(tabela, chave);

    no* novo_no = (no*)malloc(sizeof(no));
    novo_no->chave = strdup(chave);
    novo_no->valor = strdup(valor);
    novo_no->proximo = tabela->tabela[indice];

    tabela->tabela[indice] = novo_no;
}

char* tabela_hash_get(tabela_hash* tabela, char* chave) {
    int indice = calcular_indice(tabela, chave);

    no* atual = tabela->tabela[indice];
    while (atual != NULL) {
        if (strcmp(atual->chave, chave) == 0) {
            return atual->valor;
        }
        atual = atual->proximo;
    }

    return NULL;
}

int tabela_hash_contains(tabela_hash* tabela, char* chave) {
    int indice = calcular_indice(tabela, chave);

    no* atual = tabela->tabela[indice];
    while (atual != NULL) {
        if (strcmp(atual->chave, chave) == 0) {
            return 1; 
        }
        atual = atual->proximo;
    }

    return 0;  

}

void tabela_hash_remove(tabela_hash* tabela, char* chave) {
    int indice = calcular_indice(tabela, chave);

    no* anterior = NULL;
    no* atual = tabela->tabela[indice];

    while (atual != NULL) {
        if (strcmp(atual->chave, chave) == 0) {
            if (anterior == NULL) {
                tabela->tabela[indice] = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            free(atual->chave);
            free(atual->valor);
            free(atual);
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }
}

void tabela_hash_liberar(tabela_hash* tabela) {
    for (int i = 0; i < tabela->tamanho; i++) {
        no* atual = tabela->tabela[i];
        while (atual != NULL) {
            no* proximo = atual->proximo;
            free(atual->chave);
            free(atual->valor);
            free(atual);
            atual = proximo;
        }
    }
    free(tabela->tabela);
    free(tabela);
}
