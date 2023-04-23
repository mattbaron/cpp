#include <stdio.h>
#include "process.h"

int Process::counter = 0;

Process::Process(int pid) {
  this->pid = pid;
  counter++;
}

void Process::dump() {
  printf("PID: %d\n", this->pid);
}

void Process::foo() {
  printf("Instances: %d\n", counter);
}
