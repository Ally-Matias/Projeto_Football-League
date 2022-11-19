//Implementação da classe Jogador.
//includes.
#include "Jogador.hpp"
//Implementação dos métodos.
Jogador::Jogador(){
    cout<<"Qual o nome do jogador?: "<<'\n';
    cin>>nome;
    cout<<"Qual a idade do jogador?: "<<'\n';
    cin>>idade;
    cout<<"Insira os pontos de Habilidade do jogador: "<<'\n';
    cin>>habilidade;
    cout<<"Insira o número de gols do jogador: "<<'\n';
    cin>>gols;
    cout<<"Insira o número da camisa do jogador: "<<'\n';
    cin>>camisa;
};
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