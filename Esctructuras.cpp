#include <string>
#include <iostream>
#include "Editor.h"

using namespace std;


class NodoChar {
public:
	char ch;
	NodoChar *next;
	NodoChar *prev;

	NodoChar(char c) {
		ch = c;
		next = NULL;
		prev = NULL;
	}
};


class ListaChar {
public:

	NodoChar * primero = 0;
	NodoChar *ultimo = 0;


	void agregarInicio(char c) {
		NodoChar *aux = new NodoChar(c);
		if (primero == 0) {
			primero = aux;
			ultimo = aux;
			ultimo->next = NULL;
			ultimo->prev = NULL;
		}
		else {
			aux->next = primero;
			primero->prev = aux;
			aux->prev = NULL;
			primero = aux;
		}

	}

	void eliminarUltimo() {
		NodoChar *aux = ultimo;

		ultimo->prev->next = NULL;
		ultimo->prev = NULL;

	}


	void mostrar() {
		NodoChar *aux = primero;
		while (aux->next != NULL) {
			cout << aux->ch << "  es el char es este nodo \n";
			aux = aux->next;
		}

	}


	int  buscar(char c) {
		NodoChar *aux = primero;
		int pos = 0;
		while (aux->ch != c) {
			aux = aux->next;
			pos = pos + 1;
		}
		return pos;
	}
};


class Historial {
	string pabuscada;
	string reemplazo;
	bool estado;

};

