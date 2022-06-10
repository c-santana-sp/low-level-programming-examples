#include <stdio.h>

int main(void) {
  int i = 10;

  switch (i) {
    case 1:
      puts("It is done");
      break;

    case 2:
      puts("It is two");
      break;
  
    default:
      puts("It is not one nor two");
      break;
  }
 
  return 0;
}