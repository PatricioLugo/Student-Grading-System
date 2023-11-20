#ifndef CURSO_H
#define CURSO_H
#include <string>
#include <iostream>
#include "Maestro.h"
#include "Calificacion.h"

using namespace std;

class Curso{
    private:
        string nombre;
        int id;
        Maestro maestro;
        Calificacion* calificacion;
        
    public:
        Curso(){}
        Curso(string nombre_, int id_, const Maestro& maestro_, const Calificacion& calificacion){
            nombre = nombre_;
            id = id_;
            maestro = maestro_;
        }
        string obtenerInfoCurso() const;

};

string Curso::obtenerInfoCurso(){
    float CalifCurso = calificacion.obtenerValorFinal();
    string mensajeFinal = "\nNombre del Curso: " + nombre + "\nID del Curso: " + to_string(id) + "\nCalificación del Curso: " + to_string(CalifCurso);
    return mensajeFinal;
}

#endif