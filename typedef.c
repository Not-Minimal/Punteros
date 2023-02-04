// Using typedef
// The typedef keyword creates a type definition that simplifies code and makes
// a program easier to read.
// typedef is commonly used with structures because
// it eliminates the need to use the keyword struct when declaring variables.
typedef struct {
  int id;
  char title[40];
  float hours;
} course;

course course1;
course course2;
// structures with structures
// The members of a structures may also be structures
typedef struct {
  int x;
  int y;
} point;

typedef struct {
  float radius;
  point center;
} circle;

circle c = {4.5, {1, 3}};
printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);
#include <stdio.h>
#include <string.h>

// Student Structure Definition
struct student {
  char name[50];
  int number;
  int age;
};

// Struct pointer as a function parameter
void showStudentData(struct student *st) {
  printf("\nStudent:\n");
  printf("Name: %s\n", st->name);
  printf("Number: %d\n", st->number);
  printf("Age: %d\n", st->age);
}

int main() {
  // New Student Record Creation
  struct student st1;
  struct student st2;

  // Filling Student 1 Details
  strcpy(st1.name, "Krishna");
  st1.number = 5;
  st1.age = 21;

  // Filling Student 2 Details
  strcpy(st2.name, "Max");
  st2.number = 9;
  st2.age = 15;

  // Displaying Student 1 Details
  showStudentData(&st1);

  // Displaying Student 2 Details
  showStudentData(&st2);

  return 0;
}
/*Pointers to Structures
Just like pointers to variables, pointers to structures can also be defined.
struct myStruct *struct_ptr;
defines a pointer to the myStruct structure.
struct_ptr = &struct_var;
stores the address of the structure variable struct_var in the pointer
struct_ptr. struct_ptr -> struct_mem; accesses the value of the structure member
struct_mem.*/
