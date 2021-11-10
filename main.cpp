#include <iostream>
#include "company.h"

using namespace std;

void checkIfPromotion(Employee employee, Company company, Project project) {
  /*
    Checa si puedes ser promovido, y si sí...
    te cambia tu posición, te añade más carga,
    y te añade el salario...
  */
  if (employee.getWantsPromotion()) {
    company.isApplicantForPromotion(employee);
    
    employee.setPosition("Product Manager");
    employee.setMoreSalary();
    
    project.setNecessaryHours(employee.getPosition());
  };
};

void checkIfEndProject(Employee employee, Project project) {
  /*
    Checa si ya terminaste tu proyecto
  */
  if (project.getHours() <= employee.getWork()) {
    cout << employee.getName() << " ha terminado su proyecto!" << endl;
  } else {
    cout << employee.getName() << ", aun te falta trabajar mas para terminar tu proyecto..." << endl;
  }
};

int main() {
  // Sistema de empleados de la compañía META (Facebook)

  // Crear Compañía
  Employee MarkZuckerberg(1000000.0, "Mark Zuckerberg", 37, 17, "CEO");
  Company Meta(1200, "Meta", "Silicon Valley", MarkZuckerberg);

  /*
    A partir de aquí todo el programa podría correr en un bucle cada día en un uso real
  */

  /*
    Se inicializan los proyectos
  */
  Project FrontendButton("Arreglar boton de pagina de Instagram", 14);
  Project Analyst("Analisis de datos de WhatsApp", 20);

  /*
    Crear Empleados
    Esto se puede llamar cada que alguien entra a la compañía
  */
  Employee RodrigoTeran(6000.0, "Rodrigo Teran", 19, 3, "Programmer");
  RodrigoTeran.setCurrentProject(FrontendButton);
  Meta.addEmployee();
  
  Employee PauCardoso(10000.0, "Paulina Cardoso", 20, 4, "Programmer");
  PauCardoso.setCurrentProject(Analyst);
  Meta.addEmployee();

  /*
    Trabajo
    Esto pasa todos los días, los empleados se presentan al trabajo,
    preguntan para ser promovido(a),
    y trabajan...
  */

  /*
    En un uso real, esto podría ser un bucle que recorra todos los empleados...
  */
  cout << "----------- Check diario de empleados -----------" << endl;
  RodrigoTeran.PresentYourself(FrontendButton.getName());
  PauCardoso.PresentYourself(Analyst.getName());

  /*
    Pedir promociones
  */
  cout << endl << "----------- Trabajo -----------" << endl;
  PauCardoso.AskPromotion();
  checkIfPromotion(RodrigoTeran, Meta, FrontendButton);
  checkIfPromotion(PauCardoso, Meta, Analyst);
  
  /*
    No todos trabajan tan duro... pero solo los que lo hacen,
    tendrán el ascenso
  */

  /*
    En un uso real, cada vez que alguien trabaje se manda a llamar
    estos métodos
  */
  PauCardoso.Work();
  PauCardoso.Work();
  PauCardoso.Work();

  RodrigoTeran.Work();
  RodrigoTeran.AskPromotion();

  checkIfPromotion(RodrigoTeran, Meta, FrontendButton);
  checkIfPromotion(PauCardoso, Meta, Analyst);

  /*
    Cuando se terminan el día, se checa como van los empleados...
    y quienes ya terminaron sus proyectos...
    
    para que al siguiente día se inicialicen nuevos proyectos, etc...
  */
  cout << endl << "----------- Al final del dia -----------" << endl;
  checkIfEndProject(PauCardoso, Analyst);
  checkIfEndProject(RodrigoTeran, FrontendButton);
  

  return 0;
};