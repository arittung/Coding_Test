#include <iostream>
using namespace std;

int main() {
	int i = 1;

	while (1) {
		double diameter, time;
		int rotation_num;
		cin >> diameter >> rotation_num >> time;
		if (rotation_num == 0) {
			break;
		}
		cout << "Trip #" << i << ": ";
		double distance, mph;
		distance = (diameter/(5280.0*12)) * 3.141592 *  rotation_num;
		mph = distance / (time/3600.0);

		cout << fixed;
		cout.precision(2);
		cout << distance << " " << mph << endl;

		i++;

	}
	return 0;
}