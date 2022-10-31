//Implementação da classe jogadorGoleiro.
//Includes.
#include "jogadorGoleiro.hpp"
//Implementação dos métodos. 
jogadorGoleiro::jogadorGoleiro(string nome,int idade,int habilidade,int gols,int camisa,int reflexos,float altura):Jogador(nome,idade,habilidade,gols,camisa){
    this->reflexos=reflexos;
    this->altura=altura;
}
jogadorGoleiro::~jogadorGoleiro(){}
int jogadorGoleiro::getHabilidade(){
    auto habilidade{((Jogador::getHabilidade()*5)+((static_cast<int>((altura*100)))*2)+(reflexos*3)/10)};
    cout<<habilidade<<'\n';
    return habilidade;
}
int jogadorGoleiro::getReflexos(){
    return reflexos;
}
void jogadorGoleiro::setReflexos(int reflexos){
    this->reflexos=reflexos;
}
float jogadorGoleiro::getAltura(){
    return altura;
}
void jogadorGoleiro::setAltura(float altura){
    this->altura=altura;
}