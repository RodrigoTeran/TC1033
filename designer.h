/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#include "employee.h"
#ifndef DESIGNER_H
#define DESIGNER_H

using namespace std;

class Designer: public Employee {
  private:
    string Softwares[3];

  public:
    Designer(): Employee() {};
    Designer(float salary, string name, int age, int experience, string position, string softwares[]):
      Employee(salary, name, age, experience, position) {
      for (int i = 0; i < 3; i++) {
        Softwares[i] = softwares[i];
      };
    };

    // Getters
    string* getSoftwares();

    // Setters
    void setSoftwares(string softwares[]);

    // Extra Methods
    void design();
    void documentDesign();
    void presentYourself(string projectName);
};

// Getters
string* Designer::getSoftwares() {
  return Softwares;
};

// Setters
void Designer::setSoftwares(string softwares[]) {
  for (int i = 0; i < 3; i++) {
    Softwares[i] = softwares[i];
  };
};

// Extra Methods
void Designer::design() {
  HoursWorked += 10;
  cout << Name << " esta disenando en " << Softwares[0] << endl;
};

void Designer::documentDesign() {
  HoursWorked += 5;
  cout << Name << " esta documentando su diseno" << endl;
};

void Designer::presentYourself(string projectName) {
  cout << "Hola!, mi nombre es " << Name << " y soy disenador, con el puesto de " << Position << endl;
  cout << "Y hoy voy a estar en el proyecto de " << projectName << endl << endl;
};

#endif