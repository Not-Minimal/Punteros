// Structures in c is a user-defined data type that groups related variables of
// different data types. A Structure declaration includes the keyword struct, a
// structure tag for referencing the structure, and curly braces {} with a list
// declaration called members.
struct course {
  int id;
  char title[40];
  float hours;
};
// declaration Using Structures
/*To declare variables of a structure data type, you use the keywor
struct followed by the struct tag, and then the variable name.
For example, the statidements tibelow declares a structure data type
and then uses the student struct to declare variables s1 and s2 */
// Declare two variables.
struct course n1;
struct course n2;

struct course n3 = {1, "Java", 2.0};
struct course n4;
n4 = (struct course){2, "C", 3.0};
struct course n5 = {.id = 3, .title = "JavaScript", .hours = 4.0};
