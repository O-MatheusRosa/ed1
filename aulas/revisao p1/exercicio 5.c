#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} no;

// Função a ser desenvolvida:
int desempilhar(no **topo) {
    // 1. Proteção: se a referência não existe ou a pilha está vazia
    if (topo == NULL || *topo == NULL) {
        return -1;
    }

    // 2. Crie um ponteiro 'aux' para segurar firmemente o vagão do topo (*topo)

    no *aux = (*topo);
    
    int valor = aux->valor;

    (*topo) = aux->prox;

    free(aux);

    return valor;
    
    
    // 3. Salve o número (valor) que está dentro do 'aux' em uma variável int
    
    
    // 4. Atualize o topo oficial (*topo) para ser o elemento de baixo (o prox do aux)
    
    
    // 5. Destrua o vagão antigo isolado ('aux') usando free()
    
    
    // 6. Retorne o número que você salvou no passo 3
    
}