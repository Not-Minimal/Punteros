/*A pointer to a union points to the memory location allocated to the union.
A union pointer is declared by using the keyword union and the union tag
along with * and the pointer name.
For example, consider the following statements:
*/
#include <stdio.h>
#include <string.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};

int main() {
  union val info;
  union val *ptr = NULL;
  ptr = &info;
  ptr->int_num = 10;
  printf("info.int_num is %d", info.int_num);

  return 0;
}
