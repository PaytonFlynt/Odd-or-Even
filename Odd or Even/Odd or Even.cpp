#include <iostream> //input/output
using namespace std; //allows std input

int main() {
	int number; //store user input as number

	//ask user for an integer
	cout << "Enter any number: ";
	cin >> number;

	//check if even or odd
	if (number % 2 == 0) {
		//remainder of 0 is even 
		cout << number << " is even." << endl;

	}
	else {
		//remainder isn't 0, is odd 
		cout << number << " is odd." << endl;

	}

	return 0;
}