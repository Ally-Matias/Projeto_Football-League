//Implementação da classe partidas.
//Includes

#include "partidas.hpp"

//Implementação.

partidas::partidas(string date, string timeCasa, string timeVisitante):Time(){ // :Time()??
    this->date = date;
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
}

//Métodos

int partidas::golCasa(){
    placarCasa += 1;
    return 0;
}

int partidas::golVisitante(){
    placarVisitante += 1;
    return 0;
}

//Getters
string partidas::getCasa(){
    return timeCasa;
}

string partidas::getVisitante(){
    return timeVisitante;
}

string partidas::getPlacar(){
    cout << timeCasa << " " << placarCasa << " x " << placarVisitante << " " << timeVisitante << endl;
}





// partidas::partidas(char date, Time timeCasa, Time timeVisitante):Time(){ // :Time()??
//     this->date = date;
//     this->timeCasa = timeCasa;
//     this->timeVisitante = timeVisitante;
// }

// //Métodos

// char partidas::getDate(){
//     return date;
//     //system("date +%d/%m/%Y");
// }

// int partidas::golCasa(){
//     placarCasa += 1;
//     return 0;
// }

// int partidas::golVisitante(){
//     placarVisitante += 1;
//     return 0;
// }

// //Getters
// Time partidas::getCasa(){
//     return this->timeCasa;
// }

// Time partidas::getVisitante(){
//     return this->timeVisitante;
// }

// string partidas::getPlacar(){
//  //   cout << timeCasa << " " << placarCasa << " x " << placarVisitante << " " << timeVisitante << endl;
// }
