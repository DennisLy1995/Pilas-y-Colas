#include "pch.h"
#include "Pila.h"
#include "Cola.h"
#include <iostream>
using namespace std;

int main()
{
	Cola *cola = new Cola();
	Pila *pila = new Pila();
	int menu = 0;
	int breaker = 0;

	int lecturas = 0;

	while (breaker == 0) {
		std::cout << "=============================" << endl << "Ejercicio: Pilas y colas." << endl << endl
			<< "1.Insertar elemento en la cola." << endl
			<< "2.Mostrar elementos de la cola." << endl 
			<< "3.Buscar elemento en la cola." << endl
			<< "4.Ultimo elemento de la cola." << endl
			<< "5.Eliminar elemento de la cola." << endl
			<< "6.Insertar elemento en la pila." << endl
			<< "7.Mostrar elementos de la pila." << endl
			<< "8.Retirar ultimo elemento de la pila." << endl
			<< "9.Mostrar el ultimo elemento de la pila." << endl
			<< "10.Retirar ultimo elemento de la pila y insertarlo en la cola." << endl
			<< "11.Retirar ultimo elemento de la cola y insertarlo en la pila." << endl
			<< "12.Salir." << endl
			<< endl << "=============================" << endl;

		std::cin >> menu;

		switch (menu) {
			
		case 1://insertar elemento en la cola.
			std::cout << endl << "Digite el numero que desea insertar en la cola." << endl << endl;
			std::cin >> lecturas;
			cola->insertarElem(lecturas);
			break;
		case 2://Imprimir elementos de la cola.
			cola->mostrarCola();
			break;
		case 3://Buscar un elemento dentro de la cola.
			cola->buscarElemento();
			break;
		case 4://Mostrar el ultimo elemento de la cola.
			if (cola->ultimoElem() != NULL) {
				cout << endl << endl << "El ultimo elemento de la cola es: " << cola->ultimoElem() << endl << endl;
			}
			else {
				cout << endl << endl << "No hay elementos en la cola." << endl << endl;
			}
			break;
		case 5://Eliminar un elemento de la cola.
			std::cout << endl << "Digite el numero que desea eliminar en la cola." << endl << endl;
			std::cin >> lecturas;
			cola->eliminarElem(lecturas);
			break;
		case 6://Insertar en la pila.
			std::cout << endl << "Digite el numero que desea insertar en la pila." << endl << endl;
			std::cin >> lecturas;
			pila->insertarElem(lecturas);
			break;
		case 7://Imprimir la pila.
			pila->mostrarPila();
			if (pila->getLongitud()!=0) {
				cout << endl << "La longitud de la pila es: " << pila->getLongitud() << endl;
			}
			break;
		case 8://Retirar el ultimo elemento de la pila.
			pila->RetirarElemTope();
			break;
		case 9:
			cout << endl << "El elemento al tope de la pila es: " << pila->topePila() << endl;
			break;
		case 10://Introducir ultimo elemento de la pila dentro de la cola.
			cola->insertarElem(pila->RetirarElemTope());
			cout << endl << "El elemento al tope de la pila, se ha movido a la cola." << endl;
			break;
		case 11://Introducir dentro de la pila el ultimo elemento de la cola.
			pila->insertarElem(cola->atender());
			cout << endl << "El elemento al tope de la cola, se ha movido a la pila." << endl;
			break;
		case 12://Salir.
			breaker = 1;
			break;
			
		}

	}

	
	

}