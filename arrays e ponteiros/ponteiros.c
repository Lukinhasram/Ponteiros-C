#include <stdio.h>

int main() {
    // ==========================
    // Declaração de um array de 4 inteiros
    // ==========================
    int v[4] = {25, 50, 75, 100};

    // ==========================
    // 1. Nome do array como ponteiro
    // ==========================
    printf("Endereco do array (v): %p\n", v);
    printf("Endereco do primeiro elemento (&v[0]): %p\n\n", &v[0]);
    // Observação: v e &v[0] imprimem o mesmo endereço.

    // ==========================
    // 2. Acesso por índice x ponteiro
    // ==========================
    for (int i = 0; i < 4; i++) {
        printf("Acesso por indice v[%d] = %d | Acesso por ponteiro *(v+%d) = %d\n",
               i, v[i], i, *(v+i));
    }
    printf("\n");

    // ==========================
    // 3.  Navegação com ponteiros (aritmética de ponteiros)
    // ==========================
    int *p = v; // ponteiro p apontar para o primeiro elemento do array
    for (int i = 0; i < 4; i++) {
        // (p+i) avança o ponteiro para o próximo elemento
        // *(p+i) acessa o valor armazenado nesse endereço
        printf("Endereco: %p | Valor: %d\n", (p+i), *(p+i));
    }
    printf("\n");

    // ==========================
    // 4. Percorrendo array com ponteiros
    // ==========================
    printf("Percorrendo array com aritmética de ponteiros:\n");
    for (p = v; p < v + 4; p++) {
        printf("Endereco: %p | Valor: %d\n", p, *p);
    }
    printf("\n");

    // ==========================
    // 5. Alterando valores via ponteiro
    // ==========================
    *v = 13;        // altera v[0]
    *(v+1) = 17;    // altera v[1]

    printf("Novo valor de v[0] = %d\n", v[0]);
    printf("Novo valor de v[1] = %d\n", v[1]);

    return 0;
}
