// conarchivos02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Practica No.2 5/14/2019 Primer Parcial             *
* Flujo de Datos entre cadena de caracteres,         *
* El siguiente programa captura n datos de           *
* personas, los escribe en un archivo y los muestra. *
*****************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string LeeTxt(string archivo);
bool escribeTxt(string archivo,string txt);
string capturaTxt();

int main()
{
	string archivo,contenido,ejemploo;
	int num;
	ejemploo = " ";
	cout << " Cuantos datos de personas quisiera agregar: ";
	cin >> num;
	for (int i = 0; i < num; i++) {
		cout <<" "<<i+1 << " persona" << endl;
		ejemploo += ") ";
		ejemploo += capturaTxt();
	}
	archivo = "textoprueba.txt";
	escribeTxt(archivo, ejemploo);
	cout << endl;
	contenido = LeeTxt(archivo);
	cout << endl << " A continuacion mostraremos el archivo " << archivo << endl;
	cout << contenido<<endl;
	system("pause");
	return 0;
}

string LeeTxt(string archivo) { //Funcion para leer un texto.
	string texto, linea;
	ifstream miArchivo(archivo);
	if (miArchivo.is_open()) {
		texto = "";
		while (getline(miArchivo, linea)) {
			texto += linea;
		}
		miArchivo.close();
	}
	else {
		cout << "no se encontro archivo";
	}
	return texto;
}

bool escribeTxt(string archivo, string txt) {//Función que escribe.
	bool resu = false;
	ofstream elArchivo(archivo);
	if (elArchivo.is_open()) {
		elArchivo << txt;
		elArchivo.close();
		resu = true;
	}
	return resu;
}

string capturaTxt() {//Función para capturar txt.
	stringstream ss;
	string nombre,apelpat,apelmat;
	int edad;
	double peso,estatura;
	cout << "Escriba su Nombre: ";
	while (getchar() != '\n');
	getline(cin,nombre);
	cout << " Digite su apellido paterno: ";
	getline(cin,apelpat);
	cout << " Digite su apellido materno ";
	getline(cin, apelmat);
	cout << " Digite su edad: ";
	cin >> edad;
	cout << " Digite su peso: ";
	cin >> peso;
	cout<<" Digite su estatura: ";
	cin >> estatura;
	ss << nombre << " " << apelpat << " " << apelmat <<","<<edad<<","<<peso<<","<<estatura<< endl;
	return ss.str();
}

