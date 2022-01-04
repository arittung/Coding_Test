#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string front = str.substr(0, str.size() / 2);
    string back = str.substr(str.size() / 2);
    cout << front << " " << back;

    int res = 1;
    for (int i = 0; i < str.size() / 2; i++) {
        if (front[i] != back[back.size() - 1 - i]) {
            res = 0;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
