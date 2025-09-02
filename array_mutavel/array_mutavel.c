#include <stdio.h>

int main() {
    // Declaração de um array de caracteres.
    // O compilador aloca espaço na 'stack' e copia a string "Gabriela" para lá.
    // 's' agora é um array independente, e não um ponteiro para a string literal.
    char s[] = "Gabriela";

    // Mostra a string original.
    printf("Nome original: %s\n", s);

    // Tentativa de modificar o primeiro caractere para 'g' minúsculo.
    // Isso é permitido porque estamos modificando a cópia local do array na 'stack'.
    s[0] = 'g';

    // Mostra a string modificada.
    printf("Nome modificado: %s\n", s);

    // O compilador calcula o tamanho do array.
    printf("Tamanho do array s[]: %zu bytes\n", sizeof(s));

    return 0;
}
