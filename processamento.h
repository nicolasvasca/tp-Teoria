#ifndef PROCESSAMENTO_H_
#define PROCESSAMENTO_H_

#include "Automato.h"

class Processamento {
private:
	Automato* automato;
    vector<string> palavras;
public:
	Processamento();
	Processamento(Automato*,vector<string>);
	virtual ~Processamento();

	void adicionaPalavras(string);

	void setAutomato(Automato* automato);
	Automato* getAutomato() const;
	void setPalavras(const vector<string>& palavras);
	const vector<string>& getPalavras() const;
};

#endif