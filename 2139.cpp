#include <iostream>
using namespace std;

int main() {
	int month_day[13] = { 0,0 };
	for (int i = 1; i < 13; i++) {
		month_day[i] = 31;
	}
	//month_day[2] = 28;
	month_day[4] = 30;
	month_day[6] = 30;
	month_day[9] = 30;
	month_day[11] = 30;

	while (1) {
		month_day[2] = 28;
		int day, month, year;
		cin >> day >> month >> year;
		if (day == 0 && month == 0 && year == 0) {
			break;
		}
		int a = 1; //Æò³â
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				a = 1;
				if (year % 400 == 0) {	//À±³â
					a = 2; 
				}
			}
			else {
				a = 2;
			}
		}
		if (a == 2) {
			month_day[2] = 29;
		}

		//cout << month_day[2] << endl;
		int total_day = 0;
		for (int i = 1; i < month; i++) {
			total_day += month_day[i];
		}
		total_day += day;
		cout << total_day << endl;
	}
	return 0;
}