//Implementação da classe Time.
//includes.
#include "Time.hpp"
#include <iostream>
using namespace std;

//Implementação dos métodos.
    Time::Time(string nome){
        this->nome = nome;
    }
    Time::~Time(){}
    string Time::getNome(){
        return nome;
    }
    string Time::getResultados(){
        cout<< "Vitorias: " << vitorias <<endl;
        cout<< "Derrotas: " << derrotas <<endl;
        cout<< "empates: " << empates <<endl;
    }
    string Time::imprimeJogadores(){
        cout << Jogador::getNome << endl;
    }
    string Time::somaVitorias(){
            if(vitorias > 0)
            vitorias += 1;
            cout << vitorias << endl;
    }
    string Time::somaDerrotas(){
            if(derrotas > 0)
            derrotas += 1;
            cout << derrotas<< endl;
    }
    string Time::somaEmpates(){
            if(empates > 0)
            empates += 1;
            cout << empates << endl;
    }