#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
//2do Avance Programación Básica c:
//Regina Osoria Gutiérrez

using namespace std;

struct tiendita
{
	int numit;
	float precioit;
	string nameit, descit, genit, consit, clasifit;
};

tiendita items[3];

int main()
{

	int opc, i = 0;

	printf("\n\tGameStop!! c:"); //Nombre de tienda
	printf("\nMenu de opciones:");
	printf("\n1.- Alta de item. \n2.- Modificacion de item. \n3.- Baja de item. \n4.- Lista de items.");
	printf("\n5.- Limpiar pantalla.\n6.- Salir. \n");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1: //ALTA

		for (int i = 0; i < 3; i++)
		{
			printf("\n\tNo. del nuevo item:");
			scanf_s("%d", &items[i].numit);
			printf("\n\tTitulo del item:");
			cin.ignore();
			getline(cin, items[i].nameit);
			printf("\n\tDescripcion del item:");
			getline(cin, items[i].descit);
			printf("\n\tGenero del item:");
			getline(cin, items[i].genit);
			printf("\n\tClasif. de edad del item:");
			getline(cin, items[i].clasifit);
			printf("\n\tConsola compatible al item:");
			getline(cin, items[i].consit);
			printf("\n\tPrecio del item:");
			scanf_s("%f", &items[i].precioit);
		}
		return main();
		break;

	case 2: //MOD
		break;

	case 3: //BAJA
		break;

	case 4: //LISTA
		for (int i = 0; i < 3; i++)
		{
			printf("\n\tNUEVO ITEM");
			printf("\nNo. del nuevo item: %d", items[i].numit);
			printf("\nTitulo del item: %s", items[i].nameit.c_str());
			printf("\nDescripcion del item: %s", items[i].descit.c_str());
			printf("\nGenero del item: %s", items[i].genit.c_str());
			printf("\nClasif. de edad del item: %s", items[i].clasifit.c_str());
			printf("\nConsola compatible al item: %s", items[i].consit.c_str());
			printf("\nPrecio del item: %f", items[i].precioit);
		}
		return main();
		break;

	case 5: //LIMPIAR PANTALLA
		system("cls");
		return main();
		break;

	case 6: //SALIR
		exit(1);
		break;
	}
}