#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

class LinguagemAmiga; // Friend class

class Linguagem
{
	friend void display(Linguagem*); // Friend method
private:
	char nome[100];
	LinguagemAmiga* l_amiga;
protected:
	
public:
	char* getNome();
	void setNome(const char* nome);
	void getAmiga();
};

class LinguagemAmiga // Friend class 
{
	friend class Linguagem;
	
protected:
	void show()
	{
		cout << "Classe herdada!" << endl;
	}
};

void display(Linguagem* linguagem) // Friend method
{
	cout << "Linguagem: " << linguagem->nome << endl;
}

char* Linguagem::getNome()
{
	return nome;
}

void Linguagem::setNome(const char* nome)
{
	strcpy(this->nome, nome);
}

void Linguagem::getAmiga()
{
	l_amiga->show();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Linguagem linguagem;
	
	/*
	linguagem.setNome("C++");
	cout << "Linguagem: " << linguagem.getNome() << endl;
	display(&linguagem); // Friend method
	*/
	linguagem.getAmiga(); // Friend class
	
	return 0;
}
