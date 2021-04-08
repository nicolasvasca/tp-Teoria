#include "Automato.h"
#include "Transicao.h"
#include "Processamento.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

void lerArquivo (string nome, Processamento *p){
    Automato * a = new Automato();
    Transicao *t = new Transicao();
    vector<string> palavras;

    ifstream in (nome);
    string temporario;
    int line = 0;
    char ch;
    bool inicial = true;
    bool origem = true;
    bool simbolo = false;
    bool isTest = false;
    bool isInfo = false;
    while(in >> noskipws >> ch){
        //cout << ch << endl;
        if (ch == ';'){
            inicial = false;
        }
        if (line == 0 && inicial && ch != ' ') {
            a->setIncial(string(1,ch));
        }else if (line == 0 && !inicial && ch != ' ' && ch != '\n' && ch != ';'){
            a->adicionaFinais(string(1,ch));
        }
        if (ch == 't'){
            isTest = true;
        }
        if (line > 0 && !isTest && ch != '\n' && ch != ' ') {
            if (origem) {
                t->setOrigem(string(1,ch));
                origem = false;
                simbolo = true;
            }
            else if(simbolo){
                t->setSimbolo(string(1,ch));
                simbolo = false;
            }
            else if(origem == false && simbolo == false) {
                t->setDestino(string(1,ch));
                a->adicionaTransicao(*t);
                origem = true;
            }
        }

        if (isTest) {
            if (ch == ' ') {
                isInfo = true;
            }
            if (isInfo && ch != ' ' && ch != '\n') {
                temporario.push_back(ch);
            }
            if (ch == '\n') {
                isInfo = false;
                palavras.push_back(temporario);
                temporario.clear(); 
            }
        }

        if(ch == '\n') {   // detects the end of the line
            line++;
        }
    }
    p->setAutomato(*a);
    p->setPalavras(palavras);
}