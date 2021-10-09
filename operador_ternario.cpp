#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL,"Portuguese");
    int num = 10;
    
    num > 10 ? cout << "Maior que 10" : cout << "Menor ou igual a 10"; // Avalia-se a expressão condicional
    // Executa ação de acordo com valor booleano retornado
    
    return 0;
}
