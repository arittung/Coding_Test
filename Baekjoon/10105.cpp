#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    while (1) {
        if (str.size() == 1) {
            break;
        }
        int size = str.size() - 1;
        if (str[size] == 'A') {
            if (str[size - 1] == 'A') {
                str.pop_back();
               
            }
            else if (str[size - 1] == 'G') {
                str.pop_back();
                str[str.size() - 1] = 'C';
            }
            else if (str[size - 1] == 'C') {
                str.pop_back();
                str[str.size() - 1] = 'A';

            }
            else if (str[size - 1] == 'T') {
                str.pop_back();
                str[str.size() - 1] = 'G';
            }
        }
        else if (str[size] == 'G') {
            if (str[size - 1] == 'A') {
                str.pop_back();
                str[str.size() - 1] = 'C';
            }
            else if (str[size - 1] == 'G') {
                str.pop_back();
                str[str.size() - 1] = 'G';
            }
            else if (str[size - 1] == 'C') {
                str.pop_back();
                str[str.size() - 1] = 'T';

            }
            else if (str[size - 1] == 'T') {
                str.pop_back();
                str[str.size() - 1] = 'A';
            }
        }
        else if (str[size] == 'C') {
            if (str[size - 1] == 'A') {
                str.pop_back();
                str[str.size() - 1] = 'A';
            }
            else if (str[size - 1] == 'G') {
                str.pop_back();
                str[str.size() - 1] = 'T';
            }
            else if (str[size - 1] == 'C') {
                str.pop_back();
                str[str.size() - 1] = 'C';

            }
            else if (str[size - 1] == 'T') {
                str.pop_back();
                str[str.size() - 1] = 'G';
            }
        }
        else if (str[size] == 'T') {
            if (str[size - 1] == 'A') {
                str.pop_back();
                str[str.size() - 1] = 'G';

            }
            else if (str[size - 1] == 'G') {
                str.pop_back();
                str[str.size() - 1] = 'A';
            }
            else if (str[size - 1] == 'C') {
                str.pop_back();
                str[str.size() - 1] = 'G';

            }
            else if (str[size - 1] == 'T') {
                str.pop_back();
                str[str.size() - 1] = 'T';
            }
        }
    }
    cout << str << endl;

    return 0;
}
