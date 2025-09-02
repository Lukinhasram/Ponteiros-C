# Diferença entre char s[] e const char *

Este repositório explica as diferenças entre declarar uma string em C como **array de caracteres** (char s[]) e como **ponteiro constante para caracteres** (const char *).

---


## Introdução

Em C, strings podem ser manipuladas de diferentes formas. 

As duas mais comuns são:

- **char s[]** → cria um array mutável na stack (pilha).  
- **const char** → cria um ponteiro que aponta para uma string literal armazenada em memória somente leitura.  

Embora possam parecer semelhantes, existem diferenças fundamentais de **alocação de memória, mutabilidade e segurança**.


---
## char s[] — Um Array Mutável na Stack

Quando se declara um array de caracteres, como char s[ ] = "Gabriela", o compilador faz o seguinte:

- **Alocação de Memória:** Alocação de Memória: Ele aloca um bloco de memória no stack (a pilha) para o array s. O tamanho desse bloco é definido no momento da compilação e é suficiente para guardar a string literal "Gabriela" mais o caractere nulo de terminação \0.
 
- **Cópia de Conteúdo:** O conteúdo da string literal "Gabriela" é copiado, caractere por caractere, para esse novo bloco de memória na stack.

- **Mutabilidade:** Por ser um array na stack, o seu conteúdo é totalmente mutável. É possível modificar os caracteres do array livremente após a inicialização.


Exemplo Prático:

```c
char s[] = "Gabriela"; 
s[0] = 'J';
// Esta operação é válida.
printf("%s\n", s); 
// Saída: Jello
```

---

## const char *s - Um Ponteiro para uma String Constante

Ao declarar um ponteiro para um const char, como const char *s = "Gabriela";, a forma como a memória é tratada é fundamentalmente diferente:

- **Alocação de Memória:** A string literal "Gabriela" é armazenada em uma área especial de memória, que é somente leitura.
 
- **Armazenamento do Ponteiro:** O ponteiro s em si é uma variável alocada na stack, mas ele armazena apenas o endereço daquela string literal na memória somente leitura.

- **Imutabilidade:** O modificador const indica que não se pode usar o ponteiro s para modificar o conteúdo para o qual ele aponta. Se você tentar, o compilador pode gerar um erro, ou, mais perigoso, o programa pode falhar em tempo de execução com um erro de segmentação.

Exemplo Prático:
```c
const char *s = "Gabriela";
s[0] = 'J'; // ERRO! Comportamento indefinido.
// O compilador pode avisar, mas a execução pode falhar.

```
Assim, char s[] cria uma cópia local e mutável, enquanto const char * cria uma referência para uma string imutável, tornando-a muito mais eficiente para lidar com literais de string que não precisam ser alteradas.
