/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#include "employee.h"
#ifndef CEO_H
#define CEO_H

using namespace std;

class CEO: public Employee {
  private:
    string Company;

  public:
    CEO(): Employee() {};
    CEO(float salary, string name, int age, int experience, string position, string company):
      Employee(salary, name, age, experience, position) {
      Company = company;
    };

    // Getters
    string getCompany();

    // Setters
    void setCompany(string company);

    // Extra Methods
    void innovate();
    void attendMeeting();
    void presentYourself(string projectName);
};

// Getters
string CEO::getCompany() {
  return Company;
};

// Setters
void CEO::setCompany(string company) {
  Company = company;
};

// Extra Methods
void CEO::innovate() {
  HoursWorked += 30;
  cout << Name << " esta innovando en " << Company << endl;
};

void CEO::attendMeeting() {
  HoursWorked += 10;
  cout << Name << " esta en una junta en " << Company << endl;
};

void CEO::presentYourself(string projectName) {
  cout << "Hola!, mi nombre es " << Name << " y soy el dueno de " << Company << endl;
  cout << "Y hoy voy a estar en el proyecto de " << projectName << endl << endl;
};

#endif