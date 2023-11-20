#include <iostream>
#include <string>
#include "Calificacion.h"
#include "Curso.h"
#include "Estudiante.h"
#include "Maestro.h"
#include "Usuario.h"

using namespace std;

int main(){

    Maestro maestro1("Maestro",101,"Juan",85.5);    
    Maestro maestro2("Maestro",102,"Roberta",90.0);
    Maestro maestro3("Maestro",103,"Agustin",68.5);
    Maestro maestro4("Maestro",104,"Juliana",95.5);

    Curso("Historia",1001,maestro1);

    cout << "Bienvenido al Generador de Reportes Académicos" << endl;
    cout << "Para comenzar se requieren los siguientes datos del estudiante" << endl;

    int edad;
    string tipo = "Estudiante";
    int id;
    string nombre;
    cout << "Edad: ";
    cin >> edad;
    cout << "ID: ";
    cin >> id;
    cout << "Nombre: ";
    cin >> nombre;

    Estudiante estudiante(edad, tipo, id, nombre);


}