#include <stdio.h>

int main(void) {

  int x = 10;
  switch (x) {
    case 0:
    case 1:
    case 10:
      puts("First case: x = 0, 1 or 10");
    case 15:
      puts("Second case: x = 0, 1, 10, or 15");
  }

  return 0;
}
