#include <stdio.h>
#include "process.h"
#include "person.h"

int main(int argc, char **argv) {

  // for(int i = 0; i < 23; i++) {
  //   Process *p = new Process(i);
  //   p->dump();
  // }

  // Process::foo();

  Person *person = new Person((char*)"Matt", (char*)"Baron");
  person->Print();

  Employee *employee = new Employee((char*)"Maeve", (char*)"Baron", 1234);
  employee->Print();

  return(0);
}
