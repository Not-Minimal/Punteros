/*You access the members of a union variable by using the . dot
 * operator between the variable name and the member name.
When assignment is performed, the union memory location will
be used for that member until another member assignment is performed.
Trying to access a member that isn't occupying the memory location gives
unexpected results.*/
#include <stdio.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};
int main() {
  union val test;

  test.int_num = 123;
  test.fl_num = 98.76;
  strcpy(test.str, "hello");

  printf("%d\n", test.int_num);
  printf("%f\n", test.fl_num);
  printf("%s\n", test.str);
  return 0;
}
