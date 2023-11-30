#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

//Implementación del contructor sin parámetros
Usuario::Usuario(){
    tipoDeUsuario = "";
    id = 0;
    nombre = "";
}

//Implementación del contructor con parámetros
Usuario::Usuario(string tipoDeUsuario_, int id_, string nombre_){
    tipoDeUsuario = tipoDeUsuario_;
    id = id_;
    nombre = nombre_;
}

//Implementación del método getInfoUsuario
string Usuario::getInfoUsuario(){
    string mensaje_final = "INFORMACIÓN DEL " + tipoDeUsuario + "\nNombre: " + nombre + "\nID: " + to_string(id);
    return mensaje_final;
}
//Implementación del método setTipoDeUsuario
void Usuario::setTipoDeUsuario(string tipoDeUsuario_){
    tipoDeUsuario = tipoDeUsuario_;
}

//Implementación del método setID
void Usuario::setID(int id_){
    id = id_;
}

//Implementación del método setNombre
void Usuario::setNombre(string nombre_){
    nombre = nombre_;
}