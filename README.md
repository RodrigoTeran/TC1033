# Company Employee System (CES)

## ¿Qué es?
CES, es un sistema para el control de empleados y proyectos para las empresas.

Este sistema ayuda a:
* Llevar el control de la cantidad de empleados
* LLevar el control de qué proyectos están trabajando los empleados
* LLevar el control de las promociones
* Llevar el control de la cantidad de trabajo de cada empleado y su salario

## ¿Para qué no sirve?
Este proyecto no cuenta con interfaz gráfica... Por lo tanto, está
más pensado a qué otro programador lo **utilice.**

Consideraciones:
* No sirve para llevar un control automático *(tiene que implementarse)*
* No sirve para llevar un registro en una base de datos *(tiene que implementarse)*


## Ventajas de usar CES
Este software cuenta con objetos ya predefinidos que facilitan la creación
de sistemas de control de empleados.

Por lo tanto, es muy versátil. Puede usarse tanto en pequeños proyectos, como
en empresas internacionales.


## Creador

> Rodrigo Terán Hernández
>> A01704108

## Cómo usarlo
### Employee:
#### Propiedades:

| Propiedades             |  Definición                                  |
| ------------------------|----------------------------------------------|
| float Salary            | el salario que el empleado gana              |
| string Name             | el nombre del empleado                       |
| int Age                 | la edad del empleado                         |
| int YearsExperience     | los años de experiencia del empleado         |
| string Position         | posición dentro de la empresa del empleado   |
| int HoursWorked         | horas que ha trabajado el empleado           | 
| Project CurrentProject  | el proyecto en el cual el empleado trabaja   |
| bool WantsPromotion     | si el empleado quiere una promoción o no     |

#### Métodos:

| Métodos                                    |  Definición                                                    |
| -------------------------------------------|----------------------------------------------------------------|
| string getPosition()                       | se obtiene la posición del empleado                            |
| string getName()                           | se obtiene el nombre del empleado                              |
| int getAge()                               | se obtiene la edad del empleado                                |
| int getYearsExperience()                   | se obtiene los años de experiencia del empleado                |
| int getWork()                              | se obtiene la cantidad de horas que ha trabajado el empleado   |
| bool getWantsPromotion()                   | se obtiene la decisión del empleado si quiere un ascenso o no  | 
| Project getCurrentProject()                | se obtiene el proyecto en el cual el empleado trabaja          |
| void setPosition(string position)          | se cambia la posición del empleado a dicho parámetro           |
| void setCurrentProject(Project newProject) | se cambia el proyecto del empleado a dicho parámetro           |
| void setMoreSalary()                       | se aumenta el salario del empleado                             |
| void Work()                                | se registran horas de trabajo del empleado                     |
| void AskPromotion()                        | se cambia la decisión del empleado para el ascenso             |
| void PresentYourself(string projectName)   | se presenta el usuario con dicho proyecto actual *(parámetro)* |

### Company:
#### Propiedades:

| Propiedades             |  Definición                                  |
| ------------------------|----------------------------------------------|
| int NumberEmployees     | el número de empleados de la compañía        |
| string Name             | el nombre de la compañía                     |
| string Location         | la localización de la compañía               |
| Employee CEO            | el dueño de la compañía                      |

#### Métodos:

| Métodos                                          |  Definición                                                  |
| -------------------------------------------------|--------------------------------------------------------------|
| string getName()                                 | se obtiene el nombre de la compañía                          |
| string getLocation()                             | se obtiene la localización de la compañía                    |
| int getNumberEmployees()                         | se obtiene el número de empleados de la compañía             |
| Employee getCEO()                                | se obtiene el dueño de la compañía                           |
| void addEmployee()                               | se añade un empleado                                         |
| void isApplicantForPromotion(Employee employee)  | se checa si dicho empleado *(parámetro)* merece el ascenso   |

### Project:
#### Propiedades:

| Propiedades             |  Definición                                      |
| ------------------------|--------------------------------------------------|
| string Name             | el nombre del proyecto                           |
| int NecessaryHours      | las horas necesarias para terminar el proyecto   |

#### Métodos:

| Métodos                              |  Definición                                                                                  |
| -----------------------------------------|----------------------------------------------------------------------------------------------|
| string getName()                         | se obtiene el nombre del proyecto                                                            |
| int getHours()                           | se obtiene el número de horas necesarias para el proyecto                                    |
| void setNecessaryHours(string position)  | se cambian el número de horas necesarias para el proyecto por dicha posición *(parámetro)*   |

### Uso:

Este sistema se divide en 3 tiempos:
* al inicio del día *(check diario)*
* durante el día *(trabajo)*
* final del día *(cierre)*

Cuando se hace el check, los empleados se presentan y dicen en qué
están trabajando.

Durante el trabajo, pueden pedir una promoción y/o pueden trabajar
para ganarse esa promoción.

Y al final del día, se hace un cierre para checar qué proyectos
ya se han finalizado.

## Correr programa

```
$ g++ main.cpp -o main
$ main
```

## Tecnología

El programa está hecho con `C++`.