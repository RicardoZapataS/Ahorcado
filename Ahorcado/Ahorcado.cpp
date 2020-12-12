#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PVMAX = 50;
int Vida = 0;
string Palabras[PVMAX];
string palabra;
char Encontradas[PVMAX];
bool juego = true;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void DibujarFormas(int opcion);
void DibujarJuego();
string EscogerPalabra();
void RellenarPalabras();
void MostrarLetrasEncontradas();
void MostrarVidas();
void IniciarJuego();
bool Verificar(char input);
void DibujarTodo(int estado);
void PerderJuego();

void DibujarFormas(int opcion) {
	switch (opcion) //donde opción es la variable a comparar
	{
	case -1: //Cuerda;
		cout << "    _________________";	cout << "\n";
		cout << "    I               |";	cout << "\n";
		cout << "    I               |";	cout << "\n";
		cout << "    I               |";	cout << "\n";
		cout << "    I               |";	cout << "\n";
		break;
	case 0: //vidas perdidas 0;
		cout << "    - -             |";	cout << "\n";
		cout << "  - o O  -          |";	cout << "\n";
		cout << " -   L   -          |";	cout << "\n";
		cout << "  -  __ -           |";	cout << "\n";
		cout << "    - -             |";	cout << "\n";
		break;
	case 1: //vidas perdidas 1;
		cout << "    - -             |";		cout << "\n";
		cout << "  - o O  -          |";		cout << "\n";
		cout << " -   L   -          |";	cout << "\n";
		cout << "  -  __ -           |";	cout << "\n";
		cout << "    - -             |";	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "     |              |";	cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		break;
	case 2: //vidas perdidas 2;
		cout << "    - -             | ";		cout << "\n";
		cout << "  - o O  -          | ";	cout << "\n";
		cout << " -   L   -          | ";	cout << "\n";
		cout << "  -  __ -           | ";	cout << "\n";
		cout << "    - -             | ";	cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		cout << "    /|              |"; 		cout << "\n";
		cout << "   / |              |"; 		cout << "\n";
		cout << "  /  |              |"; 		cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		break;
	case 3: //vidas perdidas 3;
		cout << "    - -             | ";	cout << "\n";
		cout << "  - o O  -          | ";	cout << "\n";
		cout << " -   L   -          | ";	cout << "\n";
		cout << "  -  __ -           | ";	cout << "\n";
		cout << "    - -             | ";	cout << "\n";
		cout << "     |              |";	cout << "\n";
		cout << "    /|\\             |";	cout << "\n";
		cout << "   / | \\            |";	cout << "\n";
		cout << "  /  |  \\           |";	cout << "\n";
		cout << "     |              |";	cout << "\n";
		cout << "     |              |"; 		cout << "\n";
		break;
	case 4: //vidas perdidas 4;
		cout << "    - -             | ";	cout << "\n";
		cout << "  - o O  -          | "; cout << "\n";
		cout << " -   L   -          | "; cout << "\n";
		cout << "  -  __ -           | ";	cout << "\n";
		cout << "    - -             | ";	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    /|\\             |"; 	cout << "\n";
		cout << "   / | \\            |"; 	cout << "\n";
		cout << "  /  |  \\           |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    /               |";  	cout << "\n";
		cout << "   /                |";  	cout << "\n";
		cout << "  /                 |";  	cout << "\n";
		break;
	case 5: //vidas perdidas 5;
		cout << "    - -             | ";	cout << "\n";
		cout << "  - o O  -          | ";	cout << "\n";
		cout << " -   L   -          | ";	cout << "\n";
		cout << "  -  /\\ -           | ";	cout << "\n";
		cout << "    - -             | ";	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    /|\\             |"; 	cout << "\n";
		cout << "   / | \\            |"; 	cout << "\n";
		cout << "  /  |  \\           |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    / \\             |"; 	cout << "\n";
		cout << "   /   \\            |"; 	cout << "\n";
		cout << "  /     \\           |"; 	cout << "\n";
		break;
	case 6: //vidas perdidas 6;
		cout << "    - -             | ";	cout << "\n";
		cout << "  - x X  -          | ";	cout << "\n";
		cout << " -   L   -          | ";	cout << "\n";
		cout << "  -  __ -           | ";	cout << "\n";
		cout << "    - -             | ";	cout << "\n";
		cout << "   ==I==            | ";	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    /|\\             |"; 	cout << "\n";
		cout << "   / | \\            |"; 	cout << "\n";
		cout << "  /  |  \\           |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "     |              |"; 	cout << "\n";
		cout << "    / \\             |"; 	cout << "\n";
		cout << "   /   \\            |"; 	cout << "\n";
		cout << "  /     \\           |"; 	cout << "\n";
		break;
	case 7: //vidas salvadas;
		cout << "    - -              ";	cout << "\n";
		cout << "  - 0 0  -           ";	cout << "\n";
		cout << " -   L   -           ";	cout << "\n";
		cout << "  -  \\/ -            ";	cout << "\n";
		cout << "    - -              ";	cout << "\n";
		cout << "     |              "; 	cout << "\n";
		cout << "    /|\\            "; 	cout << "\n";
		cout << "   / | \\           "; 	cout << "\n";
		cout << "  /  |  \\          "; 	cout << "\n";
		cout << "     |              "; 	cout << "\n";
		cout << "     |              "; 	cout << "\n";
		cout << "    / \\            "; 	cout << "\n";
		cout << "   /   \\           "; 	cout << "\n";
		cout << "  /     \\          "; 	cout << "\n";
		break;
	}
}
void DibujarJuego() {
	cout << "Bienvenido a Ahorcado ...\n";
	DibujarFormas(-1);
	DibujarFormas(Vida);
}
string EscogerPalabra() {
	srand(time(0));
	return Palabras[rand() % PVMAX];
}
void RellenarPalabras() {
	Palabras[0] = "humanidad";
	Palabras[1] = "humano";
	Palabras[2] = "persona";
	Palabras[3] = "gente";
	Palabras[4] = "hombre";
	Palabras[5] = "mujer";
	Palabras[6] = "alma";
	Palabras[7] = "espiritu";
	Palabras[8] = "pecho";
	Palabras[9] = "cintura";
	Palabras[10] = "cadera";
	Palabras[11] = "espalda";
	Palabras[12] = "corazon";
	Palabras[13] = "sangre";
	Palabras[14] = "carne";
	Palabras[15] = "piel";
	Palabras[16] = "hueso";
	Palabras[17] = "resfriado";
	Palabras[18] = "gripe";
	Palabras[19] = "diarrea";
	Palabras[20] = "salud";
	Palabras[21] = "enfermedad";
	Palabras[22] = "cabeza";
	Palabras[23] = "cara";
	Palabras[24] = "boca";
	Palabras[25] = "labio";
	Palabras[26] = "diente";
	Palabras[27] = "ojo";
	Palabras[28] = "nariz";
	Palabras[29] = "barba";
	Palabras[30] = "bigote";
	Palabras[31] = "cabello";
	Palabras[32] = "oreja";
	Palabras[33] = "cerebro";
	Palabras[34] = "estomago";
	Palabras[35] = "brazo";
	Palabras[36] = "codo";
	Palabras[37] = "hombro";
	Palabras[38] = "uno";
	Palabras[39] = "mano";
	Palabras[40] = "palmar";
	Palabras[41] = "palma";
	Palabras[42] = "dedo";
	Palabras[43] = "trasero";
	Palabras[44] = "abdomen";
	Palabras[45] = "higado";
	Palabras[46] = "musculo";
	Palabras[47] = "cuello";
	Palabras[48] = "corazon";
	Palabras[49] = "mente";
}
void MostrarLetrasEncontradas() {
	cout << "Palabra:\n";
	for (int i = 0; i < palabra.size(); i++) {
		cout << Encontradas[i] << " ";
	}
	cout << "\n";
}
void MostrarVidas() {
	for (int i = 0; i < 6 - Vida; i++)
		cout << "O";
	for (int i = 0; i < Vida; i++)
		cout << "X";
	cout << "\n";
}
void IniciarJuego() {
	RellenarPalabras();
	palabra = EscogerPalabra();
	for (int i = 0; i < palabra.size(); i++) {
		Encontradas[i] = '_';
	}
	DibujarJuego();
	MostrarLetrasEncontradas();
	MostrarVidas();
}
bool Verificar(char input) {
	if (palabra.find(input) <= palabra.size()) {
		bool flag = false;
		for (int i = 0; i < palabra.size(); i++)
			if (Encontradas[i] == input) flag = true;
		if (flag)
			DibujarTodo(0);
		else {
			for (int i = 0; i < palabra.size(); i++)
				if (palabra[i] == input) Encontradas[i] = input;
			string a = "";
			for (int i = 0; i < palabra.size(); i++)
				a += Encontradas[i];
			if (a == palabra)
				DibujarTodo(3);
			else
				DibujarTodo(1);
		}
	}
	else {
		Vida++;
		DibujarTodo(2);
		if (Vida == 6) {
			juego = false;
			cout << "Fin del juego!!";
		}
	}
}
void DibujarTodo(int estado) {
	system("cls");
	switch (estado)
	{
	case 0:
		DibujarJuego();
		cout << "Este caracter ya fue encontrado!!";
		MostrarLetrasEncontradas();
		MostrarVidas();
		break;
	case 1:
		DibujarJuego();
		cout << "Encontrado \n";
		MostrarLetrasEncontradas();
		MostrarVidas();
		break;
	case 2:
		DibujarJuego();
		cout << "El caracter es incorrecto";
		MostrarLetrasEncontradas();
		MostrarVidas();
		break;
	case 3:
		cout << "Felicidades fin del juego!!";
		DibujarFormas(7);
		MostrarLetrasEncontradas();
		juego = false;
		break;
	default:
		break;
	}
}

int main(int argc, char** argv) {
	IniciarJuego();
	//	cout << palabra << "\n";
	while (juego) {
		char input;
		cout << "Inserte una letra: ";
		cin >> input;
		Verificar(input);
	}
	return 0;
}