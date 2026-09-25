#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int contar_maiores_que_cinco(No *primeira) {
    int cont = 0;

    for (No *aux = primeira;aux;aux = aux->prox){
        if (aux->id > 5) cont++;        
    }
    return cont;
}