#include "Clock.h"




// Function to format number with leading 0


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

std::string get12HourFormat()
{

	return std::string();
}


void setTime(int, int, int)
{
	
	
}
// time moving stuff
class Clock {  
public:  
    int hours;  
    int minutes; 
    int seconds;  
};

class Clock12 : public Clock {  
public:  
    string standardClock; 

    Clock12() {  //Default constructor for 12-hour clock
        userTime = time(0); 
        tm* ltm = localtime(&now);  //experiment please remove
        hours = ltm->tm_hour;  
        minutes = ltm->tm_min;  
        seconds = ltm->tm_sec;  

        if (hours >= 12) {  
            standardClock = "P M";
            hours -= 12;
        }
        else
            standardClock = "A M";

    }

    void addHour(int h)
    {
        hours += h;
            if (hours > 12)
            {
                hours -= 12;
            }
            else if (hours >= 12)
            {
                if (standardClock == "A M")
                {
                    standardClock = "P M";
                }
                else if (standardClock == "P M")
                {
                    standardClock = "A M";
                }
            };
    }

    void addMinute(int m) {  
        minutes += m;  
        if (minutes >= 60) {  
            int h = minutes / 60;
            minutes -= 60 * h;
            addHour(h);
        }
    }

    void addSeconds(int sec) {  //Function to add second to 12-hour clock taking int argument
        seconds += sec;  //Adds argument value to seconds variable
        if (seconds >= 60) {  //Adds one minute if seconds value reaches 60
            int m = seconds / 60;
            seconds -= 60 * m;
            addMinute(m);
        }
    }
};
class Clock24 :public Clock {  
public:  
    Clock24() {  
        time_t now = time(0); 
        tm* ltm = localtime(&now);  
        hours = ltm->tm_hour;  
        minutes = ltm->tm_min;  
        seconds = ltm->tm_sec;  
    }

    void addHour(int h) {  
        hours += h;  
        if (hours >= 24) {  
            hours -= 24;
        }
    }

    void addMinute(int m) {  
        minutes += m;  
        if (minutes >= 60) {  
            int h = minutes / 60;
            minutes -= 60 * h;
            addHour(h);
        }
    }

    void addSeconds(int sec) {  
        seconds += sec;  
        if (seconds >= 60) {  
            int m = seconds / 60;
            seconds -= 60 * m;
            addMinute(m);
        }
    }
};