//Prototipação da classe
//includes 
#pragma once

//classe

class partidas{
    protected:
        string date;
        string timeCasa;       
        string timeVisitante;
        int placarCasa = 0;
        int placarVisitante = 0;
    public:
        partidas();
        partidas(string date, string timeCasa, string timeVisitante);
        ~partidas(){};
        string getCasa();
        string getVisitante();
        string getPlacar();
        string getDate();
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