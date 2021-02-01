#pragma warning(disable : 4996)

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	cout << tm.tm_year + 1900 << "-";
	cout.width(2);
	cout.fill('0');
	cout << tm.tm_mon + 1;
	
	cout << "-";
	cout.width(2);
	cout.fill('0');
	cout<< tm.tm_mday << endl;

	return 0;
}