#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        int a = commands[i][0], b= commands[i][1], k= commands[i][2];

        vector<int> sub;
        for (int j = a-1; j < b; j++) {
            sub.push_back(array[j]);
        }
        sort(sub.begin(), sub.end());
        answer.push_back(sub[k-1]);
    }

    return answer;
}

int main() {
    vector<int> num = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2,5,3},{4,4,1},{1,7,3} };
    vector<int> array = solution(num, commands);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}