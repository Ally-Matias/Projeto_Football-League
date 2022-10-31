//Implementação da classe Jogador.
//includes.
#include "Jogador.hpp"
//Implementação dos métodos.
Jogador::Jogador(string nome,int idade,int habilidade,int gols,int camisa){
    this->nome=nome;
    this->idade=idade;
    this->habilidade=habilidade;
    this->gols=gols;
    this->camisa=camisa;
}
Jogador::~Jogador(){}
string Jogador::getNome(){
    return nome;
}
void Jogador::setNome(string nome){
    this->nome=nome;
}
int Jogador::getIdade(){
    return idade;
}
void Jogador::setIdade(int idade){
    this->idade=idade;
}
int Jogador::getHabilidade(){
    return habilidade;
}
void Jogador::setHabilidade(int habilidade){
    this->habilidade=habilidade;
}
int Jogador::getGols(){
    return gols;
}
void Jogador::setGols(int gols){
    this->gols=gols;
}
int Jogador::getCamisa(){
    cout<<camisa;
    return camisa;
}
void Jogador::setCamisa(int camisa){
    this->camisa=camisa;
}
// int Jogador::somaGols(){}
void Jogador::print(){
    cout<<nome<<'\n';
    cout<<idade<<'\n';
    cout<<habilidade<<'\n';
    cout<<gols<<'\n';
    cout<<camisa<<'\n';
}