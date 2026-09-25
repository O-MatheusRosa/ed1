#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM 5

typedef struct PilhaEstatica{
    int array[TAM];
    int topo;
    int qnt_elementos;
    
}PilhaEstatica;

void inicia_pilha_estatica(PilhaEstatica *p){
    p->topo = 0;
    p->qnt_elementos = 0;
}//função

bool esta_vazia_pilha_estatica(PilhaEstatica *p){
    return(p->topo == 0);
}
//verifica se ta cheia, pelo bool, ele retorna verdadeiro ou falso

bool esta_cheia_pilha_estatica(PilhaEstatica *p){
    return(p->topo == TAM);
}
//verifica se ta cheia, pelo bool, ele retorna verdadeiro ou falso

int tamanho_pilha(PilhaEstatica *p){
    return(p->qnt_elementos);
}

void impilha_pilha(PilhaEstatica *p, int x){
    if ( !esta_cheia_pilha_estatica(p)){
        p->array[p->topo] = x;
        p->topo++;

        p->qnt_elementos++;
    }else{
        printf("\nELEMENTO N INSERIDO, PILHA CHEIA\n");
    }  
}

int desempilha_pilha(PilhaEstatica *p){
    int aux = -1;

    if ( !esta_vazia_pilha_estatica(p) ){
      aux = p->array[p->topo-1];

      p->topo--;
      p->qnt_elementos--;    
    }else{
        printf("\nNAO TEMOS MAIS ELEMENTOS\n");
    }
    return(aux);
}


void imprime_pilha(PilhaEstatica *p){
    printf("Pilha = { ");

    for (int i = 0; i <= p->topo-1; i++){
        printf(" %d ",p->array[i]);
    }

    printf("}\n");
}


int main(){
    PilhaEstatica pilha;
    inicia_pilha_estatica(&pilha);
    imprime_pilha(&pilha);

    int retorno;

   
    if (esta_vazia_pilha_estatica(&pilha)){
     printf("VAZIA\n");
    }else{
     printf("temos algo aqui\n");
    }

    if (esta_cheia_pilha_estatica(&pilha)){
        printf("ta cheia\n");
    }else{
        printf("nao esta cheia\n");
    }
    
    
    impilha_pilha(&pilha,1);
    imprime_pilha(&pilha);
    impilha_pilha(&pilha,2);
    imprime_pilha(&pilha);
    impilha_pilha(&pilha,3);
    imprime_pilha(&pilha);
    impilha_pilha(&pilha,4);
    imprime_pilha(&pilha);
    impilha_pilha(&pilha,5);
    imprime_pilha(&pilha);
    impilha_pilha(&pilha,6);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    retorno = desempilha_pilha(&pilha);
    printf("\nelemento retornado: %d\n",retorno);
    imprime_pilha(&pilha);

    
    printf("\ntamanho da pilha: %d\n",tamanho_pilha(&pilha));
    
    if (esta_vazia_pilha_estatica(&pilha)){
     printf("VAZIA\n");
    }else{
     printf("temos algo aqui\n");
    }

   return 0;
}//main
