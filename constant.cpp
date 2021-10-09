#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	const int vetor[] = {1,2}; //Array de constantes
	const int* p1 = &vetor[0]; //Ponteiro para array de constantes
	int const* p2 = &vetor[1]; //Ponteiro para array de constantes
	int* const p3 = new int[2]; //Ponteiro constante
	const char* const p4 = "Filipe Teixeira"; //Ponteiro e atribuição constantes
	
	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;
	
	*p3 = 1;
	*(p3 + 1) = 2;
	
	cout << "*p3 = " << *p3 << endl;
	cout << "*(p3 + 1) = " << *(p3 + 1) << endl;
	
	cout << p4 << endl;
	
	return 0;
}
