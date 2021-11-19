/*
* Rodrigo Terán Hernández
* A01704108
* Materia: Pensamiento computacional orientado a objetos
* Profesor: Benjamin Valdés Aguirre
*/

#include <iostream>
#include "project.h"
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee {
  protected:
    float Salary;
    string Name;
    int Age;
    int YearsExperience;
    string Position;
    int HoursWorked;
    Project CurrentProject;
    bool WantsPromotion;

  public:
    Employee(): Salary(0), Name(""), Age(0), YearsExperience(0), Position(""), HoursWorked(0), WantsPromotion(false) {};
    Employee(float salary, string name, int age, int experience, string position) {
      Salary = salary;
      Name = name;
      Age = age;
      YearsExperience = experience;
      Position = position;
      HoursWorked = 0;
      WantsPromotion = false;
      CurrentProject = Project();
    };

    // Getters
    float getSalary();
    string getName();
    int getAge();
    int getYearsExperience();
    string getPosition();
    int getWork();
    Project getCurrentProject();
    bool getWantsPromotion();

    // Setters
    void setSalary(float salary);
    void setName(string name);
    void setAge(int age);
    void setYearsExperience(int years);
    void setPosition(string position);
    void setWork(int work);
    void setCurrentProject(Project newProject);
    void setWantsPromotion(bool promotion);

    // Extra Methods
    void askPromotion();
    void addMoreSalary();
    virtual void presentYourself(string projectName);
};

// Getters
float Employee::getSalary() {
  return Salary;
};

string Employee::getName() {
  return Name;
};

int Employee::getAge() {
  return Age;
};

int Employee::getYearsExperience() {
  return YearsExperience;
};

string Employee::getPosition() {
  return Position;
};

int Employee::getWork() {
  return HoursWorked;
};

Project Employee::getCurrentProject() {
  return CurrentProject;
};

bool Employee::getWantsPromotion() {
  return WantsPromotion;
};

// Setters
void Employee::setSalary(float salary) {
  Salary = salary;
};

void Employee::setName(string name) {
  Name = name;
};

void Employee::setAge(int age) {
  Age = age;
};

void Employee::setYearsExperience(int years) {
  YearsExperience = years;
};

void Employee::setPosition(string position) {
  Position = position;
};

void Employee::setWork(int work) {
  HoursWorked = work;
};

void Employee::setCurrentProject(Project newProject) {
  CurrentProject = newProject;
};

void Employee::setWantsPromotion(bool promotion) {
  WantsPromotion = promotion;
};

// Extra Methods
void Employee::askPromotion() {
  WantsPromotion = true;
};

void Employee::addMoreSalary() {
  Salary += 10000.0;
};

void Employee::presentYourself(string projectName) {
  cout << "Hola!, mi nombre es " << Name << " y soy " << Position << endl;
  cout << "Y hoy voy a estar trabajando en el proyecto de " << projectName << endl << endl;
};

#endif