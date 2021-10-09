#include <iostream>
#include <locale>

using namespace std;

class Classe 
{
private:
	int num1;
protected:
	int num2, num3;
public:
	int num4, num5;
	
	Classe();
};

Classe::Classe()
{
	num1 = 1;
	num2 = 2;
	num3 = 3;
	num4 = 4;
	num5 = 5;
}

class SubClasse : public Classe
{
public:
	void showMsg();
};

void SubClasse::showMsg()
{
	cout << "SubClasse!" << endl;
	// Membros privados não são acessíveis
}

class SubClasse_ : private Classe
{
public:
	void showMsg();
	int getNum();
	// Membros privados também não são acessíveis
};

void SubClasse_::showMsg()
{
	cout << "SubClasse_!" << endl;
}

int SubClasse_::getNum()
{	
	return num2;
}

class Pessoa
{
private:
	int idade;
	int* pointer;
public:
	Pessoa(int idade);
	~Pessoa();
	int getAge();
};

Pessoa::Pessoa(int idade)
{
	this->idade = idade;
	pointer = new int[10];
}

Pessoa::~Pessoa()
{
	delete[] pointer;
	pointer = NULL;
}

int Pessoa::getAge()
{
	return idade;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Pessoa* pessoa = new Pessoa(20);
	SubClasse subclasse;
	SubClasse_ subclasse_;
	
	cout << pessoa->getAge() << endl;
	subclasse.showMsg();
	subclasse_.showMsg();
	cout << "SubClasse com derivação pública: " << subclasse.num5 << endl;
	cout << "SubClasse_ com derivação privada: " << subclasse_.getNum() << endl;
	// Uso de métodos para acessar atributos
	
	delete pessoa;
	pessoa = NULL;
		
	return 0;
}
