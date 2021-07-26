#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	while (1) {
		stack<char> st;
		string str;
		getline(cin, str);

		bool check = true;
		if (str == ".") {
			break;
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				st.push(str[i]);
			}
			else if (str[i] == ')') {
				if (st.size() != 0 && st.top() == '(') {
					st.pop();
				}
				else {
					check = false;
				}
			}
			else if (str[i] == ']') {
				if (st.size() != 0 && st.top() == '[') {
					st.pop();
				}
				else {
					check = false;
				}
			}
			
		}
		if (st.size() == 0 && check == true) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}