#include <stdio.h>
#include <iostream>
#include<windows.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void dibujarCabeza() {
	cout << "    - -    ";
	cout << "\n";
	cout << "  - o O  - ";
	cout << "\n";
	cout << " -   L   - ";
	cout << "\n";
	cout << "  -  __ -  ";
	cout << "\n";
	cout << "    - -    ";
	cout << "\n";
}
void dibujarCuerpo() {
	cout << "    - -    ";	
	cout << "\n";
	cout << "  - o O  - ";	
	cout << "\n";
	cout << " -   L   - ";
	cout << "\n";
	cout << "  -  __ -  ";	
	cout << "\n";
	cout << "    - -    ";
	cout << "\n";
	cout << "     |    "; 
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
}
void dibujarBrazoIzq() {
	cout << "    - -    ";	
	cout << "\n";
	cout << "  - o O  - ";
	cout << "\n";
	cout << " -   L   - ";	
	cout << "\n";
	cout << "  -  __ -  ";	
	cout << "\n";
	cout << "    - -    ";	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "    /|    "; 	
	cout << "\n";
	cout << "   / |    "; 	
	cout << "\n";
	cout << "  /  |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";

}
void dibujarBrazoDer() {
	cout << "    - -    ";
	cout << "\n";
	cout << "  - o O  - ";
	cout << "\n";
	cout << " -   L   - ";
	cout << "\n":
	cout << "  -  __ -  ";
	cout << "\n";
	cout << "    - -    ";
	cout << "\n";
	cout << "     |    ";
	cout << "\n";
	cout << "    /|\   ";
	cout << "\n";
	cout << "   / | \  ";
	cout << "\n";
	cout << "  /  |  \ ";
	cout << "\n";
	cout << "     |    ";
	cout << "\n";
	cout << "     |    "; 	
	cout << "\n";

}
void dibujarPiernaIzq() {
	cout << "    - -    ";	
cout << "\n";
	cout << "  - o O  - ";	
cout << "\n";
	cout << " -   L   - ";	
cout << "\n";
	cout << "  -  __ -  ";	
cout << "\n";
	cout << "    - -    ";	
cout << "\n";
	cout << "     |    "; 	
cout << "\n";
	cout << "    /|\   "; 	
cout << "\n";
	cout << "   / | \  "; 	
cout << "\n";
	cout << "  /  |  \ "; 	
cout << "\n";
	cout << "     |    "; 	
cout << "\n";
	cout << "     |    "; 	
cout << "\n";
	cout << "    /    ";  	
cout << "\n";
	cout << "   /     ";  	
cout << "\n";
	cout << "  /      ";  	
		cout << "\n";
}
void dibujarPiernaDer() {
	cout << "    - -    ";	cout << "\n";
	cout << "  - o O  - ";	cout << "\n";
	cout << " -   L   - ";	cout << "\n";
	cout << "  -  __ -  ";	cout << "\n";
	cout << "    - -    ";	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "    /|\   "; 	cout << "\n";
	cout << "   / | \  "; 	cout << "\n";
	cout << "  /  |  \ "; 	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "    / \   "; 	cout << "\n";
	cout << "   /   \  "; 	cout << "\n";
	cout << "  /     \ "; 	cout << "\n";
}
void dibujarMuerto() {
	cout << "    - -    ";	cout << "\n";
	cout << "  - x X  - ";	cout << "\n";
	cout << " -   L   - ";	cout << "\n";
	cout << "  -  __ -  ";	cout << "\n";
	cout << "    - -    ";	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "    /|\   "; 	cout << "\n";
	cout << "   / | \  "; 	cout << "\n";
	cout << "  /  |  \ "; 	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "     |    "; 	cout << "\n";
	cout << "    / \   "; 	cout << "\n";
	cout << "   /   \  "; 	cout << "\n";
	cout << "  /     \\ "; 	cout << "\n";

}

int main(int argc, char** argv) {
	system("cls");
	dibujarCabeza();
	return 0;
}