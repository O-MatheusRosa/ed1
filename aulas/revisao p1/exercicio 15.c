#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} no;

no* remover_fila(no **inicio, no **fim) {
    // Proteção: fila vazia
    if (*inicio == NULL) {
        return NULL;
    }
    
    // Isola quem vai sair
    no *removido = *inicio;
    
    // TODO: 1. A placa '*inicio' anda para o próximo da fila
    *inicio = (*inicio)->prox;
    
    
    // TODO: 2. Se o '*inicio' ficou NULL (ou seja, a fila esvaziou agora), 
    // a placa '*fim' também tem que virar NULL. (Faça um if aqui)
    if ((*inicio) == NULL) *fim = NULL;
    
    // TODO: 3. Limpe o cabo do nó removido para ele não puxar o resto da fila junto
    removido->prox = NULL;
    
    return removido;
}