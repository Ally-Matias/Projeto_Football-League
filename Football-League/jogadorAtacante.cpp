//Implementação da classe jogadorAtacante.
//Includes.
#include "jogadorAtacante.hpp"
//Implementação dos métodos.
jogadorAtacante::jogadorAtacante(string nome,int idade,int habilidade,int gols,int camisa,int velocidade,float tecnica):Jogador(nome,idade,habilidade,gols,camisa){
    this->velocidade=velocidade;
    this->tecnica=tecnica;
}
jogadorAtacante::~jogadorAtacante(){}
int jogadorAtacante::getHabilidade(){
    auto habilidade{((Jogador::getHabilidade()*5)+(velocidade*2)+(tecnica*3)/10)};
    cout<<habilidade<<'\n';
    return habilidade;
}
int jogadorAtacante::getVelocidade(){
    return velocidade;
}
void jogadorAtacante::setVelocidade(int velocidade){
    this->velocidade=velocidade;
}
float jogadorAtacante::getTecnica(){
    return tecnica;
}
void jogadorAtacante::setTecnica(int tecnica){
    this->tecnica=tecnica;
}
