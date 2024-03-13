#include "Clock.h"


// Function to format number with leading 0
std::string formatLeading0(int userTime)
	{
	if (string < 10)
		{
			std::string s = std::to_string(userTime);

			// Adding leading zeros to the string 
			std::string.insert(0, 1, userTime);
		}
		else
		{
			std::string str3 = std::to_string(userTime);
		}


		return 0;
	}

// display time
void timeDisplay() {
	cout << "***************************  ***************************" << endl;
	cout << "*       12-Hour Clock     *  *        24-Hour Clock    *" << endl;
	cout << "*       "; if (hr < 10) cout << "0"; cout << hr << ":"; if (minute < 10) cout << "0"; cout << minute << ":"; if (sec < 10) cout << "0"; cout << sec << " "; if (i == 0)cout << "AM"; else if (i == 1)cout << "PM"; cout << "       *  *        "; if (hr24 < 10) cout << "0"; cout << hr24 << ":"; if (minute < 10) cout << "0"; cout << minute << ":"; if (sec < 10) cout << "0"; cout << sec << "         *" << endl;
	cout << "***************************  ***************************" << endl;
}
// display menu
void menuDisplay()
{
	cout << "***************************\n";
	cout << "* 1 - Add One Hour        *\n";
	cout << "* 2 - Add One Minute      *\n";
	cout << "* 3 - Add One Second      *\n";
	cout << "* 4 - Exit Program        *\n";
	cout << "***************************\n";
}

void setTime(int, int, int)
{
	
	
}
