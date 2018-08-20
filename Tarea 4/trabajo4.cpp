#include <iostream>
#include <math.h>
using namespace std;
void main() {

	float x;
	float y;
	float r;
	float a;

	cout << "Escriba el radio\n";
	cin >> r;
	cout << "Escriba el angulo\n";
	cin >> a;
	x = r * cos(a);
	y = r * sin(a);
	cout << "las coordenadas son: (" << x;
	cout << "," << y; 
	cout << ")\n";
	system("pause");
}