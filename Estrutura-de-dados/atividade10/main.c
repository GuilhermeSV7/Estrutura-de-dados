#include <stdio.h>
#include "tabela_hash.h"

void imprimir_valor(tabela_hash* tabela, char* chave) {
  char* valor = tabela_hash_get(tabela, chave);
  printf("O valor associado à chave '%s' na tabela hash é: %s\n", chave, valor);
}

void verificar_chave(tabela_hash* tabela, char* chave) {
  int existe = tabela_hash_contains(tabela, chave);
  printf("A tabela hash contém a chave '%s'? %d (1 = sim, 0 = não)\n", chave, existe);
}

int main() {

  tabela_hash* tabela = tabela_hash_criar(10);

  tabela_hash_put(tabela, "chave1", "valor1");
  tabela_hash_put(tabela, "chave2", "valor2");
  tabela_hash_put(tabela, "chave3", "valor3");

  imprimir_valor(tabela, "chave1");

  verificar_chave(tabela, "chave2");

  tabela_hash_remove(tabela, "chave2");

  verificar_chave(tabela, "chave2");

  tabela_hash_liberar(tabela);

  return 0;
}

