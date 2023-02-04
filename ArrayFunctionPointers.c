// An array of function pointers
// can replace a switch or an if
// statement for choosing an action, as in the following program:
#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int main(int argc, char *argv[]) {
  int num1, num2, choice, result;
  int(*operacion[3](int, int));
  operacion[0] = add;
  operacion[1] = subtract;
  operacion[2] = multiply;
  operacion[3] = divide;

  printf("Ingrese dos valores: \n");
  scanf("%d%d", &num1, &num2);
  printf("0. Add\n");
  printf("1. Subtract\n");
  printf("2. Multiply\n");
  printf("3. Divide\n");
  scanf("%d", &choice);
  result = operacion[choice](num1, num2);
  printf("%d\n", result);
  return 0;
}
int add(int num1, int num2) { return (num1 + num2); }
int subtract(int num1, int num2) { return (num1 - num2); }
int multiply(int num1, int num2) { return (num1 * num2); }
int divide(int num1, int num2) {
  if (num2 != 0) {
    return (num1 / num2);
  } else {
    return 0;
  }
}
