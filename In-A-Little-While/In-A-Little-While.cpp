// In-A-Little-While.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	//seed number generator
	srand(time(0));

	//number between 1 and 10
	int randomNumber = rand() % 10 + 1;
	int userGuess;

	cout << "Guess a number between 1 and 10: ";

	//loop till correct number is guessed
	do {
		cin >> userGuess;
		if (userGuess < randomNumber) {
			cout << "Too low, Try again!";
		}
		else if (userGuess > randomNumber) {
			cout << "Too high, Try again!";
		}
		else {
			cout << "Perfect! The number was " << randomNumber << ".\n";

		}
	   } while (userGuess != randomNumber);

	//password
	string password = "happysoul05";
	string userInput;

	cout << "\nEnter the password: ";


	//Ask until correct
	while (userInput != password) {
		cin >> userInput;

		if (userInput != password) {
			cout << "Incorrect, please try again: ";
		}
	}

	//Correct answer
	cout << "Permission granted!\n";

	return 0;

}