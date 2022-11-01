//Prototipação da classe Time
//Includes.
#pragma once
#include "jogador.hpp"
#include <iostream>
using namespace std;

//classe.
class Time{
    private:
        string nome;
        Jogador jogador;
        int vitorias = 0;
        int derrotas = 0;
        int empates = 0;

    public:
        Time(string);
        ~Time();
        string getNome();
        string getResultados();
        string imprimeJogadores();
        string somaVitorias();
        string somaDerrotas();
        string somaEmpates();
        string insJogador(pJpg : Jogador);        // pJpg? 
};