#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
} no;

int remover_fim(no **inicio, no **fim) {
    no *aux = (*fim);

    
    if (*inicio == NULL){
        return -1;
    }
    int retorno = aux->valor;
    
    if((*inicio)->prox == NULL){
        (*fim) = aux->prox;
        *inicio = NULL;
        *fim = NULL;
    }else{
        (*fim) = aux->ant;
        (*fim)->prox = NULL;
    }
    
    free(aux);

    return retorno;
    
    
}

// ==========================================
// Funções auxiliares para o teste rodar
void inserir_fim(no **inicio, no **fim, int valor) {
    no *aux = (no*) malloc(sizeof(no));
    aux->valor = valor;
    aux->prox = NULL;
    aux->ant = NULL;
    if (*inicio == NULL) {
        *inicio = aux;
        *fim = aux;
    } else {
        aux->ant = *fim;
        (*fim)->prox = aux;
        *fim = aux;
    }
}
// ==========================================

int main() {
    no *inicio = NULL;
    no *fim = NULL;

    inserir_fim(&inicio, &fim, 10);
    inserir_fim(&inicio, &fim, 20);

    printf("Removido do fim: %d\n", remover_fim(&inicio, &fim)); // Deve imprimir 20
    printf("Removido do fim: %d\n", remover_fim(&inicio, &fim)); // Deve imprimir 10

    if (inicio == NULL && fim == NULL) {
        printf("Lista zerada com sucesso!\n");
    }

    return 0;
}