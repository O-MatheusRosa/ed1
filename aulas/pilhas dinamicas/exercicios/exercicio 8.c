#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int pegar_id_do_ultimo(No *primeira) {

    No *atual = primeira->prox;

    while (atual->prox != NULL){
        atual = atual->prox;
    }
    return atual->id;

}