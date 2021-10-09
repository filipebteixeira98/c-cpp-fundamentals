#include <iostream>
#include <locale>

using namespace std;

struct pessoa {
private:
	int idade;
	int numero_sorte;

public:	
	pessoa(int idade, int numero_sorte);
	
	void setIdade(int idade)
	{
		this->idade = idade;
	}
	int getIdade()
	{
		return idade;
	}
	int getNum()
	{
		return numero_sorte;
	}
};

pessoa::pessoa(int idade, int numero_sorte)
	{
		this->idade = idade;
		this->numero_sorte = numero_sorte;
	}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	struct pessoa p(20,10); // Alternativa em C++: 'pessoa p;'
	
	p.setIdade(25);
	
	cout << p.getIdade() << endl;
	cout << p.getNum() << endl;
	
	return 0;
}
