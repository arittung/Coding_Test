#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s; j++) {
            cout << " ";
        }
        s--;
        int k = i + 1;
        while (1) {
            cout << "* ";
            k--;
            if (k == 0) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}