#include "Processamento.h"

Processamento::Processamento(){}
Processamento::Processamento(Automato* automato,vector<string> palavras){
    this->automato = automato;
    this->palavras = palavras;
}
Processamento::~Processamento(){}

void Processamento::adicionaPalavras(string palavra){
    this->palavras.push_back(palavra);
}

void Processamento::setAutomato(Automato* automato){
    this->automato = automato;
}
Automato* Processamento::getAutomato() const{
    return this->automato;
}
void Processamento::setPalavras(const vector<string>& palavras){
    this->palavras = palavras;
}
const vector<string>& Processamento::getPalavras() const{
    return this->palavras;
}