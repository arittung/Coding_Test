#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> find_max = priorities;
    
    sort(find_max.begin(), find_max.end()); // find_max : priorities를 올림차순으로 sort

    int n = find_max.size() - 1;
    //cout << find_max.size() << endl;
    
    while (1) {
        n = find_max.size() - 1;
        /*
        cout << "before location: " << location << endl;
        cout << "priorities: ";
        for (int i = 0; i < priorities.size(); i++) {
            cout << priorities[i] << " ";
        }
        cout << endl;
        */

        if (priorities[0] == find_max[n]) { // 최대 값이 맨 앞에 왔을 때, 제거할 순서 일 때

            answer++;
            if (location == 0) {
                
                break;
            }
            
            priorities.erase(priorities.begin());       // 제거
            find_max.pop_back();
            location--;
            
        }
        else {                              // 맨 앞에 온 값이 제거할 순서가 아닐 때, 맨 앞을 맨 뒤로 옮김
            int tmp = priorities[0];
            priorities.erase(priorities.begin());
            priorities.push_back(tmp);
            if (location == 0) {
                location = priorities.size() - 1;
            }
            else {
                location--;
            }

        }
        /*
        cout << "after location: " << location << endl;
        cout << "priorities: ";
        for (int i = 0; i < priorities.size(); i++) {
            cout << priorities[i] << " ";
        }
        cout << endl;
        cout << endl;
        */
        
        
    }

    return answer;
}

int main() {
    vector<int> a = {2,1,3,2};
    cout << solution(a, 2) << endl;
    return 0;
}