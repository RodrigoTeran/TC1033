# Company Employee System (CES)

<img src="logo.png" alt="Company Employee System" width="200"/>

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

### Clases de empleados:
* CEO
* Programmer
* Designer

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