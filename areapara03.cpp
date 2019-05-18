// areapara03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Practica No.3  5/18/2019  Primer parcial           *
* El siguiente programa calcula el volumen y area    *
* total de un paralelepipedo por medio de clases y   *
* objetos.                                           *
*****************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo {//Clase padre.
private:
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double Area();
	double getLadoH();
	double getLadoL();
};

class Volumen : public Rectangulo {
private:
	double longitud;
public:
	Volumen(double, double, double);
	double vol();
	double AreaT();
};

Rectangulo::Rectangulo(double h, double l) {//Establecemos valores a los atributos.
	alto = h;
	ancho = l;
}

Volumen::Volumen(double h, double l, double a) : Rectangulo(h,l){
	longitud = a;
}

double Rectangulo::getLadoH() {
	return alto;
}
double Rectangulo::getLadoL() {
	return ancho;
}


double Rectangulo::Area() {
	return alto * ancho;
}

double Volumen::vol() {
	return Area() * longitud;
}

double Volumen::AreaT() {
	return 2 * ((getLadoH() * getLadoL()) + (getLadoL() * longitud) + (getLadoH() * longitud));
}

int main()
{
	double a, b, c;
	cout << "    Introdusca las medidas de su paralelepipedo" << endl;
	cout << " Cuales son las medidas de su base:" << endl;
	cout << " Alto: ";
	cin >> a;
	cout << " Ancho: ";
	cin >> b;
	cout << " Cual es su altura: ";
	cin >> c;

	Volumen parale(a, b, c);
	Rectangulo lado(a, b);
	cout << endl;
	cout << " El area de la base es de: " << lado.Area() <<" cm2"<< endl;
	cout << " Su volumen es de : " << parale.vol() <<" cm3"<< endl;
	cout << " Su area total es de: " << parale.AreaT() <<" cm2"<< endl;

	system("pause");
	return 0;
}

