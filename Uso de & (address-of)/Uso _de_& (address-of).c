// Arquivo: exemplo_1_operadores.c
// Objetivo: Demonstrar o uso dos operadores & (address-of) e * (dereference).

#include <stdio.h>

int main() {
    // 1. Declaramos uma variável comum do tipo inteiro.
    // Ela ocupa um espaço na memória e contém o valor 42.
    int numero = 42;

    printf("--- Demonstração dos Operadores & e * ---\n\n");
    printf("1. Variável 'numero' declarada.\n");
    printf("   - Valor de 'numero': %d\n", numero);

    // 2. Usamos o operador '&' (address-of) para obter o endereço de memória
    // onde a variável 'numero' está armazenada.
    // O formato %p é usado para imprimir endereços de memória (ponteiros).
    printf("2. Usando o operador '&' (address-of).\n");
    printf("   - Endereço de memória de 'numero': %p\n", (void *)&numero);

    // 3. Declaramos um ponteiro.
    // 'ponteiro_para_numero' é uma variável especial que não armazena um valor
    // comum, mas sim um ENDEREÇO de memória de outra variável do tipo int.
    int* ponteiro_para_numero;
    printf("\n3. Ponteiro 'ponteiro_para_numero' declarado.\n");

    // 4. Atribuímos o endereço de 'numero' ao nosso ponteiro.
    // Agora, o ponteiro "aponta para" a variável 'numero'.
    ponteiro_para_numero = &numero;
    printf("4. O ponteiro agora armazena o endereço de 'numero'.\n");
    printf("   - Valor do ponteiro (o endereço que ele guarda): %p\n", (void *)ponteiro_para_numero);

    // 5. Usamos o operador '*' (dereference) para acessar o VALOR
    // que está no endereço de memória para o qual o ponteiro aponta.
    int valor_acessado = *ponteiro_para_numero;
    printf("\n5. Usando o operador '*' (dereference) para LER o valor.\n");
    printf("   - Valor no endereço apontado: %d\n", valor_acessado);
    printf("   - Note que é o mesmo valor da variável 'numero'.\n");

    // 6. Também podemos usar o operador '*' (dereference) para MODIFICAR
    // o valor da variável original de forma indireta.
    printf("\n6. Usando o operador '*' para MODIFICAR o valor.\n");
    printf("   - Modificando o valor para 100 via ponteiro: *ponteiro_para_numero = 100;\n");
    *ponteiro_para_numero = 100;

    // 7. Verificamos o valor da variável original 'numero'.
    // Ele foi alterado, provando que o ponteiro realmente afeta a variável original.
    printf("7. Verificando o valor da variável 'numero' original.\n");
    printf("   - Novo valor de 'numero': %d\n\n", numero);

    printf("--- Fim da Demonstração ---\n");

    return 0;
}