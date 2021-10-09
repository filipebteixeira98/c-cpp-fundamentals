#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Quantidade de argumentos: " << argc << endl;
	cout << "Argumentos passados: " << endl;
	
	for(int count = 0 ; count < argc; count++)
		cout << argv[count];
	
	return 0;
}
