// jsonarch.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Practica 1   5/9/2019  Primer Parcial              *
* El siguiente programa lee lo que son objetos json  *
*
*****************************************************/

#include <iostream>
#include <Windows.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

int main()
{
	json j;
	j["pi"] = 3.141592;
	j["feliz"] = true;
	j["nombre"] = "Pedro";
	j["vacio"] = nullptr;
	j["nuevo"]["valor"] = 25;
	j["lista"] = { 1,0,3 }; //Definir un arreglo
	j["nuevo"]["olista"] = { 0,1,2,3 };
	j["objeto"] = { {"moneda","USD"},{"valor",18.91} };
	cout << j << endl;

	json j2 = { {"pi",3.141592},
			{"feliz",true},
           	{"nombre","Pedro"},
	        {"vacio",nullptr},
	        {"nuevo",{ {"valor",25}}},
	        {"lista",{1,0,3}},
	        {"objeto",{{"moneda","USD"},{"valor",18.91}}}
	};

	cout << j2 << endl;

}


