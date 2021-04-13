#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }


    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()),answer.end());

    return answer;
}

/*
int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    vector<int> result = solution(numbers);
    cout << "[";
    for (int i = 0; i < result.size()-1; i++) {
        cout << result[i] << ",";
    }
    cout << result[result.size() - 1] << "]" << endl;
    

    return 0;
}*/