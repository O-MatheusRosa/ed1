#include <stdio.h>
#define MAX 5

typedef struct {
    int temperaturas[MAX];
    int ini;
    int fim;
    int qtd;
} FilaEstufa;

void enfileirar_leitura(FilaEstufa *f, int temp) {
    // 1. Verifique se a quantidade atual (qtd) atingiu o limite MAX
    // 2. Se sim, dê um printf avisando que a fila está cheia e use "return;" para sair da função
    // 3. Se não, adicione a "temp" no array "temperaturas" na posição "fim"
    // 4. Atualize a posição do "fim" usando aquela regra circular: f->fim = (f->fim + 1) % MAX;
    // 5. Aumente a quantidade (qtd) em 1.
    
    if (f->qtd == MAX){
        printf("\nfila cheia\n");
        return;
    }else{
        f->temperaturas[f->fim] = temp;
        f->fim = (f->fim + 1) % MAX;
        f->qtd++;
    }
}

int main() {
    FilaEstufa f = {{0}, 0, 0, 0}; // Inicializa a fila vazia
    enfileirar_leitura(&f, 25);
    enfileirar_leitura(&f, 26);
    printf("Primeira temperatura da fila: %d\n", f.temperaturas[f.ini]);
    return 0;
}