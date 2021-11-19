/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#include "employee.h"
#ifndef COMPANY_H
#define COMPANY_H

using namespace std;

class Company {
  private:
    int NumberEmployees;
    string Name;
    string Location;
    Employee CEO;

  public:
    Company() : NumberEmployees(0), Name(""), Location("") {};
    Company(int nmbrEmployees, string name, string location, Employee founder) {
      NumberEmployees = nmbrEmployees;
      Name = name;
      Location = location;
      if (founder.getPosition() == "CEO") {
        CEO = founder;
      };
    };

    // Getters
    int getNumberEmployees();
    string getName();
    string getLocation();
    Employee getCEO();

    // Setters
    void setNumberEmployees(int number);
    void setName(string name);
    void setLocation(string location);
    void setCEO(Employee ceo);

    // Extra Methods
    void addEmployee();
    void isApplicantForPromotion(Employee employee);
};

// Getters
int Company::getNumberEmployees() {
  return NumberEmployees;
};

string Company::getName() {
  return Name;
};

string Company::getLocation() {
  return Location;
};

Employee Company::getCEO() {
  return CEO;
};

// Setters
void Company::setNumberEmployees(int number) {
  NumberEmployees = number;
};

void Company::setName(string name) {
  Name = name;
};

void Company::setLocation(string location) {
  Location = location;
};

void Company::setCEO(Employee ceo) {
  CEO = ceo;
};

// Extra Methods
void Company::addEmployee() {
  NumberEmployees++;
};

void Company::isApplicantForPromotion(Employee employee) {
  if (employee.getWork() >= 20) {
    cout << employee.getName() << " has sido promovido(a)!" << endl;
  } else {
    cout << employee.getName() << " no puedes ser promovido(a)" << endl;
  };
};

#endif