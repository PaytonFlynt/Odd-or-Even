// Fruit-Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare array
    string fruits[5] = { "Apple", "Banana", "Cherry", "Grape", "Orange" };

    // Print original list
    cout << "Fruits in the list:" << endl;
    for (const string& fruit : fruits) {
        cout << fruit << endl;
    }

    // Bonus
    cout << "\nAdd two more fruits!" << endl;

    // Declare a larger array 
    string newFruits[7];

    // Copy the original fruits
    for (int i = 0; i < 5; i++) {
        newFruits[i] = fruits[i];
    }

    // New fruits input
    string newFruit1, newFruit2;
    cout << "Enter a new fruit: ";
    cin >> newFruit1; // New fruit in index 5

    cout << "Enter another fruit: ";
    cin >> newFruit2; // Second new fruit in index 6

    // New fruits in array
    newFruits[5] = newFruit1;
    newFruits[6] = newFruit2;

    // Print the updated list
    cout << "\nUpdated fruit list:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << newFruits[i] << endl; // Now print all 7 fruits
    }

    return 0;
}