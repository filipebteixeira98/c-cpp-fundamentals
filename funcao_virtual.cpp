#include <iostream> 
#include <locale>

using namespace std;

class Parent
{
public:
	virtual void showMessage() // Virtual method
	{
		cout << "Parent class!" << endl;
	}
};

class Child : public Parent
{
public:
	virtual void showMessage() // Non-necessary 
	{
		cout << "Child class!" << endl;
	}
};

void function_virt(Parent* parent)
{
	parent->showMessage();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Parent parent;
	Child child;
	
	/*
	parent.showMessage();
	child.showMessage();
	*/
	function_virt(&parent);
	function_virt(&child);
	
	return 0;
}
