#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> find_max = priorities;
    
    sort(find_max.begin(), find_max.end()); // find_max : priorities�� �ø��������� sort

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

        if (priorities[0] == find_max[n]) { // �ִ� ���� �� �տ� ���� ��, ������ ���� �� ��

            answer++;
            if (location == 0) {
                
                break;
            }
            
            priorities.erase(priorities.begin());       // ����
            find_max.pop_back();
            location--;
            
        }
        else {                              // �� �տ� �� ���� ������ ������ �ƴ� ��, �� ���� �� �ڷ� �ű�
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