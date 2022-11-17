//Implementação da classe partidas.
//Includes

#include "partidas.hpp"

//Implementação.
partidas::partidas(char date, Time timeCasa, Time timeVisitante):Time(){ // :Time()??
    //_strdate(date);
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
}

//Métodos

// int partidas::golCasa(){
//     placarCasa += 1;
//     return 0;
// }

// int partidas::golVisitante(){
//     placarVisitante += 1;
//     return 0;
// }

//Getters
Time partidas::getCasa(){
    return this->timeCasa;
}

Time partidas::getVisitante(){
    return this->timeVisitante;
}

string partidas::getPlacar(){
 //   cout << timeCasa << " " << placarCasa << " x " << placarVisitante << " " << timeVisitante << endl;
}
