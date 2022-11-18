//Prototipação da classe
//includes 
#pragma once
#include "Time.hpp"

//classe

class partidas: public Time{
    protected:
        string date;
        string timeCasa;       
        string timeVisitante;
        int placarCasa;
        int placarVisitante;
    public:
        partidas(){};
        partidas(string date, string timeCasa, string timeVisitante);
        ~partidas(){};
        string getCasa();
        string getVisitante();
        string getPlacar();
        int golCasa();
        int golVisitante();
};








// class partidas: public Time{
//     protected:
//         char static date;
//         Time timeCasa;       // mudar tipo time para string
//         Time timeVisitante;
//         int placarCasa;
//         int placarVisitante;
//     public:
//         partidas(){};
//         partidas(char date, Time timeCasa, Time timeVisitante);
//         ~partidas(){};
//         Time getCasa();
//         Time getVisitante();
//         string getPlacar();
//         int golCasa();
//         int golVisitante();
//         char static getDate();
// };