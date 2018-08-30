#include <iostream>
using namespace std;
int opcion;
void calle();
void casa();
void cocina();
void baño();
void cuarto1();

void main() {
	locale::global(locale("spanish"));
	calle();
	cout << "fin del recorrido" << endl;
	system("pause > nul");
}
void calle() {
	cout << "estas en la calle" << endl;
	cout << "¿quieres entrar a la casa?" << endl;
	cout << "1. si \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		casa();
	}
}
void casa() {
	cout << "estas en la casa" << endl;
	cout << "un lugar bastante ordenado y con 3 gatos perezosos" << endl;
	cout << "no hay mucho por hacer mas que ver la televisíon pero nunca lo haces" << endl;
	cout << "No tienes nada que hacer aqui, ¿que deseas hacer?" << endl;
	//no se podra regresar a las demas habitaciones despues de elejir ir al cuarto
	cout << "1. entrar a la cocina\n2. ir al baño\n3. ir al cuarto 1" << endl; 
	cin >> opcion;
	if (opcion == 1) {
		cocina();
	}
	else if (opcion == 2) {
		baño();
	}
	else {
		cuarto1();
	}
}
void cocina() {
	cout << "estas en la cocina" << endl;
	cout << "no tienes hambre, pero notas la poca comida que hay en el refrigerador" << endl;
	cout << "-tengo que comprar mas comida\nes lo que piensas al ver todo vacio" << endl;
	cout << "no tienes otra razón para quedarte, ¿que deseas hacer?" << endl;
	cout << "Dato: Recuerda no entrar a los lugares a los que ya hayas entradado, se repetiran los dialogos" << endl;
	cout << "1. ir al baño\n2. ir al cuarto 1" << endl;
	cin >> opcion;
	if (opcion == 1) {
		baño();
	}
	else {
		cuarto1();
	}
}
void baño() {
	cout << "estas en el baño" << endl;
	cout << "no tienes ganas de usar el baño pero de todas formas entraste" << endl;
	cout << "te volteas a ver en el espejo y notas que tienes el cabello demasiado largo" << endl;
	cout << "-es una molestia cortarme el cabello, mejor lo dejo asi\npensaste mientras apartabas la vista del espejo" << endl;
	cout << "Ya no tienes nada que hacer aqui, ¿que deseas hacer?" << endl;
	cout << "Dato: Recuerda no entrar a los lugares a los que ya hayas entradado, se repetiran los dialogos" << endl;
	cout << "1. entrar a la cocina\n2. ir al cuarto 1" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cocina();
	}
	else {
		cuarto1();
	}
}
void cuarto1() {
	cout << "estas en tu cuarto, tu lugar de descanso, tu lugar sagrado" << endl;
	cout << "tu cuarto esta desordenado y hay un gancho colgando del techo, sueles colgar cosas en el" << endl;
	cout << "recojes tu cuarto porque no soportas vivir en tu propia inmundicia viviendo una vida de autocomplacencia" << endl;
	cout << "recogiste tu cinturon y moviste la silla hacia donde estaba el gancho" << endl;
	cout << "le diste una barrida a tu cuarto" << endl;
	cout << "estas cansado y tu cama parece muy comoda, ¿que deseas hacer?" << endl;
	cout << "1. acostarte y dormir\n2. usar la silla y el cinturon" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "te duermes para despertar al siguiente dia" << endl;
		cout << "fin del programa" << endl;
		system("pause > nul");
	}
	else {
		cout << "Te haz suicidado, felicidades conseguiste el final magico y feliz :3" << endl;
		cout << "PD: me encanta el humor negro\nfin del programa" << endl;
		system("pause > nul");
	}
}