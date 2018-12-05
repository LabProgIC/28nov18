#include <stdio.h>
#include "gui.c"

void main () {
  int menuItem = 1;
  char _c;

  while (menuItem > -1) {
    printf("menuItem:\n");
    scanf(" %d", &menuItem);
    while ( (_c = getchar()) != '\n' && _c != EOF ) {}
    
    (*gui[0])();
  }
}
