#include <iostream>
#include "employee.h"

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
    string getName();
    string getLocation();
    int getNumberEmployees();
    Employee getCEO();

    // Extra Methods
    void addEmployee();
    void isApplicantForPromotion(Employee employee);
};

string Company::getName() {
  return Name;
};

int Company::getNumberEmployees() {
  return NumberEmployees;
};

string Company::getLocation() {
  return Location;
};

Employee Company::getCEO() {
  return CEO;
};

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