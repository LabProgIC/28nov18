#include <stdio.h>
#include "tabelaPreco.h"
#include "tabelaDesconto.h"

int main () {
  // ler estes valores da entrada padrão
  int codigo = 15;
  int quantidade = 20;
  
  int preco = quantidade * tabelaPreco(codigo);
  double desconto = tabelaDesconto(preco);
  double valor = (double)preco * desconto;

  //printe na tela o valor

  return 0;
}
