#ifndef CALIFICACION_H
#define CALIFICACION_H
#include <string>
#include <iostream>

using namespace std;

class Calificacion{
    private:
        float valorFinal;
        float promedioExamenes;
        float promedioTareas;
        float proyecto;

    public:
        Calificacion(){}
        Calificacion(float promedioExamenes_, float promedioTareas_, float proyecto_){
            valorFinal = promedioExamenes * .3 + promedioTareas * .3 + proyecto * .4;;
            promedioExamenes = promedioExamenes_;
            promedioTareas = promedioTareas_;
            proyecto = proyecto_;
        }

        float obtenerValorFinal();
};

float Calificacion::obtenerValorFinal(){
    return valorFinal;
}

#endif