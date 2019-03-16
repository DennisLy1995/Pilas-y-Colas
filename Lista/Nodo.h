#pragma once
#ifndef NODO_H
#define NODO_H
class Nodo
{
private:
	int valor;
	Nodo * sig;
public:
	Nodo();
	Nodo(int x = 0);

	void setValor(int);
	int getValor(void);
	Nodo * getSig(void);
	void setSig(Nodo*);
};

#endif