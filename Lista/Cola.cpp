#include "pch.h"
#include "Cola.h"
#include <iostream>
using namespace std;


Cola::Cola()
{
	setCabeza(NULL);
	setFinal(NULL);
}


Cola::~Cola()
{
}

void Cola::setCabeza(Nodo * x)
{
	cabeza = x;
}

Nodo * Cola::getCabeza()
{
	return cabeza;
}

void Cola::setFinal(Nodo * x)
{
	final = x;
}

Nodo * Cola::getFinal()
{
	return final;
}

void Cola::sumarLongitud()
{
	longitud++;
}

void Cola::restarLongitud()
{
	longitud--;
}

bool Cola::esVaciaCola(Cola)
{

	if (getCabeza() == NULL && getFinal() == NULL) {
		return false;
	}
	else {
		return true;
	}

}




//Seguir desde aqui.

void Cola::insertarElem(int x)
{
	Nodo *aux;
	aux = new Nodo(x);
	if (getCabeza()==NULL) {

		cabeza = aux;
		cabeza->setSig(NULL);
		final = aux;
	}
	else {
		final->setSig(aux);
		aux->setSig(NULL);
		final = aux;
	}
	cout << endl << "Nodo ingresado." << endl << endl;
	sumarLongitud();
}

void Cola::atender()
{
}

void Cola::eliminarElem(int x)
{
	int breaker = 0;
	int valor = x;
	bool check = false;
	Nodo *actual = NULL;
	Nodo *anterior = NULL;

	actual = getCabeza();

	if (getCabeza() != NULL) {
		cout << endl << endl;
		while (actual != NULL || breaker != 1) {
			if (actual->getValor() == valor) {
				if (actual == getCabeza()) {
					setCabeza(cabeza->getSig());
				}
				else if (actual == getFinal()) {
					anterior->setSig(NULL);
					setFinal(anterior);
				}
				else {
					anterior->setSig(actual->getSig());
				}
				breaker = 1;
			}
			anterior = actual;
			actual = actual->getSig();
		}
		cout << endl << endl;
		if (check == false) {
			cout << "El elemento " << valor << "ha sido eliminado de la cola." << endl << endl;
		}
	}
	else {
		cout << endl << "No hay elementos en la cola." << endl << endl;
	}

}

int Cola::ultimoElem()
{
	int valor = NULL;
	Nodo *actual = NULL;
	actual = getCabeza();

	if (getCabeza() != NULL) {
		valor = getCabeza()->getValor();
	}

	return valor;
}

int Cola::getLongitud()
{
	return longitud;
}

void Cola::mostrarCola()
{
	Nodo *actual = NULL;
	actual = getCabeza();
	if (getCabeza() != NULL) {
		cout << endl << "Los elementos de la cola son:" << endl << endl;
		while (actual != NULL) {
			cout << actual->getValor() << endl;
			actual = actual->getSig();
		}
		cout << endl <<  "La longitud de la cola es: " << getLongitud() << endl << endl;
	}
	else {
		cout << endl << "No hay elementos en la cola." << endl << endl;
	}

}

void Cola::buscarElemento()
{
	int valor = 0;
	cout << endl << "Inserte el elemento que desea buscar:" << endl << endl;
	cin >> valor;
	bool check = false;
	Nodo *actual = NULL;
	actual = getCabeza();

	if (getCabeza() != NULL) {
		cout << endl << endl;
		while (actual != NULL) {
			if (actual->getValor() == valor) {
				cout << "Elemento encontrado: " << valor << endl << endl;
				check = true;
			}
			actual = actual->getSig();
		}
		cout << endl << endl;
		if (check == false) {
			cout << "Valor no encontrado" << endl << endl;
		}
	}
	else {
		cout << endl << "No hay elementos en la cola." << endl << endl;
	}
}
