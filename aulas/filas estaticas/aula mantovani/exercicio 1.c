#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 5

typedef struct {
    int array[TAMANHO];
    int topo; 
} PilhaEstatica;

void inicia_pilha(PilhaEstatica *p) {
   p->topo = 0;
}

bool ta_vazia(PilhaEstatica *p) {
    return (p->topo == -1);
}

bool ta_cheia(PilhaEstatica *p) {
    return (p->topo == TAMANHO);
}

void push(PilhaEstatica *p, int x) {
    // Se não tiver cheia, o topo sobe e o array recebe o valor 'x'
    if ( !ta_cheia(p)){
        p->topo++;
        p->array[p->topo] = x;
    }else{
        printf("\npilha cheia, nao tem como add elementos\n");
    }
    
}

int pop(PilhaEstatica *p) {
    // Se não tiver vazia, você tira a batata, o topo desce, e você retorna o valor que tirou
    int ret = -1;

    if ( !ta_vazia(p)){
        p->topo--;
        ret = p->array[p->topo];
    }else{
        printf("\nremover oq fi, ta vazia\n");
    }
    return ret;
}