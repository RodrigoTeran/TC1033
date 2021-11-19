/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#include "employee.h"
#ifndef PROGRAMMER_H
#define PROGRAMMER_H

using namespace std;

class Programmer: public Employee {
  private:
    string Languages[3];
    string IDE;

  public:
    Programmer(): Employee() {};
    Programmer(float salary, string name, int age, int experience, string position, string languages[3], string ide):
      Employee(salary, name, age, experience, position) {
      for (int i = 0; i < 3; i++) {
        Languages[i] = languages[i];
      };
      IDE = ide;
    };

    // Getters
    string* getLanguages();
    string getIDE();

    // Setters
    void setLanguages(string languages[]);
    void setIDE(string ide);

    // Extra Methods
    void readDocumentation();
    void code();
    void presentYourself(string projectName);
};

// Getters
string* Programmer::getLanguages() {
  return Languages;
};

string Programmer::getIDE() {
  return IDE;
};

// Setters
void Programmer::setLanguages(string languages[]) {
  for (int i = 0; i < 3; i++) {
    Languages[i] = languages[i];
  };
};

void Programmer::setIDE(string ide) {
  IDE = ide;
};

// Extra Methods
void Programmer::readDocumentation() {
  HoursWorked += 5;
  cout << Name << " esta leyendo documentacion..." << endl;
};

void Programmer::code() {
  HoursWorked += 10;
  cout << Name << " esta programando en " << IDE << " usando " << Languages[0] << endl;
};

void Programmer::presentYourself(string projectName) {
  cout << "Hola!, mi nombre es " << Name << " y soy programador, con el puesto de " << Position << endl;
  cout << "Y hoy voy a estar en el proyecto de " << projectName << endl << endl;
};

#endif