#include "Automato.h"
#include <iostream>

Automato::Automato(){
    this->inicial = " ";
}
Automato::Automato(string i,vector<string> f,vector<Transicao> t){
    inicial = i;
    final = f;
    transicoes = t;
}
Automato::~Automato(){}

void Automato::adicionaFinais(string f){
    final.push_back(f);
}
void Automato::adicionaTransicao(Transicao transicao){
    transicoes.push_back(transicao);
}

bool Automato::boolFinal(string estado){
    for (int i = 0 ; i < this->final.size() ; i++){
		if (this->final.at(i) == estado){
            return true;
		}
	}
    return false;
} 
string Automato::getDestino(string origem,string simbolo){
        /*if ((*it)->getOrigem() == origem && (*it)->getSimbolo() == simbolo){
            return (*it)->getDestino();
		}*/
	
    return "break";
}

void Automato::setIncial(const string& inicial){
    this->inicial = inicial;
}
const string& Automato::getInicial() {
    return this->inicial;
}
void Automato::setFinal(const vector<string>& final){
    this->final = final;
}
const vector<string>& Automato::getFinal(){
    return this->final;
}
void Automato::setTransicoes(vector<Transicao> transicao){
    this->transicoes = transicao;
}
vector<Transicao> Automato::getTransicoes(){
   return this->transicoes;
}