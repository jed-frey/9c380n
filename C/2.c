#include <stdio.h>
int main() {
  unsigned int idx = 0;
  for (idx = 1; idx <= 10; idx += 1) {
    printf("I'm on loop %d\n", idx);
  }
  return 0;
}
