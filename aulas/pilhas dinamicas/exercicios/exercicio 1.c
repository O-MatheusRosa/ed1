#include <stdio.h>

// elemento usado (não modificar)
struct Pessoa_tipo{
    char nome[50];
    int idade;
    struct Pessoa_tipo *prox;
};
typedef struct Pessoa_tipo pessoa;

// função a ser desenvolvida:
int maiores(pessoa *p){
   int contador = 0;

    while (p != NULL){
        if (p->idade >= 21){
            contador++;
        }
        p = p->prox;
    }
    return contador;
    
    
}