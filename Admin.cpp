#include <iostream>
#include <string>
#include "Admin.h"

using namespace std;

//Implementación del contructor sin parámetros
Admin::Admin(){
    password = 1234;
}

//Implementación del contructor con parámetros
Admin::Admin(string tipoDeUsuario_, int id_, string nombre_, int password_){
    tipoDeUsuario = tipoDeUsuario_;
    id = id_;
    nombre = nombre_;
    password = password_;
}

//Implementación del método getPassword
int Admin::getPassword(){
    return password;
}

//Implementación del método setPassword
void Admin::setPassword(int password_){
    password = password_;
}