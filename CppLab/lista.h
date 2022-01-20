#pragma once
class lista
{
private:
	int listaInteiros;
	int getPrimeFromElement(int element);
	bool isPrime(int element);
public:
	lista();
	~lista();
	void add(int n);
	bool remove(int n);
	bool contains(int n);
	void printList();
};

