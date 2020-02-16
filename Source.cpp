#include <iostream>
#include "Editor.h"


using namespace std;

void inicio();


void menuBasico() {
	cout << "UNIVERSIDAD DE SAN CARLOS DE GUATEMALA\n";
	cout << "FACULTAD DE INGENIERÍA\n";
	cout << "ESTRUCTURA DE DATOS\n";
	cout << "PRACTICA 1\n";
	cout << "MANOLO RICARDO RAMIREZ MAZARIEGOS\n";
	cout << "201503933\n\n";
	cout << "MENU\n";
	cout << "1. CREAR ARCHIVO\n";
	cout << "2. ABRIR ARCHIVO\n";
	cout << "3. ARCHIVOS RECIENTES\n";
	cout << "4. SALIR \n";


}

int main() {
	inicio();
	

	 
}

void inicio() {
	limpiarp();
	int opt = 0;
	menuBasico();

	while (opt != 4) {
		
		cin >> opt;
		switch (opt) {
		case 1:
			cambiarventana(1);
			cout << "Ventana de escritura\n\n";
			ingresandotexto();

			
			break;
		case 2:
			cambiarventana(2);
			cout << "Ventana de abrir\n\n";
			abrir();
			
			break;
		case 3:

			cambiarventana(3);
			cout << "Ventana de recientes\n\n";
			

			break;
		case 4:
			
			break;
		default:
			cout << "Por favor ingrese un número de 1 a 4\n\n";
			system("Pause");
			

		}

	}
}
