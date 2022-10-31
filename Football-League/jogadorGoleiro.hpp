//Prototipação da classe JogadorGoleiro.
//Includes.
#pragma once
#include <iostream>
#include "Jogador.hpp"
//classe.
class jogadorGoleiro:public Jogador{
//atributos e métodos.
private:
    int reflexos{};
    float altura{};
public:
    jogadorGoleiro(string nome,int idade,int habilidade,int gols,int camisa,int reflexos,float altura);
    ~jogadorGoleiro();
    int getHabilidade();
    int getReflexos();
    void setReflexos(int reflexos);
    float getAltura();
    void setAltura(float altura);
};