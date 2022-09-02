<p align="center">
  <a href="#questão-2">Questão 2</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-3">Questão 3</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-4">Questão 5</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-5">Questão 5</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-6">Questão 6</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-7">Questão 7</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
</p>

# 📚 Lista 01 - Programação em C
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

## Questão 3:
Faça um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal.
``` c
#include <stdio.h>

int main() {
  float n;
  //puts = printf \n
  printf("Numero: ");
  scanf("%f", &n);
  printf("%0.1f", n);
}
```

## Questão 4:
Faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.
``` c
#include <stdio.h>

int main() {
  float n;
  printf("Número: ");
  scanf("%f",&n);
  printf("Triplo: %.0f | Quadrado: %.0f | Meio: %0.1f ", 3*n, n*n, n/2);
  return 0;
}
```

## Questão 5:
Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.
``` c
#include <stdio.h>

int main() {
  float x,y;
  printf("Valor da conta: ");
  scanf("%f",&x);
  y = (0.1 * x) + x;
  printf("Valor total com 10%%: %0.2f",y);
  return 0;
}
```

## Questão 6:
Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal atraves da seguinte formula: 
- para homens: 72.7 * altura - 58
- para mulheres: 62.1 * altura - 44.7
``` c
#include <stdio.h>

int main() {
  float alt;
  char sex;
  float r;
  printf("Altura: ");
  scanf("%f",&alt);
  printf("Sexo: ");
  scanf("%s",&sex);
    switch(sex){
      case 'h':
       r = (72.7 * alt) - 58;
      printf("Peso ideal: %0.2f",r);
      break;
      case 'm':
        r = (62.1 * alt) - 44.7;
        printf("Peso ideal: %0.2f",r);
        break;
    }
}
```

