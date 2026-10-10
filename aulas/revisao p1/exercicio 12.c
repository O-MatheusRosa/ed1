#include <stdio.h>
#include <stdlib.h>

// nó da lista (não modificar)
struct Pessoa_tipo{
    char nome[50];
    int idade;
    struct Pessoa_tipo *prox;
    struct Pessoa_tipo *ant;
};
typedef struct Pessoa_tipo pessoa;

// lista dupla
struct deque_tipo{
    pessoa *primeiro;
    pessoa *ultimo;
    int qtd;
};
typedef struct deque_tipo deque;

// função a ser desenvolvida:
void adiciona_segundo(deque *d, pessoa *novo){
    // coloque seu código aqui

    if (d == NULL || d->primeiro == NULL) return;
    
    novo->prox = d->primeiro->prox;
    novo->ant = d->primeiro;

    if (novo->prox != NULL){
        novo->prox->ant = novo;
    }else{
        d->ultimo = novo;
    }

    d->primeiro->prox = novo;
    
    d->qtd++;

}
