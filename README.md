<p align="center">
  <a href="#questão-2">2</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-3">3</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-4">4</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-5">5</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-6">6</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-7">7</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-8">8</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-9">9</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-10">10</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-11">11</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-12">12</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-13">13</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-14">14</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-15">15</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-16">16</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-17">17</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-18">18</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-19">19</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-20">20</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-21">21</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-22">22</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-23">23</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-24">24</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-25">25</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-26">26</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#questão-27">27</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
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

## Questão 7:
Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.
``` c
#include <stdio.h>

int main() {
  
  int h,m,s,total,h2,m2;
  printf("Digite as horas, os minutos e os segundos:\n");
  scanf("%d %d %d", &h,&m,&s);
  h2 = h * 3600;
  m2 = m * 60;
  total = h2 + m2 + s;
  printf("O total é: %ds", total);

  return 0;
}
```

## Questão 8:
Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.
``` c
#include <stdio.h>

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d",&n);
  printf("O número elevado ao quadrado é: %d",n*n);
  return 0;
}
``` 

## Questão 9:
Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores sucessor e antecessor.
``` c
#include <stdio.h>

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d",&n);
  printf("Seu antecessor é: %d. Seu sucessor é: %d", n-1,n+1);
  return 0;
}
``` 

## Questão 10:
Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a formula 
- VOLUME = COMPRIMENTO * LARGURA * ALTURA.
``` c
#include <stdio.h>

int main() {
  int c,l,a;
  printf("Digite o comprimento, a largura e a altura em cm: \n");
  scanf("%d %d %d", &c,&l,&a);
  printf("O volume é: %d cm³", c*l*a);
  return 0;
}
``` 

## Questão 11:
Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O programa deve solicitar o valor da cotaçao do dlar e tambem a quantidade de reais que o usuario deseja converter.
``` c
#include <stdio.h>

int main() {
  float dolar, real, cot;
  printf("Cotação do dolar: ");
  scanf("%f",&cot);
  printf("Quantidade em reais: ");
  scanf("%f",&real);

  printf("%0.2f reais equivalem a %0.2f dolares",real, real/cot);
  
  return 0;
}
``` 

## Questão 12:
Escreva um programa que pe ca ao usuario para digitar dois numeros, obtenha-os do usuario e imprima a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros.
``` c
#include <stdio.h>

int main() {
  int a,b;
  printf("Digite 4 números:\n");
  scanf("%d %d", &a,&b);

  printf("Soma: %d | Produto: %d | Diferença: %d | Quociente: %d | Resto: %d", a+b, a*b, a-b, a/b, a%b);
  return 0;
}
``` 

## Questão 13:
Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo é que a variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores apos a efetivacao do processamento da troca.
``` c
#include <stdio.h>

int main() {
  int a, b, c=0;
  printf("Digite um valor para A: ");
  scanf("%d",&a);
  printf("Digite um valor para B: ");
  scanf("%d",&b);

  c = a;
  a = b;
  b = c;

  printf("Valor de A = %d. Valor de B = %d", a,b);
}
``` 

## Questão 14:
Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus Fahrenheit.
- F = (9 * C + 160) / 5
``` c
#include <stdio.h>

int main() {
  float c, f;
  printf("Temperatura em Celcius: ");
  scanf("%f", &c);
  f = (9 * c + 160) / 5;
  printf("Temperatura em Fahrenheit: %0.1f", f);
  
  return 0;
}
``` 

## Questão 15:
Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo

- sabendo que se ele trabalhou ate 10 dias nao tem direito a gratificaçao, se ele trabalhou acima de 10 dias e ate 20 dias tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%.

- Sempre sao descontados 10% de imposto de renda em cima do valor bruto.
``` c
#include <stdio.h>

int main() {
  float dia = 50.25, bruto, desconto, grat;
  int dias;
  printf("Dias trabalhados: ");
  scanf("%d", &dias);
  
    if (dias <= 10){
      bruto = dias * dia;
      desconto = bruto - (0.1 * bruto);
      printf("Salario final: %0.2f", desconto);
    } 
    else if (dias > 10 && dias <= 20){
      bruto = dias * dia;
      grat = bruto + (0.2 * bruto);
      desconto = grat - (0.1 * bruto);
      printf("Salario final: %0.2f", desconto);
    } 
    else {
      bruto = dias * dia;
      grat = bruto + (0.3 * bruto);
      desconto = grat - (0.1 * bruto);
      printf("Salario final: %0.2f", desconto);
    }

  return 0;
}
``` 

## Questão 16:
Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  é necessario possuir alguns dados, tais como o 
- valor da hora aula n
- numero de horas trabalhadas no mes 
- percentual de desconto do INSS. 

Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer o desconto e ter o valor do salario liquido. 
Obs.: o programa deve informar o salario bruto e salarioliquido do professor.

``` c
#include <stdio.h>

int main() {
  float bruto, liquido, valorh, h, desc, INSS,x;
  printf("Salario bruto, Valor hora, Número de horas e %% de desconto do INSS:\n");
  scanf("%f %f %f %f",&bruto,&valorh, &h, &desc);

  INSS = (desc/100) * bruto;
  x = bruto - INSS;
  liquido = (h * valorh) + x;
  printf("Salario bruto: %0.2f || Salario liquido: %0.2f", bruto, liquido);
  
  return 0;
}
``` 

## Questão 17:
Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo). *Nao utilize estrutura de decisao if*
``` c
#include <stdio.h>
#include<stdlib.h>
int main(void) {
  int n, x;
  printf("Número: ");
  scanf("%d",&n);
  x = abs(n);
  printf("Valor absoluto: %d", x);
  
  return 0;
``` 

## Questão 18:
Escreva um programa que leia o raio de um cırculo e imprima seu diametro, o valor de sua circunferencia e sua  area. 
- Use o valor de 3,14159 para ”pi”. 
``` c
#include <stdio.h>

int main() {
  float raio, diametro, circ, area, pi=3.14159;
  printf("Raio: ");
  scanf("%f", &raio);
  printf("Diametro = %0.2f | Circunferencia = %0.2f | Area = %0.2f", 2*raio, 2*pi*raio, pi*(raio*raio));
  
  return 0;
}
``` 

## Questão 19:
Escreva um programa que imprima um retˆangulo, uma elipse, uma seta e um losango.
``` c
#include <stdio.h>

int main() {
  
  for (int i = 0; i<9; i++){
    printf("*");
    }
  for (int i = 0; i<8; i++){
      printf("\n*       *");
  }
  printf("\n");
  for (int i = 0; i<9; i++){
      printf("*");
      }
  printf("\n");

  printf("    ***    \t\t   *   \t         *          \n");
    printf("  *     *  \t\t  ***  \t       *   *        \n");
    printf("*         *\t\t ***** \t     *       *      \n");
    printf("*         *\t\t   *   \t   *           *    \n");
    printf("*         *\t\t   *   \t *               *  \n");
    printf("*         *\t\t   *   \t   *           *    \n");
    printf("*         *\t\t   *   \t     *       *      \n");
    printf("  *     *  \t\t   *   \t       *   *        \n");
    printf("    ***    \t\t   *   \t         *          \n");


  
  return 0;
}
``` 

## Questão 20:
Escreva um programa que receba um numero inteiro e entao determine e imprima se ele e par ou  ımpar. *Não utilizar estrutura de decisao if*
``` c
#include <stdio.h>

int main() {
  int n,x;
  printf("Número: ");
  scanf("%d",&n);

  x = (n%2)?printf("Impar"): printf("Par");
  
  return 0;
  }
``` 

## Questão 21:
Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro é múltiplo do segundo.  *Não utilizar estrutura de decisao if*
``` c
#include <stdio.h>

int main() {
  int a,b,x;
  printf("Números: ");
  scanf("%d %d",&a,&b);
  
  x = (a%b==0)?printf("%d é múltiplo de %d", a,b): printf("%d não é múltiplo de %d", a,b);
  
  return 0;
}
``` 

## Questão 22:
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiusculas, letras minusculas e sımbolos especiais. No minimo, determine os numeros inteiros equivalentes ao conjunto seguinte: A B C a b c 0 12 $ * + / e o caractere espaço em branco.
``` c
#include <stdio.h>

int main (){ 
  char a;
  printf("Digite uma caractere: ");
  scanf("%c",&a);
  printf("O número equivalente é: %d", a);
    return 0;
    }
``` 

## Questão 23:
Escreva um programa que receba a entrada de um numero de três digitos, separe o número em seus digitos componentes e reconstrua um numero com os componentes na ordem inversa. 
- Exemplo: para entrada de 123, a resposta do programa seria 321.
``` c
#include <stdio.h>

int main() {
int x,y;
  printf("Quantos números serão?\n");
  scanf("%d", &y);
  int vetor[y];
  
  for (int i=1; i<=y;i++){
    printf("Número:");
    scanf("%d", &vetor[i]);
 }

  for (int i=0; y; i++){
    printf("%d\n",vetor[y--]);
        }
  }
``` 

## Questão 24:
Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. *Utilize operadores biarios*
``` c
#include <stdio.h>
#include <math.h>

int main() {
  int x, n, r;
  printf("Número (x): ");
  scanf("%d",&x);
  
  printf("Expoente (n): ");
  scanf("%d",&n);
  r = x * pow(2,n);
  
  printf("r = %d * (2^%d) => %d\n", x, n, r);
  
  return 0;
  
}
``` 

## Questão 25:
Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.
``` c
#include <stdio.h>

int main() {
  int seg, h,m,s;
  printf("Tempo em segundos: ");
  scanf("%d",&seg);

  h = seg / 3600;
  m = (seg % 3600) / 60;
  s = (seg % 3600) % 60;
  printf("%dh %dm %ds", h,m,s);
  return 0;
}
``` 

## Questão 26:
Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os doispontos no plano.
``` c
#include <stdio.h>
#include <math.h>

int main() {
  int xa,xb, ya,yb, d;
  printf("Coord Xa e Xb:");
  scanf("%d %d",&xa, &xb);
  
  printf("Coord Ya e Yb:");
  scanf("%d %d",&ya,&yb);

  d = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
  printf("A distância entre os dois pontos é: %d", d);
  return 0;
}
``` 

## Questão 27:
Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a média aritmetica e geometrica. 
``` c
#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c, ma, mg;
  printf("Número 1, 2, 3: ");
  scanf("%f %f %f", &a,&b,&c);

  ma =  (a + b + c) / 3;
  mg = pow((a * b *c),1.0/3.0);
  printf("Média Ari: %0.2f || Média Geo: %0.2f", ma,mg);
  
  return 0;
}
``` 

