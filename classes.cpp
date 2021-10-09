#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

int getIdade(Pessoa pessoas[], const char* nome)
{
	int tamanho = sizeof(pessoas);
	
	for(int count = 0; count < tamanho; count++)
	{
		if(strcmp(nome, pessoas[count].nome) == 0)
			return pessoas[count].idade;
	}
	
	return -1;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");	
	Pessoa pessoas[3] = 
	{
		{"Filipe","073.239.745-69",20},
		{"Rodrigo","074.569.456-32",21},
		{"Mara","056.895.231-23",54}
	};
	
	cout << "Pessoa[0]: " << pessoas[0].nome << endl;
	cout << "Pessoa[1]: " << pessoas[1].nome << endl;
	cout << "Pessoa[2]: " << pessoas[2].nome << endl;
	
	int idade = getIdade(pessoas, "Mara");
	
	if(idade != -1)
		cout << "Idade de Mara: " << idade << endl;
	else
		cout << "Pessoa não encontrada!" << endl;
	
	return 0;
}
