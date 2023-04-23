#ifndef PERSON_H
#define PERSON_H

class Person {
  public:
    Person();
    Person(char *first_name, char *last_name);
    virtual void Print();

    char *first_name;
    char *last_name;
};

class Employee : public Person {
  private:
    int employee_id;

  public:
    Employee();
    Employee(char *first_name, char *last_name, int employee_id);
    void Print();
};

#endif
