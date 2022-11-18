//Implementação da classe jogadorDefesa.
//includes.
#include "jogadorDefesa.hpp"
//implementação dos métodos.
jogadorDefesa::jogadorDefesa():Jogador(){
    cout<<"Qual a cobertura do jogador?: "<<'\n';
    cin>>cobertura;
    cout<<"Qual o desarme do jogador?: "<<'\n';
    cin>>desarme;
};
jogadorDefesa::jogadorDefesa(string nome,int idade,int habilidade,int gols,int camisa,int cobertura,int desarme):Jogador(nome,idade,habilidade,gols,camisa){
    this->cobertura=cobertura;
    this->desarme=desarme;
}
jogadorDefesa::~jogadorDefesa(){}
int jogadorDefesa::getHabilidade(){
    auto habilidade{((Jogador::getHabilidade()*5)+(cobertura*3)+(desarme*2)/10)};
    cout<<"Habilidade: "<<habilidade<<'\n';
    return habilidade;
}
int jogadorDefesa::getCobertura(){
    cout<<"Cobertura: "<<cobertura<<'\n';
    return cobertura;
}
void jogadorDefesa::setCobertura(int cobertura){
    this->cobertura=cobertura;
}
int jogadorDefesa::getDesarme(){
    cout<<"Desarme: "<<desarme<<'\n';
    return desarme;
}
void jogadorDefesa::setDesarme(int desarme){
    this->desarme=desarme;
}
void jogadorDefesa::print(){
    Jogador::print();
    cout<<"Cobertura: "<<cobertura<<'\n'<<"Desarme: "<<desarme<<'\n';
}