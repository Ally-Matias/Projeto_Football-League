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

//Getters
Time partidas::getCasa(){
    return this->timeCasa;
}

Time partidas::getVisitante{
    return this->timeVisitante;
}

string partidas::getPlacar(){
    cout << placarVisitante << endl;
    cout << placarCasa << endl;
}

// onde mostrar a date?? cout << date << endl;