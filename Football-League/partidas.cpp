//Implementação da classe partidas.
//Includes
#include "partidas.hpp"
#include <iostream>
using namespace std;

//Implementação.
partidas::partida(char date, Time timeCasa, Time timeVisitante){
    _strdate(date);
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
}
partidas::~partida(){};

//Métodos

partidas::golCasa(){
    placarCasa += 1;
}

partidas::golVisitante(){
    placarVisitante += 1;
}

//Getters
Time partidas::getCasa(){
    return this->timeCasa;
}

Time partidas::getVisitante{
    return this->timeVisitante;
}

string partidas::getPlacar(){
    cout << timeCasa << " " << placarCasa << " x " << placarVisitante << " " << timeVisitante << endl;
}

// onde implementar date?? cout << date << endl;