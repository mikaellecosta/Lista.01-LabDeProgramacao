//Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta, sexta, sabado). Se o numero lido nao estiver no intervalo 1-7, imprima: “Numero de dia nao valido”. O programa deve permanecer executando ate que o usuario tecle o numero 0. (Utilize obrigatoriamente teste no inıcio).

#include <stdio.h>

int main() {
  int n;
  printf("Digite um número de 1-7: ");
  scanf("%d",&n);
  
  while (n < 1 && n > 7) {
    if (n == 0){
      break;
    }
    printf("Número de dia não válido.");
    return main();
  }

  switch(n){
    case 1:
    printf("Segunda");
    return main();

    case 2:
    printf("Terça");
    return main();

    case 3:
    printf("Quarta");
    return main();

    case 4:
    printf("Quinta");
    return main();

    case 5:
    printf("Sexta");
    return main();

    case 6:
    printf("Sábado");
    return main();

    case 7:
    printf("Domingo");
    return main();
  }
  
  
  return 0;
}