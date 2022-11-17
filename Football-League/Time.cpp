//Implementação da classe Time.
//includes.
#include "Time.hpp"
//Implementação dos métodos.
Time::Time(string nome):Jogador(){
    this->nome=nome;
}

string Time::getNome(){
    return this->nome;
}

void Time::getResultados(){
    cout<< "Vitorias: " << vitorias <<endl;
    cout<< "Derrotas: " << derrotas <<endl;
    cout<< "Empates: " << empates <<endl;
}
    // string Time::imprimeJogadores(){
    //     cout << Jogador::getNome << endl; // implementado após resolver o save.txt
    // }
    
int Time::somaVitorias(){
    vitorias += 1;
    return vitorias;
    // if(vitorias > 0){
    //     vitorias += 1;
    //     cout << vitorias << endl;
    //     return vitorias;
    // }
}
int Time::somaDerrotas(){
    derrotas += 1;
    return derrotas;
    // if(derrotas > 0)
    // derrotas += 1;
    // cout << derrotas<< endl;
    // return derrotas;
}
int Time::somaEmpates(){
    empates += 1;
    return empates;
    // if(empates > 0)
    // empates += 1;
    // cout << empates << endl;
    // return empates;
}

void Time::insJogador(Jogador pJpg){  // jogador.insJogador(new Jogador());
    jogador=pJpg;
}
// https://cursos.alura.com.br/forum/topico-instanciar-objetos-diversas-duvidas-88336