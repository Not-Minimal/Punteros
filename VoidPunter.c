// The void Pointer
// A void pointeer is used to refer to any addres type in memory and
// has a declaration that looks like void *ptr;
//
#include <stdio.h>

int main() {
  int x = 33;
  float y = 12.4;
  char c = 'a';
  void *ptr;

  ptr = &x;
  printf("void ptr points to %d\n", *((int *)ptr));
  ptr = &y;
  printf("void ptr points to %f\n", *((float *)ptr));
  ptr = &c;
  printf("void ptr points to %c", *((char *)ptr));

  return 0;
}
