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
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

//Função principal.
int main(){
    system("clear");
    cout << "## BEM VINDO AO FOOTBALL LEAGUE ##" << endl;
    vector<jogadorAtacante> jogadorATK;
    vector<jogadorDefesa> jogadorDEF;
    vector<jogadorGoleiro> jogadorGK;
    vector<string>palavras;
    vector<Time>times; // usar no exibir time, n foi implementado a base dele
    int cont = 0;
    string tec;
    while (true){
        int menu = menus::menuPrincipal();
        int static count = 0; // provisorio, contar linhas no futuro ou guardar valor em txt
        if (menu == 1){     // # Menu jogadores #
            system("clear");
            int jog = menus::menuJogador();
            if (jog == 1){
                system("clear");
                vector<jogadorAtacante>::iterator j;
                vector<jogadorAtacante>jogador;
                ofstream add;
                add.open("Jogadores/jogadorAtacante.csv", ios::app);
                jogador.push_back(jogadorAtacante());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getVelocidade()<<','<<(*j).getTecnica()<<'\n';
                add.close();
                system("clear");
                cout << " " << endl;
                cout << "Jogador ATACANTE criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 2){
                system("clear");
                vector<jogadorDefesa>::iterator j;
                vector<jogadorDefesa>jogador;
                ofstream add;
                add.open("jogadorDefesa.csv", ios::app);
                jogador.push_back(jogadorDefesa());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getCobertura()<<','<<(*j).getDesarme()<<'\n';
                add.close();
                system("clear");
                cout << " " << endl;
                cout << "Jogador DEFENSOR criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 3){
                system("clear");
                vector<jogadorGoleiro>::iterator j;
                vector<jogadorGoleiro>jogador;
                ofstream add;
                add.open("jogadorGoleiro.csv", ios::app);
                jogador.push_back(jogadorGoleiro());
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getReflexos()<<','<<(*j).getAltura()<<'\n';
                add.close();
                system("clear");
                cout << " " << endl;
                cout << "GOLEIRO criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 4){
                system("clear");
                int opt=menus::menuListJogador();
                if(opt==1){
                    ifstream read("jogadorAtacante.csv");
                    string linha;
                    while(getline(read, linha)){
                        palavras.clear();
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i];
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        vector<int> stats;
                        for(int i=1;i < palavras.size();i++){
                        stats.push_back(stoi(palavras[i]));
                        }
                        jogadorATK.push_back(jogadorAtacante(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],stats[5]));
                    }
                    system("clear");
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int i=0;i<jogadorATK.size();i++){
                        if(jogadorATK[i].getNome()==nomeJogador){
                            jogadorATK[i].print();
                        //     cont += 1;          // futura atualização e finalização
                        // }else if(cont == 0){
                        //     cout << "Jogador não encontrado" << endl;
                        }
                    }
                    cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                    cin >> tec;
                    system("clear");
                }
                else if(opt==2){
                    ifstream read("jogadorDefesa.csv");
                    string linha;
                    while(getline(read, linha)){
                        palavras.clear();
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i];
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        vector<int> stats;
                        for(int i=1;i < palavras.size();i++){
                        stats.push_back(stoi(palavras[i]));
                        }
                        jogadorDEF.push_back(jogadorDefesa(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],stats[5]));
                    }
                    system("clear");
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int  i=0;i<jogadorDEF.size();i++){
                        if(jogadorDEF[i].getNome()==nomeJogador){
                            jogadorDEF[i].print();
                        }
                    }
                    cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                    cin >> tec;
                    system("clear");
                }
                else if(opt==3){
                    ifstream read("jogadorGoleiro.csv");
                    string linha;
                    while(getline(read, linha)){
                        palavras.clear();
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i];
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        vector<int> stats;
                        vector<float>status;
                        for(int i=1;i < palavras.size();i++){
                            if(i==6){
                                status.push_back(stof(palavras[6]));    
                            }
                            else{
                                stats.push_back(stoi(palavras[i]));
                            }
                        }
                        jogadorGK.push_back(jogadorGoleiro(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],status[0]));
                    }
                    system("clear");
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int  i=0;i<jogadorGK.size();i++){
                        if(jogadorGK[i].getNome()==nomeJogador){
                            jogadorGK[i].print();
                        }
                    }
                    cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                    cin >> tec;
                    system("clear");
                }
            }else if (jog == 5){
                system("clear");
                int opt=menus::menuDeleteJogador();
                if(opt==1){
                    system("clear");
                    string nomejogador;
                    cout<<"Insira o nome do jogador a deletar: "<<'\n';
                    cin>>nomejogador;
                    for(int i=0;i<jogadorATK.size();i++){
                        if(jogadorATK[i].getNome()==nomejogador){
                            jogadorATK.erase(jogadorATK.begin()+i);
                            ifstream read("jogadorAtacante.csv");
                            string linha;
                            while(getline(read, linha)){
                                palavras.clear();
                                string temp="";
                                for(int i = 0;i < linha.size();i++){
                                    if (linha[i]==','){
                                        palavras.push_back(temp);
                                        temp="";
                                    }
                                    else{
                                        temp+=linha[i];
                                    }
                                }
                                if (temp.size()>0){
                                    palavras.push_back(temp);
                                }
                            }
                        }
                    }
                }
            }else{
                system("clear");
                // (sair) int menu = menus::menuPrincipal();
            }

        }else if(menu == 2){   // # Menu Times #
            system("clear");
            int time = menus::menuTime();
            if(time == 1){     //criar time
                system("clear");
                vector<Time>::iterator i;
                vector<Time>tim;
                ofstream add;
                add.open("Times/timesNomes.csv", ios::app);
                tim.push_back(Time());
                for(i=tim.begin();i!=tim.end();i++){
                add<<(*i).getNome() << '\n';
                add.close();
                }
                system("clear");
                cout << "Time registrado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
            }else if(time == 2){  // formar time
                cout << "Formar time não implementado." << endl;
            }else if(time == 3){    // excluir time
                cout << "Excluir time não implementado." << endl;
            }else if(time == 4){   // exibir todos os times
                char linha[255];
                fstream arquivo;
                arquivo.open("Times/timesNomes.csv",fstream::in);
                arquivo.read(linha, 255);
                cout << linha << endl;
                arquivo.close();
                cout << endl;
            }else if(time == 5){  // exibir time
                cout << "Exibir time não implementado." << endl;
            }else{
                system("clear");
                // sair
            }
        }else if(menu == 3){   // # Menu partida #
            system("clear");
            int partida = menus::menuPartida();
            if(partida == 1){
                system("clear");
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
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                // criar partida
            }else if(partida == 2){
                system("clear");
                srand((unsigned) time(NULL));
                int random = rand() % 2;
                if(random == 0){    // futuramente sera dois randoms para gol time casa, gol time visit. após atribui os valores de gols e vitorias
                    cout << "Time Casa venceu a partida" << endl;
                }else{
                    cout << "Time visitante venceu a partida" << endl;
                }
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                // iniciar partida
            }else{
                system("clear");
               // int menu = menus::menuPrincipal();
            }
        }else if(menu == 4){  // # Menu Dados Gerais #
                system("clear");
                int dados = menus::menuDadosG();
                if (dados == 1){
                    cout << "nao implementado ainda!" << endl;
                }else{
                    system("clear");
                    // sair int menu = menus::menuPrincipal();
                }
        }else{         // # Menu Sair #
            cout << "Você saiu!" << endl;
            return false;
        }
    }
    return 0;
    
};
