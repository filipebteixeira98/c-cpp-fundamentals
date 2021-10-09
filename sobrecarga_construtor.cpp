#include <iostream>
#include <locale>

using namespace std;

class Carro
{
public:
	int ano;
	double preco;
	
	Carro();
	Carro(int ano);
	Carro(int ano, double preco); // Constructor overload
};

Carro::Carro()
{
	ano = 0;
	preco = 0.0;
}

Carro::Carro(int ano)
{
	this->ano = ano;
	this->preco = 0.0;
}

Carro::Carro(int ano, double preco)
{
	this->ano = ano;
	this->preco = preco;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Carro carro;
	Carro carro_(2014);
	Carro _carro(2017,100000);
	
	cout << "Ano 1o carro: " << carro.ano << endl;
	cout << "Preço 1o carro: " << carro.preco << endl;
	cout << "Ano 2o carro: " << carro_.ano << endl;
	cout << "Preço 2o carro: " << carro_.preco << endl;
	cout << "Ano 3o carro: " << _carro.ano << endl;
	cout << "Preço 3o carro: " << _carro.preco << endl;
	
	return 0;
}
