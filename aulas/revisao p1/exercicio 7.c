#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
} no;

int main() {
    no *n1 = (no*) malloc(sizeof(no));
    no *n2 = (no*) malloc(sizeof(no));
    n1->valor = 10;
    n2->valor = 20;

    // MISSÃO: Preencha os 4 cabos (prox e ant de cada um)

    n1->prox = n2;
    n2->ant = n1;
    n2->prox = NULL;
    n1->ant = NULL;
    
    // 1. Cabos do n1
    
    
    // 2. Cabos do n2
    

    // Teste de ida e volta:
    printf("Ida (n1 -> n2): %d\n", n1->prox->valor); // Deve imprimir 20
    printf("Volta (n2 -> n1): %d\n", n2->ant->valor); // Deve imprimir 10

    return 0;
}