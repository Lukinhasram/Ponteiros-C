# Ordenação com qsort e Ponteiro para Função

## Visão geral
Este script demonstra como usar a função `qsort` da biblioteca padrão do C para ordenar um array de strings. O principal conceito abordado é o uso de um **ponteiro para função** para passar uma lógica de comparação personalizada para `qsort`.

Conceitos abordados:
- Ordenação genérica com `qsort`.
- Ponteiros para função como argumentos.
- A necessidade de uma função "wrapper" ou "adaptadora" para `strcmp`.
- Conversão de ponteiros genéricos (`void *`) para tipos específicos (`char *`).

## Dependências
- GCC (ou outro compilador C compatível com C11).

## Estrutura
- `func_pntr_qsort.c`: Código-fonte que define um array de strings e o ordena usando `qsort`.
- `output/`: Diretório-alvo para o binário compilado.

## Compilação
No Linux com `gcc` instalado, compile a partir da raiz do projeto com:

```bash
gcc -Wall "ponteiro-funcao-qsort/func_pntr_qsort.c" -o "ponteiro-funcao-qsort/output/func_pntr_qsort"
```

## Execução
Execute o binário gerado a partir da raiz do projeto:

```bash
"ponteiro-funcao-qsort/output/func_pntr_qsort"
```

Ou, caso esteja dentro da pasta `output`:

```bash
./func_pntr_qsort
```

## Exemplo de saída esperada
O programa primeiro imprime a lista de nomes desordenada e, em seguida, a lista ordenada alfabeticamente.

```
Strings desordenadas: Jessica Lucas Rian Gabriela Mayara 
Strings ordenadas: Gabriela Jessica Lucas Mayara Rian 
```
