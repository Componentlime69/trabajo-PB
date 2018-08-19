#include <string>
#include <iostream>
#include <math.h>
using namespace std;
void main() {
	locale::global(locale("spanish"));

	int n;
	int D;
	cout << "numero de diagonales D de un poligono regular de n lados.\n\n";
	cout << "Escriba el numero de lados\n";
	cin >> n;
	D = (n*(n - 3)) / 2;
	cout << "El numero de diagonales es: " << D; 
	cout << "\nfin del programa.\n";
	
	system("pause");

}