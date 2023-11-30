#include <iostream>
#include <string>
#include "PlanDeEvaluacion.h"

using namespace std;

//Implementación del contructor sin parámetros
PlanDeEvaluacion::PlanDeEvaluacion(){
    porcentajeExamenes = 30;
    porcentajeTareas = 30;
    porcentajeProyecto = 40;
}

//Implementación del contructor sin parámetros
PlanDeEvaluacion::PlanDeEvaluacion(int porcentajeExamenes_, int porcentajeTareas_, int porcentajeProyecto_){
    porcentajeExamenes = porcentajeExamenes_;
    porcentajeTareas = porcentajeTareas_;
    porcentajeProyecto = porcentajeProyecto_;
}

//Implementación del método getInfoPlanDeEvaluacion
string PlanDeEvaluacion::getInfoPlanDeEvaluacion(){
    string mensaje_final = "\nPLAN DE EVALUACION \nExámenes: " + to_string(porcentajeExamenes) + "%"
    + "\nTareas: " + to_string(porcentajeTareas) + "%" + "\nProyecto: " + to_string(porcentajeProyecto) + "%";
    return mensaje_final;
}

//Implementación del método setPorcentajeExamenes
void PlanDeEvaluacion::setPocentajeExamenes(int porcentajeExamenes_){
    porcentajeExamenes = porcentajeExamenes_;
}

//Implementación del método setPorcentajeTareas
void PlanDeEvaluacion::setPorcentajeTareas(int porcentajeTareas_){
    porcentajeTareas = porcentajeTareas_;
}

//Implementación del método setPorcentajeProyecto
void PlanDeEvaluacion::setPorcentajeProyecto(int porcentajeProyecto_){
    porcentajeProyecto = porcentajeProyecto_;
}