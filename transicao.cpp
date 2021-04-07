#include "Transicao.h"

Transicao::Transicao(){
    this->origem = " ";
    this->simbolo = " ";
    this->destino = " ";
}

Transicao::Transicao(string origem,string simbolo,string destino){
    this->origem = origem;
    this->simbolo = simbolo;
    this->destino = destino;
}

Transicao::~Transicao(){}

const string& Transicao::getOrigem() const{
    return origem;
}

void Transicao::setOrigem(const string& origem){
    this->origem = origem;
}

const string& Transicao::getSimbolo() const{
    return simbolo;
}
void Transicao::setSimbolo(const string& simbolo){
    this->simbolo = simbolo;
}

const string& Transicao::getDestino() const{
    return destino;
}
void Transicao::setDestino(const string& destino){
    this->destino = destino;
}