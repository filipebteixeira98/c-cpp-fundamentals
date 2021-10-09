#include <iostream>
#include <locale>

using namespace std;

class Complex
{
public:
	int real, imaginaria;
	
	Complex(int real, int imaginaria);
	Complex operator+(Complex& complex)
	{
		return Complex(this->real + complex.real, this->imaginaria + complex.imaginaria);
	}
};

Complex::Complex(int real, int imaginaria)
{
	this->real = real;
	this->imaginaria = imaginaria;
}

/* Sobrecarga de operadores
 * Função 'friend'
 * 
 * Declaração:
 * 
 * friend <tipo_retorno> operator op(<lista de parâmetros>);
 * 
 * Definição:
 * 
 * 	<tipo_retorno> operator op(<lista de parâmetros>);
 */

class Pessoa
{
private:
	int idade;
public:
	Pessoa(int idade);
	int getAge();
};

Pessoa::Pessoa(int idade)
{
	this->idade = idade;
}

int Pessoa::getAge()
{
	return idade;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Pessoa pessoa(20), pessoa_(30);
	Complex complex(1,2), complex_(3,4);
	Complex complex__ = complex + complex_;
	
	// complex__ = complex.operator+(complex_);
		
	cout << "Primeira pessoa: " << pessoa.getAge() << endl;
	cout << "Segunda pessoa: " << pessoa_.getAge() << endl;
	cout << "Parte real: " << complex__.real << endl;
	cout << "Parte imaginária: " << complex__.imaginaria << endl;
	
	return 0;
}
