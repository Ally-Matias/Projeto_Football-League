//Prototipação da classe
//includes 
#pragma once
#include "Time.hpp"
#include<time.h> // date time

//classe
class partidas: public Time{
    protected:
        char date[9]; // falta implementar
        Time timeCasa;
        Time timeVisitante;
        int placarCasa;
        int placarVisitante;
    public:
        partidas(){};
        partidas(char date, Time timeCasa, Time timeVisitante);
        ~partidas(){};
        Time getCasa();
        Time getVisitante();
        string getPlacar();
       // int golCasa();
       // int golVisitante();
};