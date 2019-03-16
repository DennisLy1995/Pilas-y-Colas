#pragma once
#include "Nodo.h"

class Cola
{
public:
	Cola();
	~Cola();

	void setCabeza(Nodo *x);
	Nodo* getCabeza();
	void setFinal(Nodo *x);
	Nodo* getFinal();

	void sumarLongitud();
	void restarLongitud();

	bool esVaciaCola(Cola);
	void insertarElem(int);
	void atender();
	void eliminarElem(int);
	int ultimoElem();
	int getLongitud();
	void mostrarCola();
	void buscarElemento();

private:
	Nodo *cabeza;
	Nodo *final;
	int posicion = 0;
	int longitud = 0;
};

