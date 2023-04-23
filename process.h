#ifndef PROCESS_H
#define PROCESS_H

#include <stdio.h>

using namespace std;

class Process {
  private:
    static int counter;

  public:
    int pid;

    Process(int);
    void dump();
    static void foo();
};

#endif