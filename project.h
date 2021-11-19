/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#ifndef PROJECT_H
#define PROJECT_H

using namespace std;

class Project {
  private:
    string Name;
    int NecessaryHours;

  public:
    Project(): Name(""), NecessaryHours(0) {};
    Project(string name, int hours) {
      Name = name;
      NecessaryHours = hours;
    };

    // Getters
    string getName();
    int getHours();
    
    // Setters
    void setName(string name);
    void setNecessaryHours(int hours);
};

// Getters
string Project::getName() {
  return Name;
};

int Project::getHours() {
  return NecessaryHours;
};

// Setters
void Project::setName(string name) {
  Name = name;
};

void Project::setNecessaryHours(int hours) {
  NecessaryHours = hours;
};

#endif