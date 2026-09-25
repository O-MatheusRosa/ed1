#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int id;
    struct No *prox;
} No;

No* criar_caixa(int valor_id) {
    No *ajuda = (No*)malloc(sizeof(No));

    ajuda = valor_id;

     if (ajuda == NULL){
        printf("Nao tem ngm\n");
        return -1;
     }else{
        ajuda->prox = NULL;
     }
     
    return ajuda->id;
    
}