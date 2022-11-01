//Driver de execução.
//includes.
#include "Jogador.cpp"
#include "jogadorGoleiro.cpp"
#include "jogadorDefesa.cpp"
#include "jogadorAtacante.cpp"
#include "Time.cpp"
#include <vector>
#include <iterator>
//Função principal.
int main(){
    vector<jogadorDefesa>::iterator i;
    vector<jogadorDefesa>jogadoresDefensivos;
    jogadoresDefensivos.push_back(jogadorDefesa("Gabigol",31,89,128,9,76,60));
    jogadoresDefensivos.push_back(jogadorDefesa("Neymar",32,95,400,10,89,99));
    for(i=jogadoresDefensivos.begin();i!=jogadoresDefensivos.end();i++){
        (*i).print();
    return 0;
}