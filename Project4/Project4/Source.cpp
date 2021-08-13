#include <iostream>
#include <string>
using namespace std;

class Dog {
public:

	Dog();

	string name;
	int age;
	float health;

	void Bark();
};

int main() {
	Dog dog;

	cout << dog.name << endl;
	cout << dog.age << endl;
	cout << dog.health << endl;
	cout << endl;

	dog.name = "Sam";
	dog.age = 14;
	dog.health = 43.5;

	cout << dog.name << endl;
	cout << dog.age << endl;
	cout << dog.health << endl;
	cout << endl;

	system("pause");
}

Dog::Dog() {
	Bark();

	name = "default name";
	age = 10;
	health = 100.f;
}

void Dog::Bark() {
	cout << "Woof!" << endl;
}