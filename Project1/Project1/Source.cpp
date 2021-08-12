#include <iostream>
using namespace std;

void Welcome()
{
	cout << "Welcome!\n";
}

void PrintNumber(int numToPrint)
{
	cout << numToPrint << endl;
}

int Add(int a, int b)
{
	int result = a + b;
	return result;
}

int main()
{
	Welcome();
	PrintNumber(4);
	

	int c = Add(1, 4);

	PrintNumber(c);

	system("pause");
}