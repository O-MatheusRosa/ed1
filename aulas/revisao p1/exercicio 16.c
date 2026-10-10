#include <stdio.h>
#include <stdlib.h>

typedef struct no_duplo {
    int valor;
    struct no_duplo *prox;
    struct no_duplo *ant;
} no_duplo;

void inserir_inicio_dupla(no_duplo **inicio, int val) {
    no_duplo *novo = (no_duplo*) malloc(sizeof(no_duplo));
    novo->valor = val;
    novo->ant = NULL; // Como ele vai ser o primeiro, não tem ninguém atrás
    
    // TODO: 1. O 'prox' do novo nó aponta para o atual '*inicio'
    novo->prox = *inicio;
    
    // TODO: 2. Se a lista NÃO estava vazia (*inicio != NULL), 
    // o 'ant' do antigo primeiro nó precisa apontar para o 'novo' nó.
    if ((*inicio) != NULL){
        (*inicio)->ant = novo;
    }
    
    
    // TODO: 3. Atualize a placa oficial '*inicio' para apontar para o 'novo' nó
    *inicio = novo;
}