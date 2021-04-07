#include "Automato.h"

Automato::Automato(){
    this->inicial = " ";
}
Automato::Automato(string inicial,vector<string> final,vector<Transicao*> transicoes){
    this->inicial = inicial;
    this->final = final;
    this->transicoes = transicoes;
}
Automato::~Automato(){}

void Automato::adicionaFinais(string final){
    this->final.push_back(final);
}
void Automato::adicionaTransicao(Transicao* transicao){
    this->transicoes.push_back(transicao);
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
    for (vector<Transicao*>::iterator it = this->transicoes.begin(); it!=this->transicoes.end();it++){
		if ((*it)->getOrigem() == origem && (*it)->getSimbolo() == simbolo){
            return (*it)->getDestino();
		}
	}
    return "break";
}

void Automato::setIncial(const string& inicial){
    this->inicial = inicial;
}
const string& Automato::getInicial() const{
    return this->inicial;
}
void Automato::setFinal(const vector<string>& final){
    this->final = final;
}
const vector<string>& Automato::getFinal() const{
    return this->final;
}
void Automato::setTransicoes(const vector<Transicao*>& transicoes){
    this->transicoes = transicoes;
}
const vector<Transicao*>& Automato::getTransicoes() const{
    return this->transicoes;
}