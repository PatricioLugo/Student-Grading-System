#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <vector>
#include <iostream>
#include "Usuario.h"
#include "Curso.h"

using namespace std;

class Estudiante: public Usuario{
    private:
        int edad;
        vector<Curso> cursosInscritos;
    
    public:
        Estudiante(int edad_, string tipo_, int id_, string nombre_):
        Usuario(tipo_,id_,nombre_){
            edad = edad_;
        }

        void imprimirReporte();

        void inscribirCurso(Curso curso);
};

void Estudiante::imprimirReporte(){
    string infoUsuario = obtenerInfoUsuario(); 
    string infoEstudiante = infoUsuario + "\nEdad del Estudiante: " + to_string(edad) + "\n";
    cout << infoEstudiante;
    for (const Curso curso : cursosInscritos) {
        cout << curso.obtenerInfoCurso();
    } 
}

void Estudiante::inscribirCurso(Curso curso){
    cursosInscritos.push_back(curso);
}     

#endif