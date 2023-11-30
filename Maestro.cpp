#include <iostream>
#include <string>
#include "Maestro.h"

using namespace std;

Maestro::Maestro(){
    curso = Curso();
}

Maestro::Maestro(string tipoDeUsuario_, int id_, string nombre_, Curso curso_){
    tipoDeUsuario = tipoDeUsuario_;
    id = id_;
    nombre = nombre_;
    curso = curso_;
}

string Maestro::getCurso(){
    string mensaje_final = curso.getInfoCurso();                                                                             
}

string Maestro::getInfoMaestro(){
    string mensaje_final = getInfoUsuario() + getCurso();
    return mensaje_final;
}

void Maestro::desginarCurso(Curso curso_){
    curso = curso_;
}