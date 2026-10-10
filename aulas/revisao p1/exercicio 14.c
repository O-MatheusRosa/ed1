#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} no;

void push(no **topo, int val) {
    // 1. Aloca o novo nó na memória e preenche o valor
    no *novo = (no*) malloc(sizeof(no));
    novo->valor = val;
    
    // TODO: 2. Faça o 'prox' do novo nó apontar para o antigo topo da pilha
    novo->prox = *topo;

    *topo = novo;
    
    
    // TODO: 3. Atualize a placa oficial do '*topo' para ser o novo nó
    
}