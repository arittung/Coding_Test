#include <iostream>
using namespace std;

int main() {
	int h_s, s_p, p_a, a_h;
	cin >> h_s >> s_p >> p_a >> a_h;
	int total = h_s + s_p + p_a + a_h;
	int min = total / 60;
	int sec = total % 60;
	cout << min << endl << sec << endl;

	return 0;
}