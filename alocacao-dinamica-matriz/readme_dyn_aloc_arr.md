# Alocação Dinâmica de Matriz Com T**

## Visão geral
Este script demonstra como alocar, usar e liberar dinamicamente uma matriz (char**) em C. A matriz é criada com `linhas` e `colunas` definidas em tempo de execução, preenchida com o caractere `L`, exibida no console e depois devidamente liberada.

Conceitos abordados:
- Ponteiros e ponteiros para ponteiros (`char*` e `char**`).
- Alocação dinâmica no heap com `malloc` e liberação com `free`.
- Matriz como vetor de ponteiros: primeiro aloca-se um vetor de `char*` (linhas) e, em seguida, cada linha como um vetor de `char` (colunas).
- Verificação básica de erro de alocação.

## Dependências
- GCC (ou outro compilador C compatível com C11).

## Estrutura
- `dyn_aloc_arr.c`: Código-fonte com as funções `inicia_matriz`, `mostra_matriz` e `libera_matriz`, além de `main` para demonstração.
- `output/`: Diretório-alvo para o binário compilado.

## Compilação
No Linux com `gcc` instalado, compile com:

```bash
gcc -Wall "alocacao dinamica matriz/dyn_aloc_arr.c" -o "alocacao dinamica matriz/output/dyn_aloc_arr"
```

## Execução
Execute o binário gerado:

```bash
"alocacao dinamica matriz/output/dyn_aloc_arr"
```

Ou, caso esteja dentro da pasta `output`:

```bash
./dyn_aloc_arr
```

## Exemplo de saída esperada
Com `linhas = 5` e `colunas = 10` (valores definidos no `main`):

```
{L}{L}{L}{L}{L}{L}{L}{L}{L}{L}
{L}{L}{L}{L}{L}{L}{L}{L}{L}{L}
{L}{L}{L}{L}{L}{L}{L}{L}{L}{L}
{L}{L}{L}{L}{L}{L}{L}{L}{L}{L}
{L}{L}{L}{L}{L}{L}{L}{L}{L}{L}
```
