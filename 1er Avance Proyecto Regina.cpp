#include <iostream> <stdio.h>
// 1er Avance Programación Básica c:
//Regina Osoria Gutiérrez
using namespace std;
int main() {

	int opc, numit, clasifit, precioit, sn;
	char nameit[20], descit[50], genit [15], consit [25];

	cout << "\t GameStop!! c: " << endl; //Nombre de Tienda
	cout << "Menu de opciones:" << endl;
	cout << "1.- Alta de item." << endl << "2.- Modificación de item." << endl << "3.- Baja de item." << endl;
	cout << "4.- Lista de items." << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "\tNo. de item:" << endl;
		cin >> numit;
		cout << "\tTitulo del item:" << endl;
		cin >> nameit;
		cout << "\tDescripcion del item:" << endl;
		cin >> descit;
		cout << "\tGenero del item:" << endl;
		cin >> genit;
		cout << "\tClasif. de edad del item:" << endl;
		cin >> clasifit;
		cout << "\tConsola compatible al item:" << endl;
		cin >> consit;
		cout << "\tPrecio del item:" << endl;
		cin >> precioit;
		cout << "\t¿Desea registrar otro item?" << endl << "1.- Si." << endl<<"2.- No." << endl;
		cin >> sn;
		if (sn == 1) {
			return main () ;
		}
		else { return 0;  }

		 
		


		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
	system ("cls"); // Limpiar pantalla
	exit(1);
}
