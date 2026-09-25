#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>//retona verdadeiro ou falso

/*------------------------------------------------------*/
//tudo oq eu preciso pra uma pilha dinamica

typedef struct NoPilha *PtrNopilha;

typedef struct NoPilha{
    int x;
    PtrNopilha proximo;
}NoPilha;


typedef struct PilhaDinamica{
    PtrNopilha topo;
    int quantidade_elementos;
}PilhaDinamica;

//tudo oq eu preciso pra uma pilha dinamica
/*------------------------------------------------------*/

void iniciaPilhaDinamica(PilhaDinamica *p){
    p->topo = NULL;
    p->quantidade_elementos = 0; 
}

bool taVaziaPilhaDinamica(PilhaDinamica *p){
    return(p->topo == NULL);    
}

int tamanhoPilhaDinamica(PilhaDinamica *p){
    return(p->quantidade_elementos);
}

void impilhaPilhDinamica(PilhaDinamica *p, int x){
    PtrNopilha aux;
    aux = (PtrNopilha)malloc(sizeof(NoPilha));

    aux->x = x;

    aux->proximo = p->topo;

    p->topo = aux;

    p->quantidade_elementos++;

}

int desempilhaPilhaDinamica(PilhaDinamica *p){
    int retorno = -1;

    if (!taVaziaPilhaDinamica(p)){
        PtrNopilha aux = p->topo;

        retorno = aux->x;

        p->topo = p->topo->proximo;

        free(aux);

        p->quantidade_elementos--;
    }else{
        printf("Fez cagada, nao tem como retirar elementos\n");
    }
    return retorno;
}

void imprimePilhaDinamica(PilhaDinamica *p){

    printf("Pilha = {");
    PtrNopilha ptr;

    for (ptr = p->topo;ptr != NULL; ptr = ptr->proximo){
        printf(" %d ",ptr->x);
    }
    
    printf("}\n");
}


int main(){
    PilhaDinamica pilha;

    iniciaPilhaDinamica(&pilha);

    for (int i = 0; i < 20; i++){
        impilhaPilhDinamica(&pilha, i);
        imprimePilhaDinamica(&pilha);
        
    }
    
    if (taVaziaPilhaDinamica(&pilha)){
        printf("Pilha vazia\n");
    }else{
        printf("Nao ta vazia nao chefe\n");
    }
    printf("tamanho da pilha dinamica: %d\n",tamanhoPilhaDinamica(&pilha));

    
    
    return 0;
}
