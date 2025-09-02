# Ponteiros em C: Exemplos e Explicações

Este repositório é uma coleção de exemplos práticos e explicações detalhadas sobre o uso de ponteiros na linguagem C. O objetivo é fornecer uma base sólida sobre conceitos fundamentais, desde a manipulação básica de endereços de memória até tópicos mais avançados como alocação dinâmica e ponteiros para funções.

## Como Compilar e Executar os Exemplos

A maioria dos exemplos pode ser compilada usando um compilador C padrão como o GCC. Para compilar um arquivo específico, navegue até o diretório correspondente e use o comando:

```bash
# Exemplo para o swap.c
gcc swap.c -o swap_executavel
```

Para executar o programa compilado:

```bash
./swap_executavel
```

Consulte o `readme.md` de cada diretório para instruções mais detalhadas, se necessário.

## Tópicos Abordados

1.  [Uso dos Operadores `&` e `*`](#1-uso-dos-operadores---address-of-e--dereference)
2.  [Função `swap` com Ponteiros](#2-função-swap-com-ponteiros)
3.  [Ponteiros e Arrays](#3-ponteiros-e-arrays)
4.  [Diferença entre `char s[]` e `const char *`](#4-diferença-entre-char-s-e-const-char-)
5.  [Alocação Dinâmica de Matrizes](#5-alocação-dinâmica-de-matrizes)
6.  [Ponteiros para Funções e `qsort`](#6-ponteiros-para-funções-e-qsort)

---

### 1. Uso dos Operadores `&` (Address-Of) e `*` (Dereference)

-   **Diretório:** `uso-de-&-*`
-   **Arquivo:** `address_of_dereference.c`

Este exemplo demonstra o uso mais fundamental dos ponteiros:
-   O operador `&` é usado para obter o endereço de memória de uma variável.
-   O operador `*` é usado para "desreferenciar" um ponteiro, ou seja, acessar ou modificar o valor que existe no endereço de memória para o qual ele aponta.

O código ilustra como declarar um ponteiro, fazê-lo apontar para uma variável e, em seguida, ler e alterar o valor da variável original indiretamente.

### 2. Função `swap` com Ponteiros

-   **Diretório:** `funcao-swap-ponteiros`
-   **Arquivo:** `swap.c`

Um exemplo clássico que ilustra a **passagem por referência**. Em C, para que uma função possa modificar o valor de variáveis declaradas em outro escopo (como na `main`), é necessário passar seus endereços de memória.

A função `swap` recebe dois ponteiros e os utiliza para trocar os valores das variáveis originais, demonstrando um dos usos mais importantes e comuns dos ponteiros.

### 3. Ponteiros e Arrays

-   **Diretório:** `arrays-e-ponteiros`
-   **Arquivo:** `ponteiros.c`

Explora a relação intrínseca entre ponteiros e arrays em C. O nome de um array é, essencialmente, um ponteiro para o seu primeiro elemento. Este exemplo aborda:
-   Como usar um ponteiro para percorrer um array.
-   Aritmética de ponteiros (`++`, `--`) para navegar entre os elementos.
-   A importância de não ultrapassar os limites do array, já que C não faz essa verificação.

### 4. Diferença entre `char s[]` e `const char *`

-   **Diretório:** `char-s[]-e-const-char-*`

Este tópico esclarece uma dúvida comum sobre a manipulação de strings em C:
-   `char s[] = "texto";` cria um **array mutável** na memória *stack*. O conteúdo da string é copiado para este array e pode ser modificado.
-   `const char *s = "texto";` cria um **ponteiro** que aponta para uma **string literal**, que geralmente é armazenada em uma área de memória somente leitura. Tentar modificar essa string resulta em comportamento indefinido.

### 5. Alocação Dinâmica de Matrizes

-   **Diretório:** `alocacao-dinamica-matriz`
-   **Arquivo:** `dyn_aloc_arr.c`

Demonstra como alocar dinamicamente uma matriz (um array de arrays) usando `malloc`. A técnica envolve:
1.  Alocar um array de ponteiros (para as linhas), resultando em um `char**`.
2.  Iterar sobre este array e alocar um array de caracteres para cada linha.

O exemplo também mostra a importância de liberar a memória na ordem inversa para evitar vazamentos de memória (*memory leaks*).

### 6. Ponteiros para Funções e `qsort`

-   **Diretório:** `ponteiro-funcao-qsort`
-   **Arquivo:** `func_pntr_qsort.c`

Um exemplo mais avançado que mostra como usar um **ponteiro para função**. A função `qsort` da biblioteca padrão do C é uma função de ordenação genérica que recebe, como argumento, um ponteiro para uma função de comparação.

Este código demonstra como:
-   Criar uma função de comparação compatível com a assinatura exigida por `qsort`.
-   Passar essa função como argumento para ordenar um array de strings.

---

## Referências

-   [IME/USP - Introdução a Ponteiros](https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html)
-   [GeeksforGeeks - C Pointers](https://www.geeksforgeeks.org/c/c-pointers/)

---

## Autores

Este repositório foi criado como parte de estudos na disciplina de Paradigmas de Linguagem de Programação por:

-   Gabriela Cota @gabrielacota
-   Jéssica Pereira @jessicapsk
-   Lucas Ramos @lukinhasram
-   Mayara Barbosa @mayarabarbosa12
-   Rian Carlos @rian1632
