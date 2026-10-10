#include <stdio.h>
#include <stdlib.h>

// Nó
typedef struct no {
    int valor;
    struct no *prox;
} no;

// Controlador da Fila
typedef struct fila {
    no *inicio;
    no *fim;
} fila;

// Função a ser desenvolvida:
void inserir_fila(fila *f, no *novo) {
    novo->prox = NULL;
    
    if (f == NULL || f->fim == NULL || f->inicio == NULL){
        f->inicio = novo;
        f->fim = novo;
    }else{
        f->inicio->prox = novo;
        f->fim = novo;
    }
    
    
}

// Código de teste (não modificar)
int main() {
    fila f = {NULL, NULL};

    // Chega o primeiro cliente (10)
    no *n1 = (no*) malloc(sizeof(no));
    n1->valor = 100;
    n1->prox = NULL;
    inserir_fila(&f, n1);

    // Chega o segundo cliente (20)
    no *n2 = (no*) malloc(sizeof(no));
    n2->valor = 30;
    n2->prox = NULL;
    inserir_fila(&f, n2);

    // Verificação
    printf("Inicio: %d\n", f.inicio->valor);
    if (f.inicio->prox != NULL) {
        printf("Segundo: %d\n", f.inicio->prox->valor);
    }
    printf("Fim: %d\n", f.fim->valor);

    return 0;
}