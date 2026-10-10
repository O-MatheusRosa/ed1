#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
} no;

void inserir_fim(no **inicio, no **fim, int valor) {
    no *aux = (no*) malloc(sizeof(no));
    aux->valor = valor;
    aux->prox = NULL;//o prox dele é o null
    aux->ant = NULL;
    
    if (!(*inicio == NULL)){
        aux->ant = *fim;//o anterior dele vai ser o fim
        (*fim)->prox = aux;//o fim é ele mesmo
        *fim = aux;
    }else{
        *inicio = aux;
        *fim = aux;
    }
        
    
}

// Código de teste (simulação da correção do professor)
int main() {
    no *inicio = NULL;
    no *fim = NULL;

    inserir_fim(&inicio, &fim, 10);
    inserir_fim(&inicio, &fim, 20);
    inserir_fim(&inicio, &fim, 30);

    // Teste de percurso do início ao fim
    printf("Ida: ");
    no *aux = inicio;
    while (aux != NULL) {
        printf("[%d] ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");

    // Teste de percurso do fim ao início
    printf("Volta: ");
    aux = fim;
    while (aux != NULL) {
        printf("[%d] ", aux->valor);
        aux = aux->ant;
    }
    printf("\n");

    return 0;
}