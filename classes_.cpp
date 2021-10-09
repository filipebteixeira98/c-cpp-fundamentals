#include <iostream>
#include <locale>

using namespace std;

class Conta
{
public:
	int numero;
	double saldo;
	
	double deposita(double quantidade);
	double retirar(double quantidade);
	double getSaldo();
	int getNumero();
};

double Conta::deposita(double quantidade)
{
	if(quantidade > 0)
		this->saldo += quantidade;
	
	return this->saldo;
}

double Conta::retirar(double quantidade)
{
	if(quantidade > 0 && saldo >= quantidade)
		this->saldo -= quantidade;
	
	return this->saldo;
}

double Conta::getSaldo()
{
	return saldo;
}

int Conta::getNumero()
{
	return numero;
}

void deposita(Conta& conta) // Argument can be another thing such as pointer: void deposita(Conta* pointer_name);
{
	conta.deposita(50);
}

Conta* novaConta(int numero, double quantidade)
{
	Conta* conta = new Conta;
	
	conta->numero = numero;
	conta->saldo = quantidade;
	
	return conta;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Conta conta;
	Conta* pointer = &conta;
	Conta* pointer_ = novaConta(2,0.0);
	
	(*pointer).numero = 1;
	(*pointer).saldo = 200;
	
	deposita(conta);
	
	cout << "Número da conta: " << conta.numero << endl;
	cout << "Saldo: " << conta.getSaldo() << endl;
	cout << "Saldo depois do depósito: " << pointer->deposita(100) << endl;
	cout << "Saldo depois do saque: " << pointer->retirar(50) << endl;
	cout << "\n";
	cout << "Número da conta: " << pointer_->getNumero() << endl;
	cout << "Saldo: " << pointer_->getSaldo() << endl;
	
	return 0;
}
