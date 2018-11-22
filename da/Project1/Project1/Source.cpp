#include<iostream>
#include<string>
#include <fstream>
#include<conio.h>
//#include<cctype>
//#include <stdio.h>

using namespace std;

int opcion, i;
bool dato;
char o[100];
void AltAlumnos();
void Modif();
void EdAlumnos();
void BAlumnos();
void Manual();
void Listcal();
void salir();
void guardar();
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

	//c = 0;
	//ifstream lista;
	//lista.open("alumnos.data", ios::binary);
	//lista.read((char*)&alumno, sizeof(alumno));
	//lista.close();
	//for (int i = 0; i < 100; i++)
	//{
	//	if (alumno[i].matricula != 0) {
	//		c++;
	//	}
	//}
	ifstream archivo;
	archivo.open("alumnos.data", ios::binary);
	if (archivo.is_open()) {
		while (!archivo.eof()) {
			archivo.read((char*)&alumno, sizeof(alumno));
		}
	}
	c++;
	archivo.close();
	menu();
	system("pause > nul");
}
void menu() {
	system("cls");
	cout << "----------->Menú<-----------" << endl;
	cout << "1. Alta de alumnos" << endl;
	cout << "2. Edicion de alumnos" << endl;
	cout << "3. Borrar alumnos" << endl;
	cout << "4. Manual de usuario" << endl;
	cout << "5. lista de alumnos y calificaciones" << endl;
	cout << "6. Guardar" << endl;
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
	case 4: Manual();
		break;
	case 5: Listcal();
		break;
	case 6: guardar();
		break;
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
				getline(cin, alumno[c].correo);
				string str = alumno[c].correo;
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
			while (alumno[c].cal1 > 100 || alumno[c].cal1 < 0) {
				if (alumno[c].cal1 > 100 || alumno[c].cal1 < 0) {
					cout << "\nNo es valido, ponga otra calificación ";
				}
				cin >> alumno[c].cal1;
			}
			cout << "\nCalificacion 2\n";
			while (alumno[c].cal2 > 100 || alumno[c].cal2 < 0) {
				if (alumno[c].cal2 > 100 || alumno[c].cal2 < 0) {
					cout << "\nNo es valido, ponga otra calificación ";
				}
				cin >> alumno[c].cal2;
			}
			cout << "\nCalificacion 3\n";
			while (alumno[c].cal3 > 100 || alumno[c].cal3 < 0) {
				if (alumno[c].cal3 > 100 || alumno[c].cal3 < 0) {
					cout << "\nNo es valido, ponga otra calificación ";
				}
				cin >> alumno[c].cal3;
			}
			c = c + 1;
			guardar();
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
			cout << "1. Matrícula \n2. Nombre \n3. Apellido \n4. Altura \n0. Nada" << endl;
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
	guardar();
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
	guardar();
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
	guardar();
	main();
}

void Manual() {
	system("cls");
	cout << "estas en la opcion Manual de Usuario" << endl;
	cout << "1. Ver manual\n2. Volver al menú" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "--------->Manual de usuario<---------" << endl;
		cout << "En en Menú encontrara 8 opciones" << endl;
		cout << "-Alta de alumnos" << endl;
		cout << "-Edicion de alumno" << endl;
		cout << "-Borrar alumno" << endl;
		cout << "-Manual de usuario" << endl;
		cout << "-Lista de alumnos y calificaciones" << endl;
		cout << "-Guardar" << endl;
		cout << "-salir" << endl;
		cout << "==============================================" << endl;
		cout << "1.-ALTA DE ALUMNOS" << endl;
		cout << "En esta opcion se da el alta de alumnos, Nombres, apellidos, matricula, direccion, etc. " << endl;
		cout << "2.-EDICION DE ALUMNO" << endl;
		cout << "En esta opcion puede editar todos los datos de los alumnos registrados a partir de sus matriculas" << endl;
		cout << "3.-BORRAR ALUMNO" << endl;
		cout << "En esta opcion podra borrar a un alumno a partir de su matricula" << endl;
		cout << "4.-MANUAL DE USUARIO" << endl;
		cout << "En esta opcion se podra leer el manual de usuario, la opcion en la que esta actualmente" << endl;
		cout << "5.-LISTA DE ALUMNOS Y CALIFICACIONES" << endl;
		cout << "En esta opcion se podra observar la lista con todos los alumnos y sus calificaciones" << endl;
		cout << "6.-Guardar" << endl;
		cout << "en esta opcion se puede guardar los datos" << endl;
		cout << "==============================================" << endl;
		cout << "sera devuelto al menú";
		system("pause > nul");
		main();
	}
	main();
}
void Listcal() {
	system("cls");
	cout << "estas en la opcion Lista de alumnos" << endl;
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
		main();
	}

}
void salir() {
	system("cls");
	cout << "¿Esta seguro que desea salir?\n";
	cout << "1. Si.\n2. Volver al menú" << endl;

	cin >> opcion;
	cin.ignore();
	if (opcion == 1) {
		exit(0); //Funcion De Salida Normal con Parametro 0
		system("pause>nul");

	}
	else {
		main();
	}
}
void guardar() {
	/*ofstream lista;
	lista.open("alumnos", ios::binary);
	lista.write((char*)&alumno, sizeof(alumno));
	lista.close();*/
	


		ofstream archivo;
		archivo.open("alumnos.data", ios::binary);
		archivo.write((char*)&alumno, sizeof(alumno));
		archivo.close();
	
}