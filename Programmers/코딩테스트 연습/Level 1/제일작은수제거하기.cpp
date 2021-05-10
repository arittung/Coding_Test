#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        answer.push_back(-1);
    }
    else {

        answer = arr;
        sort(arr.begin(), arr.end());
        int min = arr[0];
        for (int i = 0; i < answer.size(); i++) {
            if (min == answer[i]) {
                answer.erase(answer.begin() + i);
            }
        }
    }
    return answer;
}