// Blastoff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	//prompt the user for a number to beging the countdown

	cout << "To begin a countdown, please enter a number above 0: ";
	int start;
	cin >> start;

	//countdown loop
	for (int i = start; i > 0; i--) {
		cout << i << endl;

	}
	//Final message after countdown
	cout << "Countdown Complete!" << endl;
	return 0;
}
