#include <iostream>

/*
#ifndef __PILHA_H
#define __PILHA_H
*/

using namespace std;

template <class Type>
class Pilha
{
private:
	Type* vetor;
	int max_tam, topo;
	
public:
	Pilha(int tam); // Constructor
	~Pilha(); // Destructor
	void push(Type elemento); // Insert data
	void pop(); // Remove data
	int empty(); // Verify if it's empty
	Type getTopo(); // Get top
};

Pilha::Pilha(int tam) // 
{
	vetor = new Type[tam]; // Dado parametrizado
	max_tam = tam - 1;
	topo = -1;
}

Pilha::~Pilha()
{
	cout << "Relieving heap memory!" << endl;
	
	delete[] vetor;
	vetor = NULL;
}

void Pilha::push(Type elemento)
{
	if(topo == max_tam)
		cout << "Stack overload!" << endl;
	else
		vetor[++topo] = elemento;
}

void Pilha::pop()
{
	if(empty())
		cout << "Stack is empty!" << endl;
	else
		topo--;
}

Type Pilha::getTopo()
{
	if(!empty())
		return vetor[topo];
		
	cout << "Stack is empty!" << endl;
	
	return NULL;
}

int Pilha::empty()
{
	return (topo == -1);
}

/*
#endif
*/
