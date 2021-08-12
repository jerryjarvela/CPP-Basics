#include <iostream>
using namespace std;

// function prototypes. required in c++ apparently
void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void askYesOrNoQuestion();

int main()
{
	// Asks user to enter y or n and then returns the response
	askYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	cout << "Welcome!" << endl;
}

char getYesNo()
{
	// ask the user yes or no
	cout << "Please answer: Y or N.\n";

	// char local variable to store the response
	char response;

	// get input from the user via keyboard
	cin >> response;
	return response;
}

void printResponse(char responseToPrint)
{
	// print the response to the screen
	cout << "Your answer was: " << responseToPrint << endl;
}

void askYesOrNoQuestion()
{
	// greet the user
	welcome();

	// create char variable and store the result from getYesNo()
	char answer = getYesNo(); // getYesNo gets user input

	// return the response back to the user on the screen
	printResponse(answer);
}