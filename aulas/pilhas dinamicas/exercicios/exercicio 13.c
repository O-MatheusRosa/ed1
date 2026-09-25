#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int buscar_maior(No *primeira) {

    int maior = primeira->id;
    for (No *aux = primeira; aux; aux = aux->prox){
        if (aux->id > maior) maior = aux->id;
    }
    return maior;
    
}