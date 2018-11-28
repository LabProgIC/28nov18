#include <stdio.h>
#include "tabelaPreco.c"

void main () {
	printf("para 5 temos %d\n", tabelaPreco(5));
	printf("para 15 temos %d\n", tabelaPreco(15));
	printf("para 400 temos %d\n", tabelaPreco(400));
	printf("para -100 temos %d\n", tabelaPreco(-100));
}
