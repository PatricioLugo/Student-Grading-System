#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Curso.h"

using namespace std;

class Estudiante: public Usuario{
    //Atributos
    private:
        vector<Curso> cursosInscritos;
    
    public:
        //Constructores
        Estudiante();
            Estudiante(string tipoDeUsuario_, int id_, string nombre_, vector<Curso> cursosInscritos_);

        //Getters
        string getCursos();
        string getInfoEstudiante();

        //Setters
        void agregarCurso(Curso cursoNuevo);
};

#endif