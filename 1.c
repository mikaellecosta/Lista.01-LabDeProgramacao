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
