#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int contar_caixas(No *primeira) {

    No *aux = primeira;
    int cont = 0;
    
    if (primeira == NULL){
        return NULL;
    }

    while (aux != NULL){
        aux = aux->prox;
        cont++;
    }

    return cont;    
}