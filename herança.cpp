#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

class Animal
{
protected:
	char* nome;
	
public:
	Animal(const char* nome)
	{
		this->nome = new char[strlen(nome) + 1];
		strcpy(this->nome, nome);
	}
	
	~Animal()
	{
		delete[] nome;
		nome = NULL;
	}
	
	char* getNome()
	{
		return nome;
	}
};

class Cachorro : public Animal // Inheritance 
{
protected:
	int idade;
	
public:
	Cachorro(const char* nome) : Animal(nome)
	{
		const char* msg = "Objeto definido através de herança";
		
		cout << msg << endl;
	}
	
	int getIdade()
	{
		return idade;
	}
	
	void setIdade(int idade)
	{
		this->idade = idade;
	}
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Animal animal("Cachorro");
	Cachorro cachorro("Bull terrier");
	
	cachorro.setIdade(2);
	
	cout << "Animal: " << animal.getNome() << endl;
	cout << "Raça: " << cachorro.getNome() << endl;
	cout << "Idade: " << cachorro.getIdade() << endl;
	
	return 0;
}
