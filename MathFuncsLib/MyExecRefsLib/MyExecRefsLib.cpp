// MyExecRefsLib.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* El siguiente programa utiliza una libreria estatica*
* "MathFuncsLib.h" para realizar operaciones basicas.*
*****************************************************/
#include <iostream>
#include "MathFuncsLib.h"
using namespace std;

int main()
{
		double a = 43.67;
		int b = 10;

		cout << "a + b = " <<
			MathFuncs::MyMathFuncs::Add(a, b) << endl;
		cout << "a - b = " <<
			MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
		cout << "a * b = " <<
			MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
		cout << "a / b = " <<
			MathFuncs::MyMathFuncs::Divide(a, b) << endl;

		return 0;
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
