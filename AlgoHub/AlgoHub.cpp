// AlgoHub.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>

#include <string>
#include "Insertion.h"
#include "Selection.h"
using namespace std;

string getFileContents(std::ifstream&);
void clearScreen();

int main()
{
	ifstream Reader("Logo.txt");
	string opener = getFileContents(Reader);
	cout << opener << endl;
	Reader.close();


	cout << "Enter a number to interact with a specific algorithm or data structure. \n" << endl;
	cout << "1. Insertion Sort" << endl;
	cout << "2. Selection Sort" << endl;
	cout << "0. Exit Application" << endl;
	int nav;
	bool exitCalled = false;

	
	
	while (!exitCalled){
		cin >> nav;
		switch (nav) {
			case 1:
				clearScreen();
				Insertion::initArr();
				break;
			case 2:
				clearScreen();
				Selection::initArr();
				break;
			case 0:
				exitCalled = true;
				clearScreen();
				cout << "Goodbye" << endl;
				break;
			default: 
				cout << "That is not a valid option, please reenter the nav command." << endl;
				break;
		}
	}


	return 0;
}

string getFileContents(std::ifstream& File)
{
	std::string Lines = "";        //All lines

	if (File)                      //Check if everything is good
	{
		while (File.good())
		{
			std::string TempLine;                  //Temp line
			std::getline(File, TempLine);        //Get temp line
			TempLine += "\n";                      //Add newline character

			Lines += TempLine;                     //Add newline
		}
		return Lines;
	}
	else                           //Return error
	{
		return "ERROR File does not exist.";
	}
}

void clearScreen() {
	for (int i = 0; i < 10; i++) {
		cout << "\n\n\n\n\n\n\n\n\n\n" << endl;
	}
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
