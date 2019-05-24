// contrectparale04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Rectangulo {
private:
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double Area();
	double al();
	double an();
};

class Volumen : public Rectangulo {
private:
	double longitud;
public:
	Volumen(double, double, double);
	double Vol();
	double cara1();
	double cara2();
	double cara3();
	double areaT();
};

Rectangulo::Rectangulo(double h, double a) {
	alto = h;
	ancho = a;
}
Volumen::Volumen(double h, double a, double l) : Rectangulo(h,a) {
	longitud = l;
}
double Rectangulo::Area() { return alto * ancho;}
double Rectangulo::al() { return alto;}
double Rectangulo::an() { return ancho;}
double Volumen::Vol() { return longitud * Area();}
double Volumen::cara1() { return Area();}
double Volumen::cara2() { return longitud * al(); }
double Volumen::cara3() { return longitud * an(); }
double Volumen::areaT() { return 2 * (cara1() + cara2() + cara3()); }

int main()
{
	double a, b, c;
	cout << "   A continuacion ingrese las medidas de su paralelepipedo\n";
	cout << " cuales son las medidas de su base(en cm):\n alto: ";
	cin >> a;
	cout << " su ancho: ";
	cin >> b;
	cout << " cual es su altura: ";
	cin >> c;
	Volumen fig(a, b, c);
	cout << ".............Estos son los resultados............" << endl;
	cout << " La cara 1 de: " << a << "cm x " << b << "cm tiene: " << fig.cara1() << " cm2" << endl;
	cout << " La cara 2 de: " << a << "cm x " << c << "cm tiene: " << fig.cara2() << " cm2" << endl;
	cout << " La cara 3 de: " << b << "cm x " << c << "cm tiene: " << fig.cara3() << " cm2" << endl;
	cout << " El area total es: " << fig.areaT() << " cm2" << endl;
	cout << " Su volumen es de: " << fig.Vol() << " cm3" << endl;
}
