#include <stdio.h>
// array de ponteiros para funções
void (*gui[1]) (void);

void g0(void) {
  printf("gui 0\n");
}

gui[0] = &g0;
