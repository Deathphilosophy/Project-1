#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;



void setTime(int, int, int);
void addHour();
void addSecond();
void addMinute();
std::string get12HourFormat();
std::string get24HourFormat();
std::string formatLeading0(int);

std::string pad(int);
std::string getSuffix();
int hr = 12; 
int minute = 0; 
int sec = 0; 
int hr24 = 0; 

int menuInput; 
bool exitChecker = true; 
int i = 0; 
#endif