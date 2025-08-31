#include <stdio.h>
#include <stdlib.h>

// a funcao vai retornar um ponteiro de ponteiro, que vai ser a matriz com linhas e colunas passadas nos argumentos
char ** inicia_matriz(int linhas, int colunas){
    // inicia o ponteiro de ponteiro e aloca o tamanho de linhas multiplicado pelo tamanho do ponteiro de char 
    char ** matriz = NULL;
    matriz = malloc(linhas * sizeof(* matriz));

    if (matriz == NULL){
        printf("Erro ao alocar memória");
    }

    // para cada linha, aloca o numero de colunas multiplicado pelo tamanho do char
    for (int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(* matriz[i]));

        if (matriz[i] == NULL){
            printf("Erro ao alocar memória");
        }
        
        // preenche cada coluna com o char 'L'
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = 'L';
        }
    }

    return matriz;
}

// funcao para mostrar as linhas e colunas da matriz
void mostra_matriz(char ** matriz, int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("{%c}", matriz[i][j]);
        }
        printf("\n");
    }
}

// funcao para liberar a memoria alocada da matriz, libera cada linha e depois libera o ponteiro de ponteiro, se nao tiver matriz nao faz nada
void libera_matriz(char ** matriz, int linhas){
    if (!matriz) return;
    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}

int main(){
    int linhas = 5;
    int colunas = 10;

    char ** matriz = inicia_matriz(linhas, colunas);
    mostra_matriz(matriz, linhas, colunas);
    libera_matriz(matriz, linhas);

    return 0;
}
