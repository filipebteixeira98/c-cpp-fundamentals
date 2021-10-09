#include <iostream>
#include <locale>
#include "prototipos.h"

using namespace std;

// LIFO Data structure

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Pilha<const char*> pilha(100);
	
	pilha.push("Filipe Teixeira");
	pilha.push("Mara Rojane Barros de Matos");
	pilha.pop();
	
	if(pilha.empty())
		cout << "Stack is empty!" << endl;
	else
		cout << "Top: " << pilha.getTopo() << endl;
	
	return 0;
}
