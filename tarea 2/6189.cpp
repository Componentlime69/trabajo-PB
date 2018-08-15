#include <iostream>
using namespace std;
int main() {
	char nombre[20];
	char apellido[20];
	int edad;
	char telefono[20];

	cout << "Apellido" << endl;
	cin >> apellido;

	cout << "Nombre" << endl;
	cin >> nombre;


	cout << "Edad" << endl;
	cin >> edad;

	cout << "Telefono" << endl;
	cin >> telefono;

	cout << "Nombre:" << apellido
		<< ", " << nombre
		<< ". Edad: " << edad
		<< ". Telefono: +52 " << telefono << endl; 

	system("pause");
}