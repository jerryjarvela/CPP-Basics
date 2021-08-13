#include <iostream>
#include <string>
using namespace std;

struct Container {
	string name;

	int x;
	int y;
	int z;
};

void PrintStruct();

int main() {
	
	PrintStruct();

	system("pause");
}

void PrintStruct() {
	Container container = { "Sam", 5, 6, 7 };

	Container* ptr_to_cont = &container;

	cout << ptr_to_cont->name << endl;
	cout << ptr_to_cont->x << endl;
	cout << ptr_to_cont->y << endl;
	cout << ptr_to_cont->x << endl;
}