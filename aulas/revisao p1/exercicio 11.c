#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
} no;

int remover_valor(no **inicio, no **fim, int alvo) {
    // Escreva sua solução aqui
    
    
}

// Código de teste (simulação do professor)
void inserir_fim(no **inicio, no **fim, int v) {
    no *n = (no*) malloc(sizeof(no)); n->valor = v; n->prox = NULL; n->ant = *fim;
    if (*inicio == NULL) *inicio = n; else (*fim)->prox = n;
    *fim = n;
}

int main() {
    no *inicio = NULL, *fim = NULL;
    inserir_fim(&inicio, &fim, 10);
    inserir_fim(&inicio, &fim, 20);
    inserir_fim(&inicio, &fim, 30);

    // Teste removendo o elemento do meio (20)
    int r = remover_valor(&inicio, &fim, 20);
    printf("Removeu 20? %d (esperado: 1)\n", r);
    printf("Novo inicio: %d | Novo fim: %d\n", inicio->valor, fim->valor);
    printf("Inicio->prox: %d (esperado: 30)\n", inicio->prox->valor);

    return 0;
}