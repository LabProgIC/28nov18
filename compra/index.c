#include <stdio.h>
#include "compraComDesconto.h"
//#include "consultaCodigo.h"
//#include "consultaDesconto.h"

int main () {
  int preco = 20;
  int quantidade = 3000;
  double desconto = 0.1;

  double valorFinal = compraComDesconto(preco, quantidade, desconto); 

  printf("O valor final é %f\n", valorFinal);

  return 0;
}
