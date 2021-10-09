#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

typedef struct pessoa {
	char nome[100];
	char cpf[20];
	int idade;
	int ano;
}t_pessoa;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	t_pessoa pessoas[10];
	t_pessoa* pointer = &pessoas[0];

	strcpy(pessoas[0].nome,"Filipe Teixeira");
	pessoas[0].idade = 20;
	pessoas[1].idade = 21;
	pessoas[2].idade = 22;	
	
	cout << "Nome: " << pessoas[0].nome << endl;
	cout << "Idade: " << pessoas[0].idade << endl;
	cout << (pointer->idade) + 1 << endl;
	cout << (pointer + 2)->idade << endl;
	
	return 0;
}
