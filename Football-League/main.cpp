//Driver de execução.
//includes.
#include "Jogador.cpp"
#include "jogadorGoleiro.cpp"
#include "jogadorDefesa.cpp"
#include "jogadorAtacante.cpp"
#include "Time.cpp"
#include "partidas.cpp"
#include <vector>
#include <iterator>
#include "menus.cpp"
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
        if (menu == 1){
            int jog = menus::menuJogador();
            if (jog == 1){
                string nom;
                float tec;
                int idad, hab, gol, cami, vel;
                cout << "Digite os dados do jogador ATACANTE" << endl;
                cout << " " << endl;
                cout << "Digite o nome" << endl;
                cin >> nom;
                cout << "Digite a idade" << endl;
                cin >> idad;
                cout << "Digite a habilidade" << endl;
                cin >> hab;
                cout << "Digite a quantidade de gols" << endl;
                cin >> gol;
                cout << "Digite o N da camisa" << endl;
                cin >> cami;
                cout << "Digite a velocidade" << endl;
                cin >> vel;
                cout << "Digite a tecnica" << endl;
                cin >> tec;
                cout << " " << endl;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                add <<nom<<','<<idad<<','<<hab<<','<<gol<<','<<cami<<','<<vel<<','<<tec<<'\n';
                add.close();
                jogadorAtacante *jogador = new jogadorAtacante(nom, idad, hab, gol, cami, vel, tec);
                cout << "Jogador ATACANTE criado com sucesso!" << endl;
                cout << " " << endl;
                count += 1; // provisorio, contar linhas no futuro ou guardar valor em txt
                jogador->print();
            }else if (jog == 2){
                string nom;
                int idad, hab, gol, cami, cob, des;
                cout << "Digite os dados do jogador DEFENSOR" << endl;
                cout << " " << endl;
                cout << "Digite o nome" << endl;
                cin >> nom;
                cout << "Digite a idade" << endl;
                cin >> idad;
                cout << "Digite a habilidade" << endl;
                cin >> hab;
                cout << "Digite a quantidade de gols" << endl;
                cin >> gol;
                cout << "Digite o N da camisa" << endl;
                cin >> cami;
                cout << "Digite a cobertura" << endl;
                cin >> cob;
                cout << "Digite o desarme" << endl;
                cin >> des;
                cout << " " << endl;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                add <<nom<<','<<idad<<','<<hab<<','<<gol<<','<<cami<<','<<cob<<','<<des<<'\n';
                add.close();
                jogadorDefesa *jogador = new jogadorDefesa(nom, idad, hab, gol, cami, cob, des);
                cout << "Jogador DEFENSOR criado com sucesso!" << endl;
                cout << " " << endl;
                count += 1;
                jogador->print();
            }else if (jog == 3){
                string nom;
                float altu;
                int idad, hab, gol, cami, ref;
                cout << "Digite os dados do GOLEIRO" << endl;
                cout << " " << endl;
                cout << "Digite o nome" << endl;
                cin >> nom;
                cout << "Digite a idade" << endl;
                cin >> idad;
                cout << "Digite a habilidade" << endl;
                cin >> hab;
                cout << "Digite a quantidade de gols" << endl;
                cin >> gol;
                cout << "Digite o N da camisa" << endl;
                cin >> cami;
                cout << "Digite o reflexo" << endl;
                cin >> ref;
                cout << "Digite a altura" << endl;
                cin >> altu;
                cout << " " << endl;
                ofstream add;
                add.open("Jogadores.csv", ios::app);
                add <<nom<<','<<idad<<','<<hab<<','<<gol<<','<<cami<<','<<ref<<','<<altu<<'\n';
                add.close();
                jogadorGoleiro *jogador = new jogadorGoleiro(nom, idad, hab, gol, cami, ref, altu);
                cout << "GOLEIRO criado com sucesso!" << endl;
                cout << " " << endl;
                count += 1;
                jogador->print();
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

        }else if(menu == 2){
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
        }else if(menu == 3){
            int partida = menus::menuPartida();
            if(partida == 1){
                // criar partida
            }else if(partida == 2){
                // iniciar partida
            }else if(partida == 3){
                int menu = menus::menuPrincipal();
            }else{ // try catch, tratar depois
                cout << "Opção invalida!" << endl;
                int menu = menus::menuPartida();
            }
        }else if(menu == 4){
            cout << "Ainda nao implementado" << endl;
        }else{
            return false;
        }
    }
    
    return 0;
};
