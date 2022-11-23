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
        // int static count = 0; // provisorio, contar linhas no futuro ou guardar valor em txt
        if (menu == 1){     // # Menu jogadores #
            system("clear");
            int jog = menus::menuJogador();
            if (jog == 1){ //Adicionar Jogador Atacante.
                system("clear");
                vector<jogadorAtacante>::iterator j;    // Iterador para percorrer os dados do Objeto antes de adicionar ao arquivo csv.
                vector<jogadorAtacante>jogador;     //Vector para armazernar os osbjetos provisórios.
                ofstream add;   //Objeto de fstream para adicionar os dados ao arquivo csv.
                add.open("Jogadores/jogadorAtacante.csv", ios::app);    //Abertura do arquivo csv.
                jogador.push_back(jogadorAtacante());   //Instanciação do objeto provisório.
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getVelocidade()<<','<<(*j).getTecnica()<<'\n';  //Adição dos dados do objeto ao arquivo CSV.
                add.close();    //Conclusão da adição ao arquivo.
                cout << " " << endl;
                cout << "Jogador ATACANTE criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 2){ //Adicionar Jogador Defensor. 
                system("clear");
                vector<jogadorDefesa>::iterator j;    // Iterador para percorrer os dados do Objeto antes de adicionar ao arquivo csv.
                vector<jogadorDefesa>jogador;     //Vector para armazernar os osbjetos provisórios.
                ofstream add;   //Objeto de fstream para adicionar os dados ao arquivo csv.
                add.open("Jogadores/jogadorDefesa.csv", ios::app);    //Abertura do arquivo csv.
                jogador.push_back(jogadorDefesa());   //Instanciação do objeto provisório.
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getCobertura()<<','<<(*j).getDesarme()<<'\n';  //Adição dos dados do objeto ao arquivo CSV.
                add.close();    //Conclusão da adição ao arquivo.
                cout << " " << endl;
                cout << "Jogador ATACANTE criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 3){ //Adicionar Jogador Goleiro.
                system("clear");
                vector<jogadorGoleiro>::iterator j;    // Iterador para percorrer os dados do Objeto antes de adicionar ao arquivo csv.
                vector<jogadorGoleiro>jogador;     //Vector para armazernar os osbjetos provisórios.
                ofstream add;   //Objeto de fstream para adicionar os dados ao arquivo csv.
                add.open("Jogadores/jogadorGoleiro.csv", ios::app);    //Abertura do arquivo csv.
                jogador.push_back(jogadorGoleiro());   //Instanciação do objeto provisório.
                for(j=jogador.begin();j!=jogador.end();j++){
                add<<(*j).getNome()<<','<<(*j).getIdade()<<','<<(*j).getHabilidade()<<','<<(*j).getGols()<<','<<(*j).getCamisa()<<','<<(*j).getReflexos()<<','<<(*j).getAltura()<<'\n';  //Adição dos dados do objeto ao arquivo CSV.
                add.close();    //Conclusão da adição ao arquivo.
                cout << " " << endl;
                cout << "Jogador GOLEIRO criado com sucesso!" << endl;
                cout << " " << endl;
                cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                cin >> tec;
                system("clear");
                }
            }else if (jog == 4){ //Listar Jogadores.
                system("clear");
                int opt=menus::menuListJogador();
                if(opt==1){ //Listar Jogador Atacante.
                //Estrutura para ler o Arquivo csv e guardar os campos em um vector.
                    ifstream read("Jogadores/jogadorAtacante.csv"); //Objeto ifstream para a leitura do arquivo csv.
                    string linha; //variável para receber caracteres ao rodar o while.
                    while(getline(read, linha)){ //Lendo o fluxo de texto e salvando na variável linha.
                        palavras.clear(); // Limpando o vector palavras.
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){ //Se a vírgula for detectada adiconamos o texto anterior.
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i]; //Caso não haja vírgula a variável temp recebe o conteúdo da linha.
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        //Após a criação do vetor palavras, temos que converter os valores que estão com o type STRING para o type INT.
                        vector<int> stats; //Vetor de inteiros;
                        for(int i=1;i < palavras.size();i++){ //Pulamos o índice [0] pois nele é contido o nome do Jogador. 
                        stats.push_back(stoi(palavras[i])); //A função STOI é a responsável por converter STRING para INT. 
                        }
                        //Instanciação do jogador com um vector definitivo e com as devidas conversões de tipo.
                        jogadorATK.push_back(jogadorAtacante(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],stats[5]));
                    }
                    system("clear");
                    //Inserção do Nome do jogador para lista-lo.
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int i=0;i<jogadorATK.size();i++){
                        if(jogadorATK[i].getNome()==nomeJogador){ //Se o índice referente ao nome do objeto for igual ao nome fornecido listamos o jogador.
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
                else if(opt==2){ //Listar Jogador Defensor.
                    //Estrutura para ler o Arquivo csv e guardar os campos em um vector.
                    ifstream read("Jogadores/jogadorDefesa.csv"); //Objeto ifstream para a leitura do arquivo csv.
                    string linha; //variável para receber caracteres ao rodar o while.
                    while(getline(read, linha)){ //Lendo o fluxo de texto e salvando na variável linha.
                        palavras.clear(); // Limpando o vector palavras.
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){ //Se a vírgula for detectada adiconamos o texto anterior.
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i]; //Caso não haja vírgula a variável temp recebe o conteúdo da linha.
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        //Após a criação do vetor palavras, temos que converter os valores que estão com o type STRING para o type INT.
                        vector<int> stats; //Vetor de inteiros;
                        for(int i=1;i < palavras.size();i++){ //Pulamos o índice [0] pois nele é contido o nome do Jogador. 
                        stats.push_back(stoi(palavras[i])); //A função STOI é a responsável por converter STRING para INT. 
                        }
                        //Instanciação do jogador com um vector definitivo e com as devidas conversões de tipo.
                        jogadorDEF.push_back(jogadorDefesa(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],stats[5]));
                    }
                    system("clear");
                    //Inserção do Nome do jogador para lista-lo.
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int i=0;i<jogadorDEF.size();i++){
                        if(jogadorDEF[i].getNome()==nomeJogador){ //Se o índice referente ao nome do objeto for igual ao nome fornecido listamos o jogador.
                            jogadorDEF[i].print();
                        //     cont += 1;          // futura atualização e finalização
                        // }else if(cont == 0){
                        //     cout << "Jogador não encontrado" << endl;
                        }
                    }
                    cout << "Aperte qualquer tecla para voltar ao menu inicial: ";
                    cin >> tec;
                    system("clear");
                }
                else if(opt==3){ //Listar Jgador Goleiro.
                    //Estrutura para ler o Arquivo csv e guardar os campos em um vector.
                    ifstream read("Jogadores/jogadorGoleiro.csv"); //Objeto ifstream para a leitura do arquivo csv.
                    string linha; //variável para receber caracteres ao rodar o while.
                    while(getline(read, linha)){ //Lendo o fluxo de texto e salvando na variável linha.
                        palavras.clear(); // Limpando o vector palavras.
                        string temp="";
                        for(int i = 0;i < linha.size();i++){
                            if (linha[i]==','){ //Se a vírgula for detectada adiconamos o texto anterior.
                                palavras.push_back(temp);
                                temp="";
                            }
                            else{
                                temp+=linha[i]; //Caso não haja vírgula a variável temp recebe o conteúdo da linha.
                            }
                        }
                        if (temp.size()>0){
                            palavras.push_back(temp);
                        }
                        //Após a criação do vetor palavras, temos que converter os valores que estão com o type STRING para o type INT.
                        vector<int> stats; //Vetor de inteiros;
                        vector<float>stats2; //Vetor de floats; 
                        for(int i=1;i < palavras.size();i++){ //Pulamos o índice [0] pois nele é contido o nome do Jogador. 
                            if(i==6){
                                stats2.push_back(stof(palavras[6]));
                            }
                            else{
                                stats.push_back(stoi(palavras[i])); //A função STOI é a responsável por converter STRING para INT.
                            }
                             
                        }
                        //Instanciação do jogador com um vector definitivo e com as devidas conversões de tipo.
                        jogadorATK.push_back(jogadorAtacante(palavras[0],stats[0],stats[1],stats[2],stats[3],stats[4],stats2[0]));
                    }
                    system("clear");
                    //Inserção do Nome do jogador para lista-lo.
                    string nomeJogador;
                    cout<<"Insira o nome do jogador a exibir: "<<'\n';
                    cin>>nomeJogador;
                    for(int i=0;i<jogadorGK.size();i++){
                        if(jogadorGK[i].getNome()==nomeJogador){ //Se o índice referente ao nome do objeto for igual ao nome fornecido listamos o jogador.
                            jogadorGK[i].print();
                        //     cont += 1;          // futura atualização e finalização
                        // }else if(cont == 0){
                        //     cout << "Jogador não encontrado" << endl;
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
                            ifstream read("Jogadores/jogadorAtacante.csv");
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
