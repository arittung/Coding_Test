#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	time_t now = time(NULL);
	struct tm* t = localtime(&now);

	int curr_year = t->tm_year + 1900; 
	int curr_month = t->tm_mon + 1; 
	int curr_day = t->tm_mday;
	int curr_hour = t->tm_hour;
	int curr_minute = t->tm_min; 
	int curr_second = t->tm_sec;

	
	
	cout << curr_year << endl;
	cout.width(2);
	cout.fill('0');
	cout << curr_month << endl;
	cout << curr_day << endl;

	return 0;
}