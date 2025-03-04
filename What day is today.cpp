
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string day; //store user input as day

	//ask user for a day
	cout << "Enter a day of the week: ";
	cin >> day;

	//uppercase to lowercase
	for (int i = 0; i < day.length(); i++) {
		if (day[i] >= 'A' && day[i] <= 'Z') {
			day[i] = day[i] + 32;
		}
	}
	//Day and display message
	if (day == "saturday" || day == "sunday") {
		cout << "It is the weekend!!" << endl;
	}
	else if (day == "wednesday") {
		cout << "It is HUMP DAY, YIPPIE!" << endl;
	}
	else if (day == "monday" || day == "tuesday" || day == "thursday") {
		cout << "Its just a normal weekday!" << endl;
	}
	else if (day == "friday") {
		cout << "Its the best day of the week, TGIF!" << endl;
	}
	else {
		cout << "Invalid day, please try again" << end;
	}


	return 0;

}

