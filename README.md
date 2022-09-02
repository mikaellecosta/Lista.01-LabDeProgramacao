<p align="center">
  <a href="#-Questão 2">Questão 2</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-">Questão 3<Questão 3/a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-Questão 4">Questão 4</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
</p>

# Lista 01 - Programação em C
Lista de exercícios submetida na aula do dia 29/08/22.

## Questão 2:
Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.

``` c
#include <stdio.h>

void conversao(n1){
  printf("Hexa: %x \n", n1);
  printf("Octal: %o", n1);
}

int main() {
  int n1;
  printf("Número: ");
  scanf("%d",&n1);
  conversao(n1);
  return 0;
}
```
