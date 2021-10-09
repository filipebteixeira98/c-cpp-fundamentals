#include <iostream>
#include <locale>

using namespace std;

int my_strlen(char *str)
{
	int tamanho = 0;
	
	while(*str != '\0')
	{
		str++;
		tamanho++;
	}
	
	return tamanho;
}

char* my_strcat(char* destino, char* origem)
{
	int tamanho = my_strlen(destino) + my_strlen(origem);
	char* resultado = new char[tamanho];
	char* pointer = resultado;
	
	while(*destino != '\0')
	{
		*pointer = *destino;
		pointer++;
		destino++;
	}
	while(*origem != '\0')
	{
		*pointer = *origem;
		pointer++;
		origem++;
	}
	
	return resultado; 
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	char* nome = new char[100];
	char* sobrenome = new char[100];
	
	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite seu sobrenome: ";
	cin >> sobrenome;
	
	cout << my_strcat(nome, sobrenome) << endl; 
	
	return 0;
}
