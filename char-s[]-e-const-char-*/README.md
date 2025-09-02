# Diferença entre `char s[]` e `const char *s`

## Visão geral
Este diretório contém dois scripts que demonstram a diferença fundamental em C entre declarar uma string como um array de caracteres (`char s[]`) e como um ponteiro para uma string literal (`const char *s`). A principal distinção reside na **mutabilidade** e na **localização da memória**.

- `char s[] = "..."` cria um **array mutável** na memória stack, copiando a string literal para ele.
- `const char *s = "..."` cria um **ponteiro** que aponta para a string literal, que geralmente reside em uma **área de memória somente leitura**.

Conceitos abordados:
- Declaração de strings como arrays (`char[]`).
- Declaração de strings com ponteiros (`const char *`).
- Mutabilidade de strings e segurança de memória.
- Localização da memória: stack vs. segmento de dados somente leitura.
- Comportamento do operador `sizeof` em arrays e ponteiros.

## Dependências
- GCC (ou outro compilador C compatível).

## Estrutura
- `array_mutavel/array_mutavel.c`: Demonstra o uso de `char s[]`. O conteúdo do array é copiado para a stack e pode ser modificado com segurança.
- `ponteiro_stringConst/ponteiro_stringConst.c`: Demonstra o uso de `const char *s`. O ponteiro aponta para uma área de memória não modificável. Tentar alterar seu conteúdo resulta em erro.
- `output/`: Diretório-alvo para os binários compilados.

## Compilação
No Linux com `gcc` instalado, compile os dois exemplos a partir da raiz do projeto:

```bash
# Criar o diretório de saída, se não existir
mkdir -p "char s[] e const char */output"

# Compilar o exemplo do array mutável
gcc -Wall "char s[] e const char */array_mutavel/array_mutavel.c" -o "char s[] e const char */output/array_mutavel"

# Compilar o exemplo do ponteiro para constante
gcc -Wall "char s[] e const char */ponteiro_stringConst/ponteiro_stringConst.c" -o "char s[] e const char */output/ponteiro_stringConst"
```
**Nota:** A compilação de `ponteiro_stringConst.c` pode gerar um erro se a linha `s[0] = 'g';` estiver descomentada, o que é o comportamento esperado.

## Execução
Execute os binários gerados a partir da raiz do projeto:

```bash
# Executar o exemplo do array mutável
./"char s[] e const char */output/array_mutavel"

# Executar o exemplo do ponteiro para constante
./"char s[] e const char */output/ponteiro_stringConst"
```

## Exemplo de saída esperada

### `array_mutavel`
O programa modifica com sucesso o primeiro caractere da string. O `sizeof` retorna o tamanho total do array (7 caracteres + 1 byte nulo).
```
Nome original: Gabriela
Nome modificado: gabriela
Tamanho do array s[]: 8 bytes
```

### `ponteiro_stringConst`
O programa imprime a string original. A tentativa de modificação está comentada para permitir a compilação. O `sizeof` retorna o tamanho do ponteiro, não da string.
```
Nome: Gabriela
Tamanho do ponteiro *s: 8 bytes
```
(O tamanho do ponteiro pode ser 4 bytes em sistemas de 32 bits).
