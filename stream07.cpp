// stream07.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Praactica No.? 6/4/2019  Primer parcial            *
* 
*****************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cadena, token,cadena1;
	cout << "Captura una cadena: ";
	getline(cin, cadena);
	cout << " la cadena mide " << cadena.length()<<" bytes"<< endl;
	string delimitador = " ";
	size_t pos = 0; //Tipo entero
	while ((pos = cadena.find(delimitador)) != string::npos) {
		token = cadena.substr(0, pos);
		//cout << token << endl;
		cadena1 += token;
		cadena.erase(0, pos + delimitador.length());
		cadena1 += '\n';
	}
	cadena1 += cadena;
	cout << cadena1 << endl;
	system("pause");
	return 0;
}