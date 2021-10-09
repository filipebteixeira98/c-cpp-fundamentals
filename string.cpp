#include <iostream>
#include <locale>
#include <string> 

using namespace std;

void showMsg(const char* str) // const char* is string in C
{
	cout << str << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	string str = "Aprendendo C++";
	
	/*
	cout << "String: " << str << endl;
	cout << "Tamanho: " << str.length() << endl; // 'str.size()' is the same : results in string's length
	cout << "Caracter: " << str.at(1) << endl; // Position of a letter
	
	// Due to compiler version
	cout << "Primeiro caracter: " << str.front() << endl; // First letter
	cout << "Último caracter: " << str.back() << endl;	// Last letter
	
	str.append(" C+"); // Append data
	str.push_back('+'); // Append letter
	
	cout << "String concatenada: " << str << endl;
	
	
	// Range method with closed and open break
	str.insert(str.size(), " C++"); // Insert string telling the index to start from 
	str.erase(0,str.size()); // Delete string indicating the index from start to end
	// 'str.clear()' doens't need parameters
	
	if(str.empty()) // 'str.empty()' method returns bool value
		cout << "Empty string!" << endl;
	else
		cout << "Non-empty string!" << endl;
	
	showMsg(str.c_str());
	*/
	
	str.replace(0,10,"Aprendendo C++"); // Replace string for another one
	size_t found = str.find("C++"); // Find 'sub-string's first letter position
	// 'size_t' Contains byte size of object	
	
	if(found != string::npos)
		cout << "String found!" << endl;
	else
		cout << "String not found!" << endl;
	
	string my_str;
	
	cout << "Digite seu nome: " << endl;
	
	getline(cin,my_str);
	my_str += " Teixeira";
	
	cout << "Valor inserido: " << my_str << endl;
		
	return 0;
}
