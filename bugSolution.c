#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Properly initialize the pointer
  *ptr = 20; 
  printf("%d\n", x);
  return 0;
}
