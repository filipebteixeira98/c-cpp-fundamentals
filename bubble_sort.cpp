#include <iostream>
#include <locale>
#include <string.h>
#define MAX 10

using namespace std;

class Carro
{
public:
	char nome[100];
	char cor[20];
	char placa[20];
	double preco;
};

//Ordenação em bolha
void ordena(Carro carros[], int quantidade)
{
	Carro aux;
	
	for(int i = quantidade; i >= 0; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			if(strcmp(carros[j - 1].nome, carros[j].nome) == 1)
			{
				aux = carros[j - 1];
				carros[j - 1] = carros[j];
				carros[j] = aux;
			}
		}
	}
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");	
	int count = 0;
	Carro carros[MAX];
	
	while(true)
	{
		char resp;
		
		cout << "Digite o nome do carro: ";
		cin >> carros[count].nome;
		cout << "Digite o seu preço: ";
		cin >> carros[count].preco;
		cout << "Deseja continuar? <S>SIM ou <N>NÃO ";
		cin >> resp;
		
		if(resp != 's')
			break;
		
		cout << endl;
		count++;
	}
	
	cout << endl;
	cout << "Exibindo todos os carros\n\n";
	
	for(int contador = 0; contador <= count; contador++)
	{
		cout << "Nome do carro: " << carros[contador].nome << endl;
		cout << "Preço: R$" << carros[contador].preco << "\n\n";
	}
	
	ordena(carros, count);
	
	cout << "Exibindo os carros ordenados pelo nome" << endl;
	
	for(int contador = 0; contador <= count; contador++)
	{
		cout << "Nome do carro: " << carros[contador].nome << endl;
		cout << "Preço: R$" << carros[contador].preco << "\n\n";
	}
	
	return 0;
}
