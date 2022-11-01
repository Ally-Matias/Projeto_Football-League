//Prototipação da classe Time
//Includes.
#pragma once
#include "Jogador.hpp"
//classe.
class Time:Jogador{
private:
    string nome;
    Jogador jogador;
    int vitorias{0};
    int derrotas{0};
    int empates{0};

public:
    Time(string nome);
    ~Time();
    string getNome();
    void getResultados();
    string imprimeJogadores();
    int somaVitorias();
    int somaDerrotas();
    int somaEmpates();
    // string insJogador(pJpg : Jogador);        // pJpg? 
};