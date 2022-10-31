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
    cout<<"Nome: "<<nome<<'\n';
    return nome;
}
void Jogador::setNome(string nome){
    this->nome=nome;
}
int Jogador::getIdade(){
    cout<<"Idade: "<<idade<<'\n';
    return idade;
}
void Jogador::setIdade(int idade){
    this->idade=idade;
}
int Jogador::getHabilidade(){
    cout<<"Habilidade: "<<habilidade<<'\n';
    return habilidade;
}
void Jogador::setHabilidade(int habilidade){
    this->habilidade=habilidade;
}
int Jogador::getGols(){
    cout<<"Gols: "<<gols<<'\n';
    return gols;
}
void Jogador::setGols(int gols){
    this->gols=gols;
}
int Jogador::getCamisa(){
    cout<<"Camisa: "<<camisa<<'\n';
    return camisa;
}
void Jogador::setCamisa(int camisa){
    this->camisa=camisa;
}
// int Jogador::somaGols(){}
void Jogador::print(){
    cout<<"Nome: "<<nome<<'\n';
    cout<<"Idade: "<<idade<<'\n';
    cout<<"Habilidade: "<<habilidade<<'\n';
    cout<<"Gols: "<<gols<<'\n';
    cout<<"Camisa: "<<camisa<<'\n';
}