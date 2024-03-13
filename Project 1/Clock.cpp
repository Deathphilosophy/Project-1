#include "Clock.h"


// Function to format number with leading 0
std::string formatLeading0(int)
{
	std::ostringstream oss;
	oss << std::setw(2) << std::setfill('0') << number;
}



// display menu
void printMenu()
{
	// First Line
	std::cout << std::setfill('*') << std::setw(37) << "" << std::endl;

	// Second Line
	std::cout << "* " << std::setfill(' ') << std::setw(19) << "Press H to increment the hour" << std::setw(6) << "*" << std::endl;

	std::cout << "* " << std::setfill(' ') << std::setw(19) << "Press M to increment the hour" << std::setw(6) << "*" << std::endl;

	std::cout << "* " << std::setfill(' ') << std::setw(19) << "Press S to increment the hour" << std::setw(6) << "*" << std::endl;

	std::cout << "* " << std::setfill(' ') << std::setw(15) << "Press Q to quit" << std::setw(20) << "*" << std::endl;

	std::cout << std::setfill('*') << std::setw(37) << "" << std::endl;
}

void setTime(int, int, int)
{
	std::cout << "Please enter time in military format.hh:mm:ss I.E. (22:12 : 15)";
	
}
