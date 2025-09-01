
# Demonstração da Função `swap` com Ponteiros em C

Este repositório contém um código-fonte em C (`swap_com_ponteiros.c`) que demonstra como criar uma função para trocar os valores de duas variáveis usando **ponteiros**. Essa técnica é fundamental para manipular dados por referência em C.

---

##  Objetivo

O objetivo deste exemplo é:

- Mostrar como **passar variáveis por referência** em C utilizando ponteiros.
- Explicar o funcionamento da função `swap` que troca os valores de duas variáveis.
- Exibir os **endereços de memória** envolvidos na operação.

---

##  Conceitos Demonstrados

- **Passagem por referência:** Em vez de passar cópias dos valores, passamos os **endereços** das variáveis para a função.
- **Uso de ponteiros como parâmetros:** A função recebe `int*` para acessar diretamente os valores originais.
- **Operador `*` (dereference):** Para acessar/modificar os valores no endereço apontado.
- **Troca de valores:** Usando uma variável temporária (`temp`).

---

##  Código Fonte

```c
#include <stdio.h>

// A função 'swap' recebe dois PONTEIROS para inteiros como argumentos.
// Ela não recebe os valores, mas sim os ENDEREÇOS das variáveis.
void swap(int* ptr_a, int* ptr_b) {
    printf("  [Dentro da função swap]\n");
    printf("  - Endereço recebido em ptr_a: %p\n", (void*)ptr_a);
    printf("  - Endereço recebido em ptr_b: %p\n", (void*)ptr_b);
    
    // 1. Guarda o VALOR que está no endereço apontado por ptr_a em uma variável temporária.
    int temp = *ptr_a;
    
    // 2. Copia o VALOR que está no endereço de ptr_b para o endereço de ptr_a.
    *ptr_a = *ptr_b;
    
    // 3. Copia o VALOR que estava guardado em 'temp' para o endereço de ptr_b.
    *ptr_b = temp;

    printf("  - Troca realizada dentro da função.\n");
}

int main() {
    int valor1 = 10;
    int valor2 = 99;

    printf("--- Demonstração da Função swap com Ponteiros ---\n\n");
    printf("Valores ANTES da troca:\n");
    printf(" - valor1 = %d (no endereço %p)\n", valor1, (void*)&valor1);
    printf(" - valor2 = %d (no endereço %p)\n\n", valor2, (void*)&valor2);

    printf("Chamando a função swap() e passando os ENDEREÇOS de valor1 e valor2...\n");
    swap(&valor1, &valor2);
    printf("...retornamos para a main.\n\n");

    printf("Valores DEPOIS da troca:\n");
    printf(" - valor1 = %d\n", valor1);
    printf(" - valor2 = %d\n", valor2);
    printf("\nOs valores originais foram permanentemente alterados!\n");
    
    printf("\n--- Fim da Demonstração ---\n");

    return 0;
}
```

---

##  Como Compilar e Executar

### **Linux / macOS**
```bash
gcc swap_com_ponteiros.c -o swap
./swap
```

### **Windows**
```bash
gcc swap_com_ponteiros.c -o swap.exe
swap.exe
```

---

## Saída Esperada

```text
--- Demonstração da Função swap com Ponteiros ---

Valores ANTES da troca:
 - valor1 = 10 (no endereço 0x7ffd7c7e8a94)
 - valor2 = 99 (no endereço 0x7ffd7c7e8a98)

Chamando a função swap() e passando os ENDEREÇOS de valor1 e valor2...
  [Dentro da função swap]
  - Endereço recebido em ptr_a: 0x7ffd7c7e8a94
  - Endereço recebido em ptr_b: 0x7ffd7c7e8a98
  - Troca realizada dentro da função.
...retornamos para a main.

Valores DEPOIS da troca:
 - valor1 = 99
 - valor2 = 10

Os valores originais foram permanentemente alterados!

--- Fim da Demonstração ---
```

---

##  Autor
Este código foi desenvolvido como parte do estudo sobre **ponteiros e passagem por referência em C**.
