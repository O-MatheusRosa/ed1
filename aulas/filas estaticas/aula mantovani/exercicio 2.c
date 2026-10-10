#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Tamanho 5

typedef struct FilaEstatica {
    int inicio; 
    int fim;
    int array[Tamanho];
    int qntd_elementos;
} FilaEstatica;

bool ta_vazia_fila_estatica(FilaEstatica *fila) {
    return (fila->qntd_elementos == 0);
}

int encontra_maior(FilaEstatica *fila) {
    if (ta_vazia_fila_estatica(fila)) {
        printf("Fila vazia!\n");
        return -1; 
    }

    // 1. Defina 'maior' com o valor do PRIMEIRO cara da fila
    // Dica: O primeiro cara NÃO está no índice 0, está no índice 'fila->inicio'
    int maior = fila->array[fila->inicio];

    int n = fila->qntd_elementos;

    // 2. Faça o laço 'for' para percorrer a quantidade de elementos 'n'
    for (int i = 0; i < n; i++) {
        
        // 3. Calcule o índice físico usando o módulo para dobrar a fila se precisar
        int indice = (fila->inicio + i) % Tamanho;
        
        // 4. Compare o valor no array[indice] com o seu 'maior' e atualize se necessário
        if (fila->array[i] > maior){
            maior = fila->array[indice];
        }
        
        
    }

    return maior;
}