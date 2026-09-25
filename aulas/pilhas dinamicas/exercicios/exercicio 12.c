#include <stdio.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

int contar_repetidos(No *primeira, int id_buscado) {

   int cont = 0;

   for (No *aux = primeira; aux; aux = aux->prox){
    if(aux->id == id_buscado) cont++;
   }
   return cont;    
}