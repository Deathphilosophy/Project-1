using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"
#include "Clock.cpp"






int main() {



	//Follow the flowchart...
	//Print menu
	//Get the user choice
		switch (menuInput) {
		case 1:
			void addHour();
			break;

		case 2:
			void addMinute();

			break;
		case 3:
			void addSecond();
			break;

		case 4:

			cout << "Exiting Clock Program" << endl;
			break;

		default:
			cout << "invalid input. Try again" << endl;
		}
		
	return 0;
	}
	//Handle the user choice
		//Display updated clock
		//Error message for invalid input

	//Print Good Bye for appropriate choice

