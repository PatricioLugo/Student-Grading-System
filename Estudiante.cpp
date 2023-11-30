#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

//Implementación del contructor sin parámetros
Estudiante::Estudiante(){
    vector<Curso> cursosIncritos;
}

//Implementación del contructor con parámetros
Estudiante::Estudiante(string tipoDeUsuario_, int id_, string nombre_, vector<Curso> cursosInscritos_){
    tipoDeUsuario = tipoDeUsuario_;
    id = id_;
    nombre = nombre_;
    cursosInscritos = cursosInscritos_;
}

//Implementación del método getCursos
string Estudiante::getCursos(){
    string mensaje_final;
    for (Curso i:cursosInscritos){
        mensaje_final = mensaje_final + "\n" + i.getInfoCurso();
    }
    return mensaje_final;
}

//Implementación del método getInfoEstudiante
string Estudiante::getInfoEstudiante(){
    string mensaje_final = getInfoUsuario() + getCursos();
    return mensaje_final;
}

//Implementación del método agregarCurso
void Estudiante::agregarCurso(Curso cursoNuevo){
    cursosInscritos.push_back(cursoNuevo);
}