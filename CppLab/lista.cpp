#include "lista.h"
#include <iostream>
using namespace std;

int lista::getPrimeFromElement(int element)
{
	int prime = 0;
	for (size_t i = 1; i <= element; i++)
	{
		prime++;
		while (!isPrime(prime)) {
			prime++;
		}
	}
	return prime;
}

bool lista::isPrime(int element)
{
	if (element == 2 || element == 3)
		return true;
	if ((element % 2) == 0 || element == 0 || element == 1)
		return false;

	for (size_t i = 3; i < element / 2; i++)
	{
		if ((element % i) == 0)
			return false;
	}
	return true;
}

lista::lista()
{
	this->listaInteiros = 0;
}

lista::~lista()
{
}

void lista::add(int n)
{
	if (this->listaInteiros == 0) {
		this->listaInteiros = getPrimeFromElement(n);
		return;
	}
	this->listaInteiros *= getPrimeFromElement(n);
}

bool lista::remove(int n)
{
	if (this->listaInteiros == 0 || (this->listaInteiros % n) != 0) {
		return false;
	}
	this->listaInteiros = this->listaInteiros / n;
}

bool lista::contains(int n)
{
	return (this->listaInteiros % this->getPrimeFromElement(n)) == 0;
}

void lista::printList()
{
	cout << this->listaInteiros << endl;
}
