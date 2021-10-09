#include <iostream>
#include <locale>

using namespace std;

class Carro
{
private:
	int ano;

public:
	Carro(int ano = 2014);
	int getAno();
	void setAno(int ano);
};

Carro::Carro(int ano)
{
	this->ano = ano;
}

int Carro::getAno()
{
	return ano;
}

void Carro::setAno(int ano)
{
	this->ano = ano;
}

int quad(int num = 1) // Assign default value
{
	return num * num;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Carro carro;
	
	cout << "Quadrado: " << quad() << endl;
	cout << "Ano 'default': " << carro.getAno() << endl;	
	
	return 0;
}
