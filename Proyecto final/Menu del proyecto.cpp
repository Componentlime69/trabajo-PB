#include<iostream>
using namespace std;

int opcion;
void AltAlumnos();
void AltCal();
void EdAlumnos();
void BAlumnos();
void ArchTexto();
void Manual();
void Listcal();
void salir();

void main() {
	locale::global(locale("spanish"));
	system("cls");
	cout << "----------->Menú<-----------" << endl;
	cout << "1. Alta de alumnos" << endl;
	cout << "2. Alta de calificaciones" << endl;
	cout << "3. Edicion de alumnos" << endl;
	cout << "4. Borrar alumnos" << endl;
	cout << "5. Archivo de texto" << endl;
	cout << "6. Manual de usuario" << endl;
	cout << "7. lista de alumnos y calificaciones" << endl;
	cout << "8. Salir." << endl;
	cout << "Elija una opcion\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1: AltAlumnos();
		break;
	case 2: AltCal();
		break;
	case 3: EdAlumnos();
		break;
	case 4: BAlumnos();
		break;
	case 5: ArchTexto();
		break;
	case 6: Manual();
		break;
	case 7: Listcal();
		break;
	case 8: salir();
		break;
	default: cout << "Esa no es una opcion valida" << endl;
		system("pause >nul");
		main();
		break;
	}
	
}
void AltAlumnos() {
	system("cls");
	cout << "estas en la opcion alta de alumnos" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void AltCal() {
	system("cls");
	cout << "estas en la opcion alta de Calificacion" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void EdAlumnos() {
	system("cls");
	cout << "estas en la opcion Edicion de alumnos" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void BAlumnos() {
	system("cls");
	cout << "estas en la opcion Borrar alumnos" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void ArchTexto() {
	system("cls");
	cout << "estas en la opcion Archivos de texto" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void Manual() {
	system("cls");
	cout << "estas en la opcion Manual de Usuario" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void Listcal() {
	system("cls");
	cout << "estas en la opcion Lista de Calificacion" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "aun no esta disponible esa opcion" << endl;
		system("pause > nul");
		main();
	}
	main();
}
void salir() {
	system("cls");
	cout << "¿Esta seguro que desea salir?\n";
	cout << "1. Si.\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		return;
	}
	main();
}