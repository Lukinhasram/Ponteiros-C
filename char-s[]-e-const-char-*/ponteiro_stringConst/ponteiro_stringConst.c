#include <stdio.h>

int main() {
    // Declaração de um ponteiro para um 'const char'.
    // A string literal "Gabriela" é armazenada em uma área de memória somente leitura.
    // O ponteiro 's' apenas armazena o endereço de onde "Gabriela" está.
    const char *s = "Gabriela";

    // Mostra a string original.
    printf("Nome: %s\n", s);


    // TENTATIVA DE MODIFICAR O CONTEÚDO PARA O QUAL O PONTEIRO APONTA.
    // Isso é uma operação ilegal porque a string está em uma área de memória protegida.
    // O modificador 'const' alerta o compilador para este problema.
    
    // s[0] = 'g'; // DÁ ERRO!

    // Mostra o tamanho do ponteiro, que é fixo (geralmente 4 ou 8 bytes).
    // Não é o tamanho da string, e sim do ponteiro em si.
    printf("Tamanho do ponteiro *s: %zu bytes\n", sizeof(s));

    return 0;
}
