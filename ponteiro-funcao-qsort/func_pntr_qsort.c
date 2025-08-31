#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char valores_string[5][10] = {"Jessica", "Lucas", "Rian", "Gabriela", "Mayara"};

int compara_string(void const * ponteiro_a, void const * ponteiro_b){
    // casting dos ponteiros de void para char para passar os valores para a funcao strcmp
    char const * primeira = (char const *)ponteiro_a;
    char const * segunda = (char const *)ponteiro_b;

    // strcmp compara duas strings em ordem alfabética, retorna n<0 se a primeira for maior, n==0 se forem iguais, n>0 se a segunda for maior
    return strcmp(primeira, segunda); 
}

int main(){    
    // imprime as strings desordenadas
    printf("Strings desordenadas: ");
    for (int i = 0; i < 5; i++) {

        printf("%s ", valores_string[i]);
    }
    printf("\n");

    /* 
        passa pro qsort:
            o array de strings que vai ser ordenado (valores_string)
            o tamanho do array (5)
            o tamanho de cada string (10)
            ponteiro para função que o qsort vai usar para comparar cada string (compara_string)

        a funcao qsort ordena qualquer tipo de array, por isso ela espera uma função que recebe dois ponteiros genéricos (void const *) e retorna um int
        não podemos passar a strcmp direto pq ela recebe dois ponteiros char e retorna um int, por isso que precisa da função intermediária compara_string
    */ 
    qsort(valores_string, 5, 10, compara_string);
    
    // imprime as strings ordenadas
    printf("Strings ordenadas: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", valores_string[i]);
    }

    return 0;
}