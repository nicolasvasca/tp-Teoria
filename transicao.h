#ifndef TRANSICAO_H_
#define TRANSICAO_H_

#include <string>
using namespace std;

class Transicao {
private:
	string origem;
    string simbolo;
	string destino;
public:
	Transicao();
	Transicao(string,string,string);
	virtual ~Transicao();

	const string& getOrigem();
	void setOrigem(const string& origem);
    const string& getSimbolo() ;
	void setSimbolo(const string& simbolo);
    const string& getDestino();
	void setDestino(const string& destino);
	
};

#endif 