/*A function can have union parameters that
accept arguments by value when a copy of the union variable is all that is
needed. For a function to change the actual value in a union memory location,
pointer parameters are required.*/
#include <stdio.h>
#include <string.h>

union id {
  int id_num;
  char name[20];
};

void set_id(union id *item);
void show_id(union id item);

int main() {
  union id item;

  set_id(&item);
  show_id(item);

  return 0;
}

void set_id(union id *item) { item->id_num = 42; }

void show_id(union id item) { printf("ID is %d", item.id_num); }
