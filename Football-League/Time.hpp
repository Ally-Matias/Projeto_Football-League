//Prototipação da classe Time
//Includes.
#pragma once
#include "Jogador.hpp"
//classe.
class Time:Jogador{
protected:
    string nome;
    Jogador jogador;
    int vitorias = 0;
    int derrotas = 0;
    int empates = 0;

public:
    Time(){};
    Time(string nome);
    ~Time(){};
    string getNome();
    void getResultados();
    string imprimeJogadores();
    int somaVitorias();
    int somaDerrotas();
    int somaEmpates();
    void insJogador(Jogador pJpg);        // instanciamento de jogador, atribui ao atributo jogador
};