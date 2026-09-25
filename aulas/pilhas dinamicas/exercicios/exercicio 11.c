#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int buscar_caixa(No *primeira, int id_buscado) {

    No *aux = primeira;

    while (aux){
        
        if (aux->id == id_buscado){
            return 1;
        }
        aux = aux->prox;
    }
    return 0;        
}