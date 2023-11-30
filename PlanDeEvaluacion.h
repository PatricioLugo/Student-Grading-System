#ifndef PLANDEEVALUACION_H
#define PLANDEEVALUACION_H
#include <iostream>
#include <string>

using namespace std;

class PlanDeEvaluacion{

    //Atributos
    private:
       int porcentajeExamenes;
       int porcentajeTareas;
       int porcentajeProyecto;

    public:
       //Constructores 
       PlanDeEvaluacion();
           PlanDeEvaluacion(int porcentajeExamenes_, int porcentajeTareas_, int porcentajeProyecto);

       //Getters
       string getInfoPlanDeEvaluacion();

       //Setters
       void setPocentajeExamenes(int porcentajeExamenes_);
       void setPorcentajeTareas(int porcentajeTareas_);
       void setPorcentajeProyecto(int porcentajeProyecto_);     
};

#endif