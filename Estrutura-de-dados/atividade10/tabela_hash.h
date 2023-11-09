#ifndef TABELA_HASH_H
#define TABELA_HASH_H

typedef struct tabela_hash tabela_hash;

tabela_hash* tabela_hash_criar(int tamanho);

void tabela_hash_put(tabela_hash* tabela, char* chave, char* valor);

char* tabela_hash_get(tabela_hash* tabela, char* chave);

int tabela_hash_contains(tabela_hash* tabela, char* chave);

void tabela_hash_remove(tabela_hash* tabela, char* chave);

void tabela_hash_liberar(tabela_hash* tabela);

#endif

