# Ponteiros e Arrays em C

Ponteiros são fundamentais para a programação bem-sucedida em C:
- Passagem de parâmetros por referência
- Alocação dinâmica de memória
- Aumento da eficiência de certas rotinas

Essencialmente, um ponteiro é uma variável que, ao invés de conter um valor, contém um endereço de memória.

## Declaração de Ponteiros

```c
<tipo> *<nome_variável>;
int *iptr;
float *fptr;
char *cptr;
```
Exemplo: declaração de diversos ponteiros.

Embora um ponteiro armazene um endereço de memória, é necessário associar um tipo ao declarar um ponteiro. Isso instrui o compilador sobre como acessar o dado apontado.

## Operadores de Ponteiros
- `*` (conteúdo): retorna o conteúdo do endereço apontado pelo ponteiro
- `&` (endereço): retorna o endereço de memória de uma variável

Exemplo:
```c
int count;
int *iptr;
iptr = &count;
printf("%d", *iptr);
```

## Inicialização de Ponteiros
- Ponteiros são inicializados ao receberem um endereço para apontar.
- Ponteiros não inicializados são chamados de "ponteiros selvagens".
- Não inicializar ponteiros é uma das principais causas de erros em C.

Para evitar problemas, atribua `NULL` ao ponteiro:
```c
int *iptr = NULL;
```

## Ponteiros e Arrays

Ponteiros são muito usados para navegar em arrays, especialmente os alocados dinamicamente. Basta criar um ponteiro para a primeira posição do array e usar aritmética de ponteiros para percorrê-lo.

Exemplo:
```c
int vet[10];
int *iptr;
iptr = vet;
iptr++;
```
Se o array começa na posição 00H, após `iptr++`, o ponteiro aponta para 02H (considerando inteiros de 2 bytes).

### Atenção
Em C, arrays não possuem marcador de fim de alocação. Ponteiros podem acessar áreas de memória além do fim do array, causando erros.

## Aritmética de Ponteiros

Operadores:
- `++` incremento unitário
- `--` decremento unitário

## Comparação de Ponteiros

Comparar ponteiros significa comparar endereços de memória. Isso é útil para manipular estruturas como listas ligadas ou árvores.

Exemplo:
```c
int vet[7];
int *iptr1, *iptr2;
iptr1 = &vet[0];
iptr2 = &vet[6];
iptr1 == iptr2;
iptr1 < iptr2;
iptr1 > iptr2;
iptr1 <= iptr2;
```
