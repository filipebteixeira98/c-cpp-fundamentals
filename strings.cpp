#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	int tamanho;
	char nome[100];
	char* pointer;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	
	tamanho = strlen(nome);
	pointer = &nome[tamanho - 1];
	
	while(pointer >= &nome[0])
		cout << *pointer--;
	
	pointer = NULL;
	
	return 0;
}
