#include <iostream>
#include <locale>

// Herança múltipla

using namespace std;

class Parent
{
public:
	void showMsg();
};

void Parent::showMsg()
{
	cout << "Parent Class!" << endl;
}

class Parent_
{
public:
	void showMsg();
};

void Parent_::showMsg()
{
	cout << "Parent_ Class!" << endl;
}

class Child : public Parent, public Parent_ // Derivando duas classes
{
public:
	void showMsg();
};

void Child::showMsg()
{
	cout << "Child Class" << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	Child child;
	
	child.Parent::showMsg();
	child.Parent_::showMsg();
	child.showMsg();
	
	return 0;
}
