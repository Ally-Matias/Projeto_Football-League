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
#include<cstdlib>

//Função principal.
int main(){
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
                cout << " " << endl;
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
                cout << " " << endl;
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
                cout << " " << endl;
                cout << "GOLEIRO criado com sucesso!" << endl;
                cout << " " << endl;
                }
            }else if (jog == 4){
                // n tem acesso, precisa do save txt
            }else if (jog == 5){
                // n implementado
            }else{
                // (sair) int menu = menus::menuPrincipal();
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
            }else{
                // sair
            }
        }else if(menu == 3){   // # Menu partida #
            int partida = menus::menuPartida();
            if(partida == 1){
                vector<partidas>::iterator i;
                vector<partidas>partida;
                ofstream add;
                add.open("partidas.csv", ios::app);
                partida.push_back(partidas());
                for(i=partida.begin();i!=partida.end();i++){
                add<<(*i).getDate()<<','<<(*i).getCasa()<<','<<(*i).getVisitante()<<'\n';
                add.close();
                cout << " " << endl;
                i->getPlacar();
                }
                cout << " " << endl;
                // criar partida
            }else if(partida == 2){
                srand((unsigned) time(NULL));
                int random = rand() % 2;
                if(random == 0){    // futuramente sera dois randoms gol time casa, gol time visit.
                    cout << "Time Casa venceu a partida" << endl;
                }else{
                    cout << "Time visitante venceu a partida" << endl;
                }
                // iniciar partida
            }else{
               // int menu = menus::menuPrincipal();
            }
        }else if(menu == 4){  // # Menu Dados Gerais #
                int dados = menus::menuDadosG();
                if (dados == 1){
                    cout << "nao implementado ainda!" << endl;
                }else{
                    // sair int menu = menus::menuPrincipal();
                }
        }else{         // # Menu Sair #
            cout << "Você saiu!" << endl;
            return false;
        }
    }
    return 0;
};
