//Prototipação da classe Time
//Includes.
#pragma once
#include <iostream>
using namespace std;

//classe.
class Time{
protected:
    string nome;
    string jogador;  // futuramente vai ser um vetor
    int vitorias = 0;
    int derrotas = 0;
    int empates = 0;

public:
    Time();
    Time(string nome);
    ~Time(){};
    string getNome();
    void getResultados();
    string imprimeJogadores();
    int somaVitorias();
    int somaDerrotas();
    int somaEmpates();
    //void insJogador(Jogador pJpg);        // instanciamento de jogador, atribui ao atributo jogador
};