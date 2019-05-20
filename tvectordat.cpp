// tvectordat04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Practica No.4  5/19/2019  Primer Parcial           *
* Uso de vectores, El siguiente programa guarda los  *
* datos en un vector y despues los muestra.          *
*****************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct alumno {//Creación de estructura.
	string codigo;
	string nombre;
	int edad;
}talumno;

int main()
{
	string respuesta;
	int i = 1;
	talumno * apt;
	vector <talumno> listado;
	do {
		apt = new talumno;//Creando un nuevo alumno.
		cout << endl << " Captura datos de alumno" << endl;
		cout << " Alumno" << i << endl;
		cout << " Caputura el codigo:";
		cin >> apt->codigo;
		cout << "Captura el nombre: ";
		cin >> apt->nombre;
		cout << " Captura edad: ";
		cin >> apt->edad;
		listado.push_back(*apt);
		cout << " Quiera agregar otro alumno: (si/no) ";
		while (getchar() != '\n');
		getline(cin, respuesta);
		i++;
	} while (respuesta == "si");
	cout << endl;
	cout << "........ Mostrandro datos......." << endl;
	for (talumno x : listado) {
		cout << " codigo:  " << x.codigo << " Nombre:" << x.nombre << "  Edad:" << x.edad << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
