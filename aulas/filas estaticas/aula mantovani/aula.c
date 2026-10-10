#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Tamanho 5

typedef struct FilaEstatica{
    int inicio; //controla incio da fila
    int fim;// ''  fim da fila
    int array[Tamanho];
    int qntd_elementos;
}FilaEstatica;

void inicia_fila_estatica(FilaEstatica *fila){
    fila->qntd_elementos = 0;
    fila->inicio = 0;
    fila->fim = -1;
}

bool ta_vazia_fila_estatica(FilaEstatica *fila){
    return(fila->qntd_elementos == 0);
}

bool ta_cheia_fila_estatica(FilaEstatica *fila){
    return(fila->qntd_elementos == Tamanho);
}

int incrementa_indice(int i){
    int aux = (i + 1) % Tamanho;
    return aux;
}

void add_elemento_fila_estatica(FilaEstatica *fila, int x){
    if (!ta_cheia_fila_estatica(fila)){
        fila->fim = incrementa_indice(fila->fim);
        fila->array[fila->fim] = x;
        fila->qntd_elementos++;
    }else{
        printf("\nNao pode inserir mais elementos, ta cheia\n");
    }
}

int tam_fila(FilaEstatica *fila){
    return(fila->qntd_elementos);
}

void imprime_fila(FilaEstatica *fila){
    printf("\n Fila  = {");

    int n = tam_fila(fila);

    for (int i = 0; i < n; i++){
        int indice = (fila->inicio + i) % Tamanho;
        printf(" %d ",fila->array[indice]);
    }
    
    printf("}\n");
}

int remove_elemento_pilha_estatica(FilaEstatica *fila){
    int ret = -1;
    if ( !ta_vazia_fila_estatica(fila)){
        ret = fila->array[fila->inicio];
        fila->inicio = incrementa_indice(fila->inicio);
        fila->qntd_elementos--;
    }else{
        printf("fez cagada amigao, ta vazia ja\n");
    }

    return ret;
    
}

int main(){
    FilaEstatica f;
    inicia_fila_estatica(&f);

    if (ta_vazia_fila_estatica(&f)){
        printf("Fila ta vazia chefe\n");
    }

    if (!ta_cheia_fila_estatica(&f)){
        printf("Nao esta cheia fila estatica\n");
    }
    
    add_elemento_fila_estatica(&f,5);
    imprime_fila(&f);
    add_elemento_fila_estatica(&f,7);
    imprime_fila(&f);
    add_elemento_fila_estatica(&f,20);
    imprime_fila(&f);
    add_elemento_fila_estatica(&f,30);
    imprime_fila(&f);
    add_elemento_fila_estatica(&f,-99);
    imprime_fila(&f);

    int removido;

    removido = remove_elemento_pilha_estatica(&f);
    imprime_fila(&f);
    removido = remove_elemento_pilha_estatica(&f);
    imprime_fila(&f);
    removido = remove_elemento_pilha_estatica(&f);
    imprime_fila(&f);


    add_elemento_fila_estatica(&f,18);
    imprime_fila(&f);
    add_elemento_fila_estatica(&f,9);
    imprime_fila(&f);
 
    printf("\ntam. fila: %d\n",tam_fila(&f));
    
    
    return 0;
}
