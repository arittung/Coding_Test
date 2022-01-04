#include <iostream>
#include <string>
#include <cmath>
using namespace std;




int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int size = sqrt(str.size());
        char** letter = new char* [size];
        for (int i = 0; i < size; i++) {
            letter[i] = new char[size];
        }

        string safe = "";
        for (int i = 0; i < size; i++) {
            for (int j = size - 1 - i; j <= str.size() - 1 - i; j += size) {
                safe += str[j];
            }
        }
        cout << safe << endl;
        
        

    }
	return 0;
}