#pragma once
#include <iostream>
using namespace std;
//classe.
class menus{
    public:
        int static menuPrincipal();
        int static menuJogador();
        int static menuTime();
        int static menuPartida();
        int static menuDadosG();
};

int menus::menuPrincipal(){
    cout << " " << endl;
    cout << "----- MENU PRINCIPAL ----- " << endl;
    cout << "Opção 1 - Jogadores" << endl;
    cout << "Opção 2 - Times" << endl;
    cout << "Opção 3 - Partidas" << endl;
    cout << "Opção 4 - Dados gerais" << endl;
    cout << "Opção 5 - Sair" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuJogador(){
    cout << " " << endl;
    cout << "----- CRIAÇÃO DO JOGADOR ----- " << endl;
    cout << "Opção 1 - Jogador atacante" << endl;
    cout << "Opção 2 - Jogador defensor" << endl;
    cout << "Opção 3 - Goleiro" << endl;
    cout << "Opção 4 - Exibir jogador" << endl; // n feito
    cout << "Opção 5 - Remover jogador" << endl; // n feito
    cout << "Opção 6 - Sair" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuTime(){
    cout << " " << endl;
    cout << "----- CRIAÇÃO DE TIME ----- " << endl;
    cout << "Opção 1 - Criar time" << endl;
    cout << "Opção 2 - Excluir time " << endl;
    cout << "Opção 3 - Exibir times" << endl;
    cout << "Opção 4 - Sair" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuPartida(){
    cout << " " << endl;
    cout << "----- CRIAR PARTIDA ----- " << endl;
    cout << "Opção 1 - Criar partida" << endl;
    cout << "Opção 2 - Iniciar partida " << endl;
    cout << "Opção 3 - Sair" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
}

int menus::menuDadosG(){ // ainda n implementado na main
    cout << " " << endl;
    cout << "----- DADOS GERAIS ----- " << endl;
    cout << "Opção 1 - Criar partida" << endl;
    cout << "Opção 2 - Iniciar partida " << endl;
    cout << "Opção 3 - Sair" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
}