#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// O prato (a mesma struct de antes)
typedef struct No {
    int dado;
    struct No *prox; // Na pilha, o 'prox' aponta para o prato que está EMBAIXO dele
} No;

// A estrutura de controle
typedef struct {
    No *topo; // A gente só precisa olhar para o prato de cima!
} PilhaDinamica;

int desempilhar(PilhaDinamica *p) {
    // 1. Verifique se a pilha está vazia (topo é NULL). Se sim, retorne -1.
    // 2. Crie um ponteiro *auxiliar para segurar o prato atual do topo.
    // 3. Salve a carga desse prato (->dado) em uma variável 'x' (cuidado com o lado do igual!).
    // 4. Faça o p->topo "descer" para o prato de baixo. (Como você acessa o prato de baixo?)
    // 5. Use free() no auxiliar para destruir o prato velho.
    // 6. Retorne o 'x'.
    
    // SEU CÓDIGO AQUI:
    
    No *auxiliar = p->topo;
    int x;

    if (p->topo == NULL){
        return -1;
    }else{
        x = auxiliar->dado;
        p->topo = p->topo->prox;
    }
    free(auxiliar);
    return x;
    
}