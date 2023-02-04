/*
Unions are often used within structures because a structure
can have a member to keep track of which union member stores a value.
For example, in the following program, a vehicle struct uses either
a vehicle identification number (VIN) or an assigned id, but not both:*/
#include <stdio.h>
#include <string.h>

typedef struct {
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
    int id_num;
    char VIN[20];
  } id;
} vehicle;

int main() {
  vehicle car1;
  strcpy(car1.make, "Ford");
  car1.model_year = 2017;
  car1.id_type = 0;
  car1.id.id_num = 123098;

  printf("Make: %s\n", car1.make);
  printf("Model Year: %d\n", car1.model_year);
  if (car1.id_type == 0) {
    printf("ID: %d\n", car1.id.id_num);
  } else {
    printf("ID: %s\n", car1.id.VIN);
  }
  return 0;
}
