//Driver de execução.
//includes.
#include "Jogador.cpp"
#include "jogadorGoleiro.cpp"
#include "jogadorDefesa.cpp"
#include "jogadorAtacante.cpp"
#include "Time.cpp"
#include "partidas.cpp"
#include "menus.cpp"
#include <vector>
#include <iterator>
#include <fstream>

//Função principal.
int main(){
    /*
    vector<jogadorDefesa>::iterator i;
    vector<jogadorDefesa>jogadoresDefensivos;
    jogadoresDefensivos.push_back(jogadorDefesa("Gabigol",31,89,128,9,76,60));
    jogadoresDefensivos.push_back(jogadorDefesa("Neymar",32,95,400,10,89,99));
    for(i=jogadoresDefensivos.begin();i!=jogadoresDefensivos.end();i++){
        (*i).print();
    return 0;
    };
    */

    while (true){
        int menu = menus::menuPrincipal();
        int static count = 0; // provisorio, contar linhas no futuro ou guardar valor em txt
        if (menu == 1){     // # Menu jogadores #
            int jog = menus::menuJogador();
            if (jog == 1){
                vector<jogadorAtacante>::iterator j;
                vector<jogadorAtacante>jogador;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                jogador.push_back(jogadorAtacante());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getVelocidade()<<','<<(*j).getTecnica()<<'\n';
                add.close();
                cout << "Jogador ATACANTE criado com sucesso!" << endl;
                cout << " " << endl;
                }
            }else if (jog == 2){
                vector<jogadorDefesa>::iterator j;
                vector<jogadorDefesa>jogador;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                jogador.push_back(jogadorDefesa());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getCobertura()<<','<<(*j).getDesarme()<<'\n';
                add.close();
                cout << "Jogador DEFENSOR criado com sucesso!" << endl;
                cout << " " << endl;
                }
            }else if (jog == 3){
                vector<jogadorGoleiro>::iterator j;
                vector<jogadorGoleiro>jogador;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                jogador.push_back(jogadorGoleiro());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getReflexos()<<','<<(*j).getAltura()<<'\n';
                add.close();
                cout << "GOLEIRO criado com sucesso!" << endl;
                cout << " " << endl;
                }
            }else if (jog == 4){
                // n tem acesso, precisa do save txt
            }else if (jog == 5){
                // n implementado
            }else if (jog == 6){
                int menu = menus::menuPrincipal();
            }else{  // try catch, tratar depois
                cout << "Opção invalida!" << endl;
                //int menu = menus::menuJogador();
            }

        }else if(menu == 2){   // # Menu Times #
            int time = menus::menuTime();
            if(count < 1){ // no futuro sera 5 jogadores
                cout << "Vc tem poucos jogadores para formar um time!" << endl;
            }else if(time == 1){
                cout << "Criar time não implementado." << endl;
                //criar time
            }else if(time == 2){
                cout << "Excluir time não implementado." << endl;
                // excluir time
            }else if(time == 3){
                cout << "Exibir time não implementado." << endl;
                // exibir time
            }else if(time == 4){
                int menu = menus::menuPrincipal();
            }else{ // try catch, tratar depois
                cout << "Opção invalida!" << endl;
                //int menu = menus::menuTime();
            }
        }else if(menu == 3){   // # Menu partida #
            int partida = menus::menuPartida();
            if(partida == 1){
                string dat;
                string timeC;
                string timeV;
                cout << "Qual vai ser a data da partida? xx/xx/xxxx " << endl;
                cin >> dat;
                cout << "Qual o time da casa? " << endl;
                cin >> timeC;
                cout << "Qual o time visitante? " << endl;
                cin >> timeV;
                partidas *part = new partidas(dat, timeC, timeV);
                cout << "" << endl;
                cout << "A partida vai ser na data " << dat << " Entre: " << timeC << " X " << timeV << endl;
                ofstream add;
                add.open("partidas.csv", ios::app);
                add <<dat<<','<<timeC<<','<<timeV<<'\n';
                add.close();
                // criar partida
            }else if(partida == 2){
                // random, atribuindo os valores para algum lugar
                // iniciar partida
            }else if(partida == 3){
                int menu = menus::menuPrincipal();
            }else{ // try catch, tratar depois
                cout << "Opção invalida!" << endl;
                int menu = menus::menuPartida();
            }
        }else if(menu == 4){  // # Menu Dados Gerais #
            cout << "Ainda nao implementado" << endl;
        }else{         // # Menu Sair #
            cout << "Voce saiu!" << endl;
            return false;
        }
    }
    
    return 0;
};
