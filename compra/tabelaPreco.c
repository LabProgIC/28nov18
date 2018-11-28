
/*
Código	Preço
1 a 10	10
11 a 20	15
21 a 30	20
31 a 40	30
*/

int tabelaPreco(int codigo) {
	if ( codigo > 0 && codigo < 11) {
		return 10;
	} else if (codigo > 10 && codigo < 21) {
		return 15;
	} else if (codigo > 20 && codigo < 31) {
		return 20;
	} else if (codigo > 30 && codigo < 41) {
		return 30;
	} else {
		return -1;
	}
}
