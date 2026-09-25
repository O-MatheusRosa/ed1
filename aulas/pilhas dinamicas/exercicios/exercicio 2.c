#include <stdio.h>

#define MAX 5

// fila estática (não modificar)
typedef struct{
    int ini;             // primeiro elemento
    int fim;             // último el
    int qtd;             // número de elementos
    int array[MAX];   // array de inteiros
} fila_estatica;

// adiciona penúltimo
int adiciona_penultimo(fila_estatica *p, int x){
    if (p->qtd != MAX){
        p->qtd++;
        p->array[p->qtd] = x;
    }else{

    }
    
    
}