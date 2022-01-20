#include "lista.h"
#include <iostream>
using namespace std;

int main() {
	lista* listaI = new lista();
	listaI->add(6);
	listaI->add(1);
	listaI->add(10);
	listaI->add(15);

	cout << "Test 2: " << (listaI->contains(2) == 1 ? "Wrong" : "Correct") << endl;
	cout << "Test 3: " << (listaI->contains(3) == 1 ? "Wrong" : "Correct") << endl;
	cout << "Test 4: " << (listaI->contains(4) == 1 ? "Wrong" : "Correct") << endl;
	cout << "Test 5: " << (listaI->contains(5) == 1 ? "Wrong" : "Correct") << endl;
	cout << "Test 20: " << (listaI->contains(20) == 1 ? "Wrong" : "Correct") << endl;
	cout << "Test 1: " << (listaI->contains(1) == 1 ? "Correct" : "Wrong") << endl;
	cout << "Test 6: " << (listaI->contains(6) == 1 ? "Correct" : "Wrong") << endl;
	cout << "Test 10: " << (listaI->contains(10) == 1 ? "Correct" : "Wrong") << endl;
	cout << "Test 15: " << (listaI->contains(15) == 1 ? "Correct" : "Wrong") << endl;
}