#ifndef MAESTRO_H
#define MAESTRO_H
#include <string>
#include <iostream>
#include "Usuario.h"

using namespace std;

class Maestro: public Usuario{
    private:
        float rating;
    
    public:

        Maestro(){}
        Maestro(string tipo_, int id_, string nombre_,float rating_):
        Usuario(tipo_, id_, nombre_){
            rating = rating_;
        }

        void establecerRating(float);

        float obtenerRating();
        string obtenerInfoMaestro();
};

float Maestro::obtenerRating(){
    float ratingMaestro = rating;
    return ratingMaestro;
}

string Maestro::obtenerInfoMaestro(){
    string infoMaestro = "El rating del maestro es igual a: " + to_string(rating);
    return infoMaestro;
}

void Maestro::establecerRating(float rating_){
    rating = rating_;
}

#endif