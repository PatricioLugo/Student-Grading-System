#ifndef MAESTRO_H
#define MAESTRO_H
#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Curso.h"

using namespace std;

class Maestro: public Usuario{
    //Atributos
    private:
        Curso curso;
        
    
    public:
        //Constructores
        Maestro();
            Maestro(string tipoDeUsuario_, int id_, string nombre_, Curso curso);

        //Getters
        string getCurso();
        string getInfoMaestro();

        //Setters
        void designarCurso(Curso curso_);
};

#endif