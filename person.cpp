#include <stdio.h>
#include "person.h"

Person::Person() {

}

Person::Person(char *first_name, char *last_name) {
  this->first_name = first_name;
  this->last_name = last_name;
}

void Person::Print() {
  printf("Person: %s %s\n", this->first_name, this->last_name);
}

Employee::Employee(char *first_name, char *last_name, int employee_id) : Person(first_name, last_name) {
  this->employee_id = employee_id;
}

Employee::Employee() {}

void Employee::Print() {
  printf("Employee: %s %s (%d)\n", this->first_name, this->last_name, this->employee_id);
}
