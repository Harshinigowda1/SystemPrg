#pragma once
#include<iostream>

class Employee {
  int ID;
  string name;
  string role;
  long int salary;

public:
    Employee() {}
    void initEmployee(int id, string varName, string varRole, long sal) {
        ID = id,
        name = varName,
        role = varRole,
        salary = sal;
    }
};