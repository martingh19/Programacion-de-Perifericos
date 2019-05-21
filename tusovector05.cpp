// tusovector05.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos H361         *
*          Gutiérrez Hernández Martín 1830028        *
******************************************************
* Tarea No.6  5/20/2019   Primer Parcial             *
* Uso y Metodos de la clase <Vector>                 *
*****************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector sin inializar ni indicar tamaño.
	vector<double>arreglo_1;

	//vector con inicialización y tamaño.
	vector <double > arreglo_2(5, 56);

	for (unsigned int i = 0; i < arreglo_2.size(); i++)
	{ //con el mtodo .size() se obtiene el tamaño del vector
		cout << arreglo_2[i] << endl;
	}

	//Metodos Usados para la variable de tipo vector.
	//1.Copiar el contenido entre vectores.
	vector<int>a(5, 23);
	vector<int>b;

	b = a;
	for (unsigned int i = 0; i < b.size(); i++){ 
		cout << b[i] << endl;
	}

	//2.Conocer la longitud de un vector.
	vector<int> g(17, 9);
	int num_elementos;//declaramos un entero para almacenar el tamaño
	num_elementos = g.size();//usamos el mtodo .size() 
	cout << "El numero de elementos del vector g es:  " << num_elementos << endl;


	//3.Modificar el tamaño de nuestro vector. Usando la función .resize()
	vector<int> h(5, 9);
	int rty;
	cout << "El tamano anterior era: " << h.size() << endl;
	cout << "Que tamano quisiera que tuviera el vector:" << endl;
	cin >> rty;
	h.resize(rty);//Función resize()
	cout << "El nuevo tamano es: " << h.size() << endl;


	//4.Eliminar elementos de nuestro tipo vector.
	vector<int> A(10);
	for (int i = 0; i < 10; i++)
	{
		A[i] = i + 1;
	}
	cout << "la longitud total es: " << A.size() << endl;//se muetra la longitud antes del borrado
	A.erase(A.begin() + 3, A.begin() + 6);//borramos los elemetos entre las posciones 3 a 6
	cout << "La nueva longitud es: " << A.size() << endl;
    for (int i = 0; i < A.size(); i++)//mostramos el nuevo orden de los elementos
		cout << A[i] << " ";
	cout << endl << endl;
	


	//5.Insertar elementos en nuestro tipo Vector. " .push_back(nuevo_elemento).
	vector<int> u(5, 9);

	//insertamos el valor 2 en la tercera posición del array
	u.insert(u.begin() + 3, 2);
	//mostramos el nuevo vector con un 2 que se insertó antes
	for (unsigned int i = 0; i < u.size(); i++)
		cout << u[i] << "  ";



	system("pause");
	return 0;
}
