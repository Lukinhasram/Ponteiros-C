// Arquivo: exemplo_4_swap.c
// Objetivo: Demonstrar a criação de uma função 'swap' que troca os valores
// de duas variáveis usando ponteiros.

#include <stdio.h>

// A função 'swap' recebe dois PONTEIROS para inteiros como argumentos.
// Ela não recebe os valores, mas sim os ENDEREÇOS das variáveis.
void swap(int* ptr_a, int* ptr_b) {
    printf("  [Dentro da função swap]\n");
    printf("  - Endereço recebido em ptr_a: %p\n", (void*)ptr_a);
    printf("  - Endereço recebido em ptr_b: %p\n", (void*)ptr_b);
    
    // 1. Guarda o VALOR que está no endereço apontado por ptr_a em uma variável temporária.
    //    Usamos '*' para acessar o valor.
    int temp = *ptr_a;
    
    // 2. Copia o VALOR que está no endereço de ptr_b para o endereço de ptr_a.
    *ptr_a = *ptr_b;
    
    // 3. Copia o VALOR que estava guardado em 'temp' para o endereço de ptr_b.
    *ptr_b = temp;

    printf("  - Troca realizada dentro da função.\n");
}

int main() {
    int valor1 = 10;
    int valor2 = 99;

    printf("--- Demonstração da Função swap com Ponteiros ---\n\n");
    printf("Valores ANTES da troca:\n");
    printf(" - valor1 = %d (no endereço %p)\n", valor1, (void*)&valor1);
    printf(" - valor2 = %d (no endereço %p)\n\n", valor2, (void*)&valor2);

    printf("Chamando a função swap() e passando os ENDEREÇOS de valor1 e valor2...\n");
    // Chamamos a função 'swap' passando os endereços das variáveis
    // usando o operador '&'.
    swap(&valor1, &valor2);
    printf("...retornamos para a main.\n\n");

    printf("Valores DEPOIS da troca:\n");
    printf(" - valor1 = %d\n", valor1);
    printf(" - valor2 = %d\n", valor2);
    printf("\nOs valores originais foram permanentemente alterados!\n");
    
    printf("\n--- Fim da Demonstração ---\n");

    return 0;
}