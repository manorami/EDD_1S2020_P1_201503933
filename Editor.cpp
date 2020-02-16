#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#pragma warning(disable:4786)
#include <string>
#include <iostream>
#include "Editor.h"
#include <Windows.h>;

using namespace std;

void lectura();
void cambiarventana(int n);
void abrir();

int main1() {

	lectura();
	
	return 0;

}


void lectura() {
	ifstream archivo;
	string linea;
	archivo.open("C:\\Pruebas\\doc1.txt", ios::in); // abrimos archivo en modo lectura
	
	if (archivo.fail()) {
		cout << "No se pudo abrir el programa";
	}

	while (!archivo.eof()) {//mientras no se el final de archivo
		getline(archivo, linea);
		cout << linea << endl;
	}

}


void crear() {
	ofstream archivo;
	string nombreArchivo;

	cout << "Digite nombre de archivo";
	getline(cin, nombreArchivo);


	archivo.open(nombreArchivo.c_str(), ios::out);

	if (archivo.fail()) {
		cout << "no se puede abrir el archivo";
	}
	archivo << "escribir en el archivo";

	archivo.close();//cerrar archivo
}


void cambiarventana(int n) {
	if (n == 1) {
		system(" color f2");
	}
	else if (n == 2) {
		system(" color fb");
	}
	else if (n==3){
		system(" color f5 ");
	}
	else {
		system(" color 0f");
	}
	system("cls");

}

void limpiarp() {
	system("cls");
}

void ingresandotexto() {
	int opt1 = -1;
	while (opt1 = 0) {
		if (GetAsyncKeyState(74) & 0x8000) {
			cout << "presione j\n";
		}
		else if(GetKeyState('S') < 0 ){
			cout << "presione s\n";
		}


	}
}

void abrir() {
	string t = "";
	cout << "Ingrese el nombre del archivo que quiere abrir\n";
	cin >> t;

	ifstream archivo;
	string linea;
	archivo.open(t+".txt", ios::in); // abrimos archivo en modo lectura

	if (archivo.fail()) {
		cout << "No se pudo abrir el programa\n\n";
		system("pause");
		inicio();
	}

	while (!archivo.eof()) {//mientras no se el final de archivo
		getline(archivo, linea);
		cout << linea << endl;
	}

	


}