#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

using namespace std;

class Usuario{
    //Atributos
    protected:
        string tipoDeUsuario;
        int id;
        string nombre;
    
    public:
        //Constructores
        Usuario();
            Usuario(string tipoDeUsuario_, int id_, string nombre_);

        //Getters
        string getInfoUsuario();

        //Setters
        void setTipoDeUsuario(string tipoDeUsario_);
        void setID(int id_);
        void setNombre(string nombre_);

        //Métodos para el sistema de inicio de sesión
        void registrar(string tipoDeUsuario_, string nombre_, int id_);
        void iniciarSesion(string nombre_, int id_);
};

#endif