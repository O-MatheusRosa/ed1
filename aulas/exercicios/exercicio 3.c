#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int idade;
    struct no *prox;
} no;

int main() {
    // O maquinista começa de mãos vazias
    no *topo = NULL; 

    // Chega o 1º vagão (Vagão A)
    no *vagaoA = (no*) malloc(sizeof(no));
    vagaoA->idade = 20;
    vagaoA->prox = topo; // Ele aponta para NULL (o que o topo valia)
    topo = vagaoA;       // O maquinista diz: "Beleza, o Vagão A é o topo agora"

    // Chega o 2º vagão (Vagão B)
    no *vagaoB = (no*) malloc(sizeof(no));
    vagaoB->idade = 30;

    // SUA MISSÃO: Empilhar o Vagão B!
    // 1. O engate do vagaoB (prox) precisa segurar quem é o 'topo' oficial agora.
    vagaoB->prox = topo;
    topo = vagaoB;
    
    // Você quer remover o topo. Primeiro, você agarra ele com uma variável auxiliar:
    no *removido = topo; 

    // SUA MISSÃO:
    // 1. O maquinista ('topo') precisa soltar o vagão atual e segurar o vagão de baixo.
    // Dica: O vagão de baixo é exatamente o cara que o 'removido' está segurando (removido->prox).
    topo = removido->prox;


    // 2. Corte o cabo do vagão 'removido' para ele ficar totalmente isolado do trem.
    // Dica: aponte o 'prox' dele para o vazio.
    removido->prox = NULL;
    

    // Se der certo, o novo topo imprimirá 20!
    printf("O novo topo agora tem a idade: %d\n", topo->idade);

    no* remove_val(no **p, int val) {
    if (p == NULL || *p == NULL) return NULL;
    
    no *aux = *p; // aux guarda o elemento que está no topo agora
    no *removido = NULL;

    // CASO 1: O elemento procurado é logo o primeiro da pilha
    if (aux->idade == val) {
        removido = aux; 
        
        // 1. Atualiza o topo oficial (*p) para ser o elemento de baixo
        // (Usa a mesma lógica que fizeste, mas com a sintaxe de exame)
         
        
        
        // 2. Corta a ligação do nó 'removido' para ele não levar a lista atrás
        

        return removido;
    }
    
    // ... (O Caso 2: remover no meio da lista vem logo a seguir)
}
    

    // Se der certo, o topo vai imprimir 30, e o cara abaixo dele vai imprimir 20
    printf("O topo da pilha agora tem a idade: %d\n", topo->idade);
    printf("E o vagao de baixo tem a idade: %d\n", topo->prox->idade);
    
    return 0;
}