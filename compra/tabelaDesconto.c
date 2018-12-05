double tabelaDesconto(int preco) {
  if (preco < 250) {
    return 0.95;
  } else if (preco < 500) {
    return 0.9;
  } else {
    return 0.85;
  }
}
