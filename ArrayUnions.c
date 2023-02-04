/*An array can store elements of any data type, including unions.
With unions, it is important to keep in mind that only one member
of the union can store data for each array element.
After declaring an array of unions, an element is accessible with
the index number. The dot operator is then used to access members of the union,
as in the program:
*/
#include <stdio.h>

union type {
  int i_val;
  float f_val;
  char ch_val;
};

int main() {
  union type arr[3];
  arr[0].i_val = 42;
  arr[1].f_val = 3.14;
  arr[2].ch_val = 'x';
  printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val,
         arr[1].f_val, arr[2].ch_val);

  return 0;
}
