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

	const string& getOrigem() const;
	void setOrigem(const string& origem);
    const string& getSimbolo() const;
	void setSimbolo(const string& simbolo);
    const string& getDestino() const;
	void setDestino(const string& destino);
	
};

#endif 