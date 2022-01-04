#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int space[101][101] = { 0,0 };
    int res = 0;
    for (int i = 0; i < 4; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for (int j = a; j < c; j++) {
            for (int k = b; k < d; k++) {
                if (space[j][k] == 0) {
                    space[j][k] ++;
                    res++;

                }
            }
        }
    }
    cout << res << endl;
    return 0;
}