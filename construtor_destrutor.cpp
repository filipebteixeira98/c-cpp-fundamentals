#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

class Pessoa
{
private:
	char nome[100];
	int idade;
	int* children;
public:
	Pessoa(const char* nome, int idade); // Constructor
	char* getNome();
	int getIdade();
	~Pessoa(); // Destructor
};

Pessoa::Pessoa(const char* nome, int idade) // Destructor
{
	strcpy(this->nome, nome);
	this->idade = idade;
	children = new int [100];
	cout << "Alocando variáveis de ambiente em pilha de execução!" << endl;
}

Pessoa::~Pessoa() // Destructor
{
	cout << "Desalocando memória heap!" << endl;
	delete[] children;
};

char* Pessoa::getNome()
{
	return nome;
};

int Pessoa::getIdade()
{
	return idade;
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Pessoa pessoas[2] = 
	{
		{"Filipe Teixeira",20},
		{"Mara Rojane", 54}
	};
	
	/*
	cout << "Nome: " << pessoas[0].getNome() << endl;
	cout << "Idade: " << pessoas[0].getIdade() << endl;
	*/
	
	return 0;
}
