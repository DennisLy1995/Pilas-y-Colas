#include "pch.h"
#include "Pila.h"
#include <iostream>
using namespace std;



Pila::Pila()
{
	setCabeza(NULL);
}

Pila::~Pila() {
}

void Pila::setCabeza(Nodo * x) {
	cabeza = x;
}

Nodo* Pila::getCabeza() {
	return cabeza;
}

void Pila::insertarElem(int x) {
	Nodo * aux;
	aux = new Nodo(x);

	aux->setSig(getCabeza());
	setCabeza(aux);
	cout << endl << "Elemento ingresado en la pila." << endl << endl;
	sumarLongitud();
}

void Pila::mostrarPila() {
	Nodo *actual = NULL;
	actual = getCabeza();
	if (getCabeza() != NULL) {
		cout << endl << "Elementos de la pila: " << endl << endl;
		while (actual != NULL) {
			std::cout << actual->getValor() << endl;
			actual = actual->getSig();
		}
		std::cout << endl;
	}
	else {
		std::cout << endl << "No hay elementos en la pila." << endl << endl;
	}
}

int Pila::RetirarElemTope() {
	int valor = 0;
	if (getCabeza() != NULL) {
		Nodo * aux;
		aux = getCabeza();
		valor = aux->getValor();
		setCabeza(getCabeza()->getSig());
		restarLongitud();
	}
	else {
		cout << "No hay datos registrados dentro de la Pila." << endl;
	}
	return valor;
}







//Implementacion de los metodos extra

void Pila::sumarLongitud() {
	longitud++;
}

void Pila::restarLongitud() {
	longitud = longitud--;
}

int Pila::getLongitud() {
	return longitud;
}

/*Pila Pila::pilaEnt() {

}*/

int Pila::topePila() {
	return (cabeza->getSig())->getValor();
}

bool Pila::esVaciaPila() {
	if (getCabeza() == NULL) {
		return false;
	}
	else {
		return true;
	}
}














