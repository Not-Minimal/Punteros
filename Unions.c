/*A union allows to store different data types in the same memory location.
It is like a structure because it has members. However, a union variable
uses the same memory location for all its member's and only one member at
a time can occupy the memory location.
A union declaration uses the keyword union, a union tag, and curly braces { }
with a list of members.
Union members can be of any data type, including basic types,
strings, arrays, pointers, and structures.*/
union val {
  int int_num;
  float fl_num;
  char str[20];
};
int main(int argc, char *argv[]) {
  union val u1;
  union val u2;
  u1.int_num = 42;
  u2 = u1;
  printf("%d\n", u2.int_num);
  return 0;
}
