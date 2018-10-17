#include<iostream>
#include<string>
#include<cctype>
#include <stdio.h> 

using namespace std;

int opcion, i;
bool dato;
char o[100];
void AltAlumnos();
void Modif();
void EdAlumnos();
void BAlumnos();
void ArchTexto();
void Manual();
void Listcal();
void salir();
void menu();
int c = 0;
struct datos {
	string nombre;
	string apellidos;
	string correo;
	char telefono[12];
	char matricula[17];
	string direccion;
	float cal1;
	float cal2;
	float cal3;
};
datos alumno[100];
void main() {
	locale::global(locale("spanish"));
	menu();
	system("pause > nul");
}
void menu() {
	system("cls");
	cout << "----------->Menú<-----------" << endl;
	cout << "1. Alta de alumnos" << endl;
	cout << "2. Edicion de alumnos" << endl;
	cout << "3. Borrar alumnos" << endl;
	cout << "4. Archivo de texto" << endl;
	cout << "5. Manual de usuario" << endl;
	cout << "6. lista de alumnos y calificaciones" << endl;
	cout << "7. Salir." << endl;
	cout << "Elija una opcion\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1: AltAlumnos();
		break;
	case 2: EdAlumnos();
		break;
	case 3: BAlumnos();
		break;
	case 4: ArchTexto();
		break;
	case 5: Manual();
		break;
	case 6: Listcal();
		break;
	case 7: salir();
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
	cout << "1. Dar alta de alumnos\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		while (1) {
			cout << "Favor de ingresar los datos\n";
			cout << "Nombre(s) del alumno(a)\n";
			cin.ignore();
			getline(cin, alumno[c].nombre);
			cout << "\nApellidos del alumno(a)\n";
			//cin.ignore();
			getline(cin, alumno[c].apellidos);
			cout << "\nCorreo electronico\n";
			cin.ignore();
			while (1) {
			correo:
				cin.ignore();
				getline(cin, alumno[i].correo);
				string str = alumno[i].correo;
				int encontrar1 = str.find('@');
				int encontrar2 = str.find('.com');
				if ((encontrar1 >= 0) && (encontrar2 >= 0)) {

					break;
				}
				else {
					cout << "El correo es invalido porfavor introdusca una opcion valida";
					system("pause>nul");
					cout << "														" << endl;
					goto correo;
					break;
				}
			}

			cout << "\nTelefono celular\n";
			cin.ignore();
			cin >> alumno[c].telefono;
			cout << "\nIngrese su matricula\n";
			/*cin.ignore();*/
			cin >> alumno[c].matricula;
			cout << "\nIngrese su direccion\n";
			cin.ignore();
			getline(cin, alumno[c].direccion);
			cout << "\nIngrese sus calificaciones\n";
			cout << "\nCalificacion 1\n";
			cin.ignore();
			cin >> alumno[c].cal1;
			cout << "\nCalificacion 2\n";
			cin >> alumno[c].cal2;
			cout << "\nCalificacion 3\n";
			cin >> alumno[c].cal3;
			c = c + 1;
			cout << "\ndatos guardados exitosamente\n";
			cout << "Desea agregar a un alumno mas?\n";
			cout << "1. Ni			2. No\n";
			cin >> opcion;
			if (opcion == 1) {
				AltAlumnos();
			}
			else {
				break;
			}
			menu();
		}


	}
	main();
}

void Modif() {

	cin.ignore();
	system("cls");
	cout << "Escriba el numero de la matricula que desea modificar\n";
	cin >> o;

	int i = 0;
	while (i < c) {
		if (strcmp(alumno[i].matricula, o) == 0) {
			cout << "Encontré a: " << endl;
			cout << "Nombre y apellido: " << alumno[i].nombre << " " << alumno[i].apellidos << endl;
			cout << "¿Qué deseas modificar?" << endl;
			cout << "1. Matrícula \n2. Nombre \n3. Apellido \n0. Nada" << endl;
			cin >> opcion;

			switch (opcion)
			{
			case 1:
				cout << "Ingresa nueva mátricula: ";
				cin >> alumno[i].matricula;
				break;
			case 2:
				cin.ignore();
				cout << "Ingresa nuevo nombre: ";
				getline(cin, alumno[i].nombre);
				break;
			case 3:
				cout << "Ingresa nuevo apellido: ";
				cin >> alumno[i].apellidos;
				break;
			default:
				break;
			}
			if (opcion != 0) {
				cout << "Registro modificado: " << endl;
				cout << "Nombre y apellido: " << alumno[i].nombre << " " << alumno[i].apellidos << endl;

				cout << "¿Qué deseas modificar?" << endl;
				cout << "1. Matrícula \n2. Nombre \n3. Apellido \n0. Nada" << endl;
			}
			else {
				cout << "No modificaste nada." << endl;
			}
			break;
		}
		i++;
		break;
	}
	system("pause>nul");
	menu();
}
void EdAlumnos() {
	cin.ignore();
	system("cls");
	cout << "estas en la opcion Edicion de alumnos" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Hacer ajustes\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		Modif();
	}

	main();
}

void BAlumnos() {
	cin.ignore();
	system("cls");
	cout << "estas en la opcion Borrar alumnos" << endl;
	cout << "que desea hacer?\n";
	cout << "1. Borrar alumno\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "¿Qué matrícula buscas? " << endl;
		cin >> o;

		int i = 0;
		while (i < c) {
			if (strcmp(alumno[i].matricula, o) == 0) {
				cout << "Encontré a: " << endl;
				cout << "Nombre y apellido: " << alumno[i].nombre << " " << alumno[i].apellidos << endl;
				cout << "¿Eliminar a " << alumno[i].matricula << "?" << endl;
				cout << "1. Sí \n2. No" << endl;
				cin >> opcion;

				if (opcion == 1 && c != 0) {
					for (int j = i; j < c; j++)
					{
						alumno[j] = alumno[j + 1];
					}
					c--;
				}
				break;
			}
			if (i == c) {
				cout << "No encontré nada" << endl;
			}
			i++;
		}

		system("pause > nul");
		menu();
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
	cout << "1. Mostrar Alumnos y calificaciones\n2. Volver al menú" << endl;
	cin >> opcion;
	int i = 0;
	if (opcion == 1) {
		for (i = 0; i < c; i++) {
			cout << i << " " << alumno[i].nombre << " " << alumno[i].apellidos << " Cal 1:" << alumno[i].cal1 << " Cal 2:" << alumno[i].cal2 << " Cal 3:" << alumno[i].cal3 << endl;
		}
		cout << "Sera regresado al menu, le parece correcto?\n";
		cout << "1. Si\n2. No" << endl;
		cin >> opcion;
		if (opcion == 1) {
			main();
		}
		else {
			cout << "respeto su respuesta como usuario, pero reafirmo mi autoridad como";
			cout << "\nprogramador regresandolo al menu de todos modos.";
			system("pause > nul");
			main();
		}

	}

}
void salir() {
	system("cls");
	cout << "¿Esta seguro que desea salir?\n";
	cout << "1. Si.\n2. Volver al menú" << endl;

	cin >> opcion;
	cin.ignore();
	if (opcion == 1) {
		return;
		system("pause>nul");

	}
	else {
		main();
	}

}