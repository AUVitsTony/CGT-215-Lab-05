// CGT-215-Lab-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This function translates one character
char cypherTranslation(char letter, vector<char> cypher) {
	// Check if it is an uppercase letter
	if (letter >= 65 && letter <= 90) {
		int position;
		position = letter - 65;
		return cypher[position];
	}
	// Check if it is a lowercase letter
	else if (letter >= 97 && letter <= 122) {
		char upperCaseLetter;
		int position;
		char translatedLetter;

		// Change lowercase letter to uppercase
		upperCaseLetter = letter - 32;

		// Find its position in the cypher
		position = upperCaseLetter - 65;

		// Get translated uppercase letter
		translatedLetter = cypher[position];

		// Change translated letter back to lowercase
		translatedLetter = translatedLetter + 32;

		return translatedLetter;
	}
	// If it is not a letter, return it without changing it
	else {
		return letter;
	}
}

int main() {
	// Create the cypher vector
	vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	string text;
	string encodedText;
	// Ask user for text
	cout << "Input text to cypher: ";

	// Get the entire line including spaces
	getline(cin, text);


	// Go through the string one character at a time
	for (int i = 0; i < text.length(); i++)
	{
		char newLetter;

		newLetter = cypherTranslation(text[i], cypher);

		encodedText = encodedText + newLetter;
	}


	// Show the encoded message
	cout << "Encoded Message: \"" << encodedText << "\"" << endl;

	return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
