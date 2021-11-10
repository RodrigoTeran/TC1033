#include <iostream>

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
    void setNecessaryHours(string position);
};

string Project::getName() {
  return Name;
};

int Project::getHours() {
  return NecessaryHours;
};

void Project::setNecessaryHours(string position) {
  if (position == "Product Manager") {
    NecessaryHours += 5;
  };
};