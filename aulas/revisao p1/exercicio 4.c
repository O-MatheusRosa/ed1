#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} no;

typedef struct fila {
    no *inicio;
    no *fim;
} fila;

// Função a ser desenvolvida:
int remover_fila(fila *f) {
    if (f == NULL || f->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }

   no *aux = f->inicio;

   int removido = aux->valor;
   
   f->inicio = f->inicio->prox;
   
   if (f->inicio == NULL) f->fim = NULL;

   free(aux);

   return removido;
}

// ==========================================
// Funções auxiliares só para o teste rodar
void inserir_fila(fila *f, no *novo) {
    novo->prox = NULL;
    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}
no* criar_no(int v) {
    no *n = (no*) malloc(sizeof(no)); n->valor = v; return n;
}
// ==========================================

int main() {
    fila f = {NULL, NULL};

    inserir_fila(&f, criar_no(10));
    inserir_fila(&f, criar_no(20));

    printf("Removido: %d\n", remover_fila(&f)); // Deve imprimir 10
    printf("Novo inicio: %d\n", f.inicio->valor); // Deve imprimir 20

    printf("Removido: %d\n", remover_fila(&f)); // Deve imprimir 20
    
    // A fila agora está vazia. O ponteiro 'fim' atualizou certo?
    if (f.fim == NULL) {
        printf("Fila completamente esvaziada com sucesso!\n");
    }

    return 0;
}