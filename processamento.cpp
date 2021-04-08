#include "Processamento.h"

Processamento::Processamento(){}
Processamento::Processamento(Automato automato,vector<string> palavras){
    this->automato = automato;
    this->palavras = palavras;
}
Processamento::~Processamento(){}

void Processamento::adicionaPalavras(string palavra){
    this->palavras.push_back(palavra);
}

void Processamento::setAutomato(Automato automato){
    this->automato = automato;
}
Automato Processamento::getAutomato() {
    return this->automato;
}
void Processamento::setPalavras(const vector<string>& palavras){
    this->palavras = palavras;
}
const vector<string>& Processamento::getPalavras(){
    return this->palavras;
}

string Processamento::processamento(int posicao){
    string palavra = this->palavras.at(posicao);
    string estado = this->automato.getInicial();
    string possivelEstado;
    cout << "\nInciando o processamento de : " << palavra << endl; 
    cout << "Configuracao Inicial inicial: [" << estado << " , " << palavra << "] " << endl;
    if (palavra == "lambda"){
        cout << "Executando a transicao: " << estado << " -lambda-> " << estado << "resulta em [" << estado << " , lambda]" << endl;
        return estado;
    }

    for (int i = 0; i < palavra.length();i++){
        cout << "Executando a transicao " << estado << " -" << palavra[i] <<"-> ";
        possivelEstado = this->automato.getDestino(estado,string(1,palavra[i]));
        if(possivelEstado == "break")
        {
            cout << "\n Estado nao processa letra: " << palavra[i] << "portanto a " <<  palavra << " nao e aceita pelo AF." << endl;
            return "break";
        }
        if(i == palavra.length()-1){
            cout << possivelEstado << " resulta em [" << possivelEstado << " , lambda]" << endl; 
            return possivelEstado;
        }
        else {
            cout << possivelEstado << " resulta em [" << possivelEstado << " , " << palavra.substr(i,palavra.length()-1)<< "]" << endl; 
            estado = possivelEstado;
        }
    }

}