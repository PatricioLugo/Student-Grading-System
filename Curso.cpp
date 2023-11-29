#include <iostream>
#include <string>
#include "Curso.h"

using namespace std;

//Implementación del contructor sin parámetros
Curso::Curso(){
    nombreCurso = "";
    idCurso = 0;
    planDeEvaluacion = PlanDeEvaluacion();
}

//Implementación del contructor con parámetros
Curso::Curso(string nombreCurso_, int idCurso_, PlanDeEvaluacion planDeEvaluacion_){
    nombreCurso = nombreCurso_;
    idCurso = idCurso_;
    planDeEvaluacion = PlanDeEvaluacion();
}

//Implementación del método getInfoCurso
string Curso::getInfoCurso(){
    string mensaje_final = "INFORMACIÓN DEL CURSO DE " + nombreCurso + "\nID: " + to_string(idCurso)
    + planDeEvaluacion.getInfoPlanDeEvaluacion();
}

//Implementación del método setNombreCurso
void Curso::setNombreCurso(string nombreCurso_){
    nombreCurso = nombreCurso_;
}

//Implementación del método setIDCurso
void Curso::setIDCurso(int idCurso_){
    idCurso = idCurso_;
}

//Implementación del método cambiarPlanDeEvaluacion
void Curso::cambiarPlanDeEvaluacion(int porcentajeExamenes_, int porcentajeTareas_, int porcentajeProyecto_){
    planDeEvaluacion.setPocentajeExamenes(porcentajeExamenes_);
    planDeEvaluacion.setPorcentajeTareas(porcentajeTareas_);
    planDeEvaluacion.setPorcentajeProyecto(porcentajeProyecto_);
}