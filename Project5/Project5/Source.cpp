#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal();
	Animal(string p_name, int p_age, int p_num_limbs);
	void Report();

	string name;
	int age;
	int number_of_limbs;
};

class Dog : public Animal {
public:
	Dog();
	Dog(string p_name, int p_age, int p_num_limbs);

	void Speak();
};

class Corgi : public Dog {

};

int main() {
	
	Corgi corgi;
	corgi.Speak();
	corgi.Report();

	system("pause");
}

Animal::Animal() {
	cout << "An ANIMAL is born! \n";

	name = "DEFAULT";
	age = 2;
	number_of_limbs = 4;
}

Animal::Animal(string p_name, int p_age, int p_num_limbs): name(p_name), age(p_age), number_of_limbs(p_num_limbs) {
	Report();
}

void Animal::Report() {
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Number of limbs: " << number_of_limbs << endl;
}

Dog::Dog() {
	cout << "A DOG is born.\n";
}

Dog::Dog(string p_name, int p_age, int p_num_limbs): Animal(p_name, p_age, p_num_limbs) {
	
}

void Dog::Speak() {
	cout << "Woof! \n";
}