#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

class Estudante
{
protected:
	char* nome;
	
public:
	Estudante(const char* nome)
	{
		cout << "Construindo objeto: " << nome << endl;
		
		int tam = strlen(nome)+1;
		this->nome = new char[tam];
		
		strcpy(this->nome, nome);
	}
	
	Estudante(const Estudante& estudante)
	{		
		int tam = strlen(estudante.nome) + strlen("Cópia de ") + 1;
		this->nome = new char[tam];
		strcpy(this->nome, "Cópia de ");
		strcat(this->nome, estudante.nome);
		
		cout << "Construindo " << this->nome << endl;
	}
	
	~Estudante()
	{
		cout << "Desalocando memória heap!" << endl;
		cout << "Objeto destruido: " << nome << endl;
		
		delete[] nome;
		nome = NULL;
	}
	
	const char* getNome()
	{
		return nome;
	}
};

void object_copy(Estudante estudante){}

void constructor_object()
{
	Estudante estudante("Filipe Teixeira");
	object_copy(estudante);
	
	// cout << "Estudante: " << estudante.getNome() << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	constructor_object();
	
	return 0;
}
