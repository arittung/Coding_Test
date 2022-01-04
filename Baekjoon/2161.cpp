#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v, out;

    for (int i = 1; i <= n; i++) {
        
        v.push_back(i);
    }

    while (1) {

        if (v.size() == 1) {
            break;
        }
        int a = v.front();
        v.erase(v.begin()+0);
        out.push_back(a);
        
        int b = v.front();
        v.erase(v.begin() + 0);
        v.push_back(b);
        

        /*for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        */


    }


    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }
    cout << v[0] <<endl;
    
    return 0;
}