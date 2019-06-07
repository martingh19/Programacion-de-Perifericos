// exam1p.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class persona {
private:
	string nombre;
	string edad;
	string genero;
	string direccion;
	string telefono;
	string email;
	string muestraGen() {
		if (genero == "M")return "Hombre";
		else  return "Mujer";
	}
public:
	persona(string archivo);
	void MuestraArchivo();
};
persona::persona(string archivo) {
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
	string delimitador = ",";
	string token, cadena1[6];
	int i = 0;
	size_t pos = 0; //Tipo entero
	while ((pos = texto.find(delimitador)) != string::npos) {
		cadena1[i] += texto.substr(0, pos);
		texto.erase(0, pos + delimitador.length());
		i++;
	}
	cadena1[5] += texto;
	nombre = cadena1[0];
	edad = cadena1[1];
	genero = cadena1[2];
	direccion = cadena1[3];
	telefono = cadena1[4];
	email = cadena1[5];
}

void persona::MuestraArchivo() {
	cout << " Nombre: " << nombre << " Edad: " << edad << endl;
	cout << "Genero :" << " | " << muestraGen() <<" |"<< endl;
	cout << " Direccion: " << direccion << " Telefono: " << telefono << endl;
	cout << " email: " << email << endl;
}
int main()
{
	persona Alumno("c:\\users\\pc\\Documents\\prueba1");
	Alumno.MuestraArchivo();
}