using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"
#include "Source.h"

void printClocks();
void printMenu();




int main() {



	//Follow the flowchart...
	//Print menu
	//Get the user choice
		switch (menuInput) {
		case 1:
			hr24++;
			hr++;
			if (hr24 == 24) {
				hr24 = 0;
			}
			if (hr24 < 12) {
				i = 0;
			}
			if (hr == 13) {
				hr = 1;
			}
			if (hr24 >= 12) {
				i = 1;
			}
			break;
		case 2:
			minute++;
			if (minute == 60) {
				hr++;
				hr24++;
				minute = 0;
				if (hr24 < 12) {
					i = 0;
				}
				if (hr24 >= 12) {
					i = 1;
				}
				if (hr == 13) {
					hr = 1;
				}
				if (hr24 == 24) {
					hr24 = 0;
				}
			}
			break;
		case 3:
			sec++;
			if (sec == 60) {
				minute++;
				sec = 0;
				if (minute == 60) {
					hr++;
					hr24++;
					minute = 0;
					if (hr24 < 12) {
						i = 0;
					}
					if (hr == 13) {
						hr = 1;
					}
					if (hr24 >= 12) {
						i = 1;
					}
					if (hr24 == 24) {
						hr24 = 0;
					}
				}
			}
			break;
		case 4:
			cout << "Exiting Clock Program" << endl;
			exitChecker = false;
			break;
		default:
			cout << "Unexpected Input Received. Please Enter A Valid Menu Item." << endl;
		}

	}
	//Handle the user choice
		//Display updated clock
		//Error message for invalid input

	//Print Good Bye for appropriate choice


	return 0;
}
