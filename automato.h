#ifndef AUTOMATO_H_
#define AUTOMATO_H_

#include "Transicao.h"
#include <vector>

class Automato {
private:
	string inicial;
	vector<string> final;
	vector <Transicao*> transicoes;
public:
	Automato();
	Automato(string,vector<string>,vector<Transicao*>);
	virtual ~Automato();

	void adicionaFinais(string);
	void adicionaTransicao(Transicao*);

	bool boolFinal(string);
	string getDestino(string,string);

	void setIncial(const string& inicial);
	const string& getInicial() const;
	void setFinal(const vector<string>& final);
	const vector<string>& getFinal() const;
	void setTransicoes(const vector<Transicao*>& transicoes);
	const vector<Transicao*>& getTransicoes() const;
};

#endif