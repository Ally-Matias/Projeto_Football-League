//Prototipação da classe
//includes 
#pragma once
#include "Time.hpp"
#include<time.h> // date time
#include <iostream>

using namespace std;

//classe
class partidas{
    private:
        char date[9];
        Time timeCasa;
        Time timeVisitante;
        int placarCasa;
        int placarVisitante;
    public:
        partidas(){};
        partidas(char date, Time timeCasa, Time timeVisitante);
        ~partidas();
        Time getCasa();
        Time getVisitante();
        int getPlacar();
        int golCasa();
        int golVisitante();
};