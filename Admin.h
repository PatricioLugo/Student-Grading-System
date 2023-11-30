#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Admin: public Usuario{
    //Atributos
    private:
        int password;
    
    public:
        //Constructores
        Admin();
            Admin(string tipoDeUsuario_, int id_, string nombre_, int password_);

        //Getters
        int getPassword();

        //Setters
        void setPassword(int password_);
};

#endif