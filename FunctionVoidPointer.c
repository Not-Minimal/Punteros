// Function using void pointers
// void * square (cons void *);
//
// Using a void * return type allows for any return type.
// Similarly, parameters that are void * accept any argument type.
// If you want to use the data passed in by the parameter without changing it,
// you declare it const.
// You can leave out the parameter name to further insulate the declaration
// from its implementation. Declaring a function this way allows the definition
// to be customized as needed without having to change the declaration.
#include <stdio.h>

void *square(const void *num);

int main() {
  int x, sq_int;
  x = 6;
  sq_int = square(&x);
  printf("%d squared is %d\n", x, sq_int);
  return 0;
}

void *square(const void *num) {
  static int result;
  result = (*(int *)num) * (*(int *)num);
  return (result);
}
