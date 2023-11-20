#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <iostream>

using namespace std;

class Usuario{
    public:

    Usuario(){
        tipo = "";
        id = 0;
        nombre = "";
    }

    Usuario(string tipo_, int id_, string nombre_){
        tipo = tipo_;
        id = id_;
        nombre = nombre_;
    }

    string obtenerInfoUsuario();

    private:
        string tipo;
        int id;
        string nombre;
};

string Usuario::obtenerInfoUsuario(){
    string infoUsuario = "Tipo de Usuario: " + tipo + "\nID: " + to_string(id) + "\nNombre: " + nombre;
    return infoUsuario;
}

#endif