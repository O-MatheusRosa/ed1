#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} no;

// Sua missão:
void empilhar(no **topo, int valor) {
    // 1. Aloque memória para o ponteiro 'novo' (do tipo no*)

    no *novo = (no*) malloc(sizeof(no));
    
    
    // 2. Coloque o 'valor' recebido dentro do campo valor do 'novo'
    novo->valor = valor;
    
    // 3. Faça o engate (novo->prox) apontar para quem é o topo atual (*topo)
    novo->prox = (*topo);
    
    // 4. Atualize o topo oficial (*topo) para apontar para o 'novo'
    (*topo) = novo;
    
}

// Código de teste
int main() {
    no *topo = NULL; // Pilha começa vazia

    empilhar(&topo, 10);
    empilhar(&topo, 20);
    empilhar(&topo, 30);

    // Se estiver certo, o topo será 30 e o próximo será 20
    printf("Topo: %d\n", topo->valor);
    printf("Abaixo do topo: %d\n", topo->prox->valor);

    return 0;
}