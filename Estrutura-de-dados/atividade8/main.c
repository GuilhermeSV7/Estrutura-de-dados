#include <stdio.h>
#include "lista.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    No* lista = NULL;

    // Inserir Nó
    lista_inserir_no(&lista, '1');
    lista_inserir_no(&lista, '2');
    lista_inserir_no(&lista, '3');
    lista_inserir_no(&lista, '1');
    lista_inserir_no(&lista, '4');
    lista_inserir_no(&lista, '7');
    lista_inserir_no(&lista, '1');
    lista_inserir_no(&lista, '5');
    lista_inserir_no(&lista, '9');
    lista_inserir_no(&lista, '1');

    // Imprimir Lista
    printf("\nLista Original: ");
    lista_imprimir(lista);

    // Busca de Valor
    char valor_busca = '1';

    // Verifica Existência na Lista
    int existe = lista_verificar_existencia(lista, valor_busca);

    // Verifica Número de Ocorrências na Lista
    int ocorrencias = lista_verificar_ocorrencias(lista, valor_busca);
    
    printf("\nVerificando se o valor %c existe na lista: %s\n", valor_busca, existe ? "Sim" : "Não"); // Existência
    printf("\nNúmero de ocorrências de %c na lista: %d\n", valor_busca, ocorrencias);                 // Ocorrência

    // Imprime Lista na Ordem Inversa
    printf("\nImprimindo a Lista na Ordem Inversa: ");
    lista_imprimir_inversa(lista);
    printf("\n");

    // Insere Nó
    int i = 2;
    char valor_inserir = '5';
    lista_inserir_no_i(&lista, valor_inserir, i);
    printf("\nInserindo o valor %c na posição %d: ", valor_inserir, i);

    // Remove Nó
    i = 3;
    lista_remover_no_i(&lista, i);
    printf("\nRemovendo o nó na posição %d: ", i);
    
    // Remove Nós Desejados
    valor_busca = '1';
    lista_remover_no(&lista, valor_busca);
    printf("\nRemovendo nós com o valor %c: ", valor_busca);

    // Teste 2
    printf("\nImprimindo Novamente a Lista:\n");
    lista_imprimir(lista);

    return 0;
}
