#include <iostream> 

using namespace std;

template <typename Type, int size>
int Size(Type (&args)[size])
{
	return size;
}

int main(int argc, char** argv)
{
	int array[] = {1,2,3,4,5};
	const char* strings[] = {"Filipe", "Teixeira"};
	
	cout << Size(array) << endl;
	cout << Size(strings) << endl;
	
	return 0;
}
