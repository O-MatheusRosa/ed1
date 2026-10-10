#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char nome[50];
    int idade;
    struct no *prox;
} no;

// função a ser desenvolvida:
no* remove_val(no **p, int val){

    no *atual = *p;
    no *anterior = NULL;

    while (atual != NULL && atual->idade != val){
        anterior = atual;
        atual = atual->prox;

        if (atual == NULL)return NULL;

        if (anterior == NULL){
            *p = atual->prox;
        }else{
            anterior->prox = atual->prox;
        }
        
        atual->prox = NULL;
    }

    return atual;
    
    
}
