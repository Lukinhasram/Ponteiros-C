
# Demonstração dos Operadores `&` (Address-Of) e `*` (Dereference) em C

Este repositório contém um código-fonte em C (`Uso_de_&(address-of).c`) que serve como um exemplo didático para demonstrar o uso fundamental de ponteiros, focando nos operadores `&` (address-of) e `*` (dereference).

---

##  Objetivo

O objetivo principal deste código é ilustrar, de forma clara e passo a passo, como:

- Obter o **endereço de memória** de uma variável.
- Declarar um **ponteiro**.
- Armazenar o endereço de uma variável em um ponteiro.
- **Acessar (ler)** o valor de uma variável indiretamente através de um ponteiro.
- **Modificar (escrever)** o valor de uma variável indiretamente através de um ponteiro.

---

##  Conceitos Demonstrados

O programa aborda os seguintes conceitos essenciais da linguagem C:

- **Variáveis:** Declaração e inicialização de uma variável do tipo `int`.
- **Operador `&` (Address-Of):** Obtém o endereço de memória de uma variável.
- **Ponteiros:** Variáveis que armazenam endereços de memória.
- **Operador `*` (Dereference):** Acessa ou modifica o valor armazenado no endereço apontado.
- **Atribuição Indireta:** Alteração do valor de uma variável por meio do ponteiro.
- **Saída Formatada:** Uso do `printf` com `%d` para inteiros e `%p` para endereços.

---

##  Como Funciona

O código executa os seguintes passos:

1. **Declaração:** Cria uma variável inteira `numero` inicializada com `42`.
2. **Endereço:** Usa `&` para imprimir o endereço de memória de `numero`.
3. **Ponteiro:** Declara `ponteiro_para_numero` como ponteiro para `int`.
4. **Apontamento:** Armazena o endereço de `numero` no ponteiro.
5. **Leitura Indireta:** Usa `*` para ler o valor armazenado no endereço apontado.
6. **Modificação Indireta:** Usa `*` para alterar o valor para `100`.
7. **Verificação:** Imprime novamente `numero` para confirmar a modificação.

---

##  Código Fonte

```c
#include <stdio.h>

int main() {
    printf("--- Demonstração dos Operadores & e * ---\n\n");

    int numero = 42;
    printf("1. Variável 'numero' declarada.\n   - Valor de 'numero': %d\n", numero);

    printf("2. Usando o operador '&' (address-of).\n   - Endereço de memória de 'numero': %p\n\n", (void*)&numero);

    int *ponteiro_para_numero;
    printf("3. Ponteiro 'ponteiro_para_numero' declarado.\n");

    ponteiro_para_numero = &numero;
    printf("4. O ponteiro agora armazena o endereço de 'numero'.\n   - Valor do ponteiro: %p\n\n", (void*)ponteiro_para_numero);

    printf("5. Usando o operador '*' (dereference) para LER o valor.\n   - Valor no endereço apontado: %d\n\n", *ponteiro_para_numero);

    *ponteiro_para_numero = 100;
    printf("6. Usando o operador '*' para MODIFICAR o valor.\n   - Modificando o valor para 100 via ponteiro: *ponteiro_para_numero = 100;\n");

    printf("7. Verificando o valor da variável 'numero' original.\n   - Novo valor de 'numero': %d\n\n", numero);

    printf("--- Fim da Demonstração ---\n");

    return 0;
}
```

---

## Como Compilar e Executar

### **Linux / macOS**
```bash
gcc "Uso_de_&(address-of).c" -o programa_ponteiros
./programa_ponteiros
```

### **Windows**
```bash
gcc "Uso_de_&(address-of).c" -o programa_ponteiros.exe
programa_ponteiros.exe
```

---

##  Saída Esperada

```text
--- Demonstração dos Operadores & e * ---

1. Variável 'numero' declarada.
   - Valor de 'numero': 42
2. Usando o operador '&' (address-of).
   - Endereço de memória de 'numero': 0x7ffd7c7e8a94

3. Ponteiro 'ponteiro_para_numero' declarado.
4. O ponteiro agora armazena o endereço de 'numero'.
   - Valor do ponteiro: 0x7ffd7c7e8a94

5. Usando o operador '*' (dereference) para LER o valor.
   - Valor no endereço apontado: 42

6. Usando o operador '*' para MODIFICAR o valor.
   - Modificando o valor para 100 via ponteiro: *ponteiro_para_numero = 100;
7. Verificando o valor da variável 'numero' original.
   - Novo valor de 'numero': 100

--- Fim da Demonstração ---
```

---

##  Autor
Este código foi desenvolvido como parte de um estudo sobre **ponteiros em C** para a disciplina de **Linguagem de Programação**.
