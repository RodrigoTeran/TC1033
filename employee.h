#include <iostream>
#include "project.h"

using namespace std;

class Employee {
  private:
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
    };

    // Getters
    string getPosition();
    string getName();
    int getAge();
    int getYearsExperience();
    int getWork();
    bool getWantsPromotion();
    Project getCurrentProject();

    // Setters
    void setPosition(string position);
    void setCurrentProject(Project newProject);
    void setMoreSalary();

    // Extra Methods
    void Work();
    void AskPromotion();
    void PresentYourself(string projectName);
};

string Employee::getPosition() {
  return Position;
};

string Employee::getName() {
  return Name;
};

void Employee::setCurrentProject(Project newProject) {
  CurrentProject = newProject;
};

Project Employee::getCurrentProject() {
  return CurrentProject;
};

void Employee::setMoreSalary() {
  Salary += 10000.0;
};

int Employee::getAge() {
  return Age;
};

int Employee::getYearsExperience() {
  return YearsExperience;
};

bool Employee::getWantsPromotion() {
  return WantsPromotion;
};

int Employee::getWork() {
  return HoursWorked;
};

void Employee::setPosition(string position) {
  Position = position;
};

void Employee::Work() {
  if (CurrentProject.getName() != "") {
    HoursWorked += 10;
    cout << Name << " esta trabajando..." << endl;
  };
};

void Employee::AskPromotion() {
  WantsPromotion = true;
};

void Employee::PresentYourself(string projectName) {
  cout << "Hola!, mi nombre es " << Name << " y soy " << Position << " en Meta!" << endl;
  cout << "Y hoy voy a estar trabajando en el proyecto de " << projectName << endl << endl;
};