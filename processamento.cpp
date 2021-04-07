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

string Processamento::processamento(int posicao){
    string palavra = this->palavras.at(posicao);
    string estado = this->automato->getInicial();
    cout << "\nInciando o processamento de : " << palavra << endl; 
    cout << "Configuracao Inicial inicial: [" << estado << " , " << palavra << "] " << endl;
    if (palavra == "lambda"){
        cout << "Executando a transicao: " << estado << " -lambda-> " << estado << "resulta em [" << estado << " , lambda]";
        return estado;
    }

    for (int i = 0; i < palavra.length();i++){
    }

}