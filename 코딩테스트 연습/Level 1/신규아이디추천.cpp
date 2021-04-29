#include <string>
#include <vector>
#include <iostream>

using namespace std;



string solution(string new_id) {
    string answer = "";
    vector<int> delete_point;

    for (int i = 0; i < new_id.size(); i++) {
        // 1
        if (new_id[i] >= 65 && new_id[i] <= 90) {
            new_id[i] += 32;
            //cout << "대문자 -> 소문자 : " << new_id[i] << endl;
        } // 2
        else if (new_id[i] != '-' && new_id[i] != '_' && new_id[i] != '.') {
            //cout << "들어갔니? -> " << new_id[i] << " " << int(new_id[i]) << endl;
            if (!(new_id[i] >= 97 && new_id[i] <= 122)) {
                
                if (!(new_id[i] >= '0' && new_id[i] <= '9')) {
                    //cout << "제거할 문자 : " << new_id[i] << endl;
                    delete_point.push_back(i);
                    
                }
            }
        }  
        
    }

    for (int i = 0; i < delete_point.size(); i++) {
        //cout << "삭제할 문자 : " << new_id[delete_point[i] - i] << endl;
        new_id.erase(new_id.begin() + delete_point[i] - i);
        
    }
    //cout << "1,2 : " << new_id << endl;

    delete_point.clear();
    //3
    for (int i = 0; i < new_id.size() - 1; i++) {
        if ( new_id[i] == '.' && new_id[i + 1] == '.') {
            //cout << i << "번째 .이 연속으로 옵니당 : " << new_id[i] << endl;
            delete_point.push_back(i);

        }
    }
    for (int i = 0; i < delete_point.size(); i++) {
        //cout << "삭제할 문자 : " << new_id[delete_point[i] - i] << endl;
        new_id.erase(new_id.begin() + delete_point[i] - i);
        
    }

    //cout << "3 : "<< new_id << endl;
    
    // 4
    if (new_id[0] == '.') {
        new_id.erase(new_id.begin());
    }

    if (new_id.back() == '.') {
        //cout << "마지막 .삭제" << endl;
        new_id.erase(new_id.end() - 1);
    }
    //cout <<"4 : "<< new_id << endl;
    
    // 5
    if (new_id.empty() == true) {
        new_id = "a";
    } //6
    else if (new_id.size() >= 16) {
        new_id.erase(15);
        //cout << "15로 줄임 : " << new_id << endl;
        if (new_id.back() == '.') {
            new_id.erase(new_id.end() - 1);
        }
    }

    //cout <<"5,6 : "<< new_id << endl;
    // 7
    if (new_id.size() <= 2) {
        while (1) {
            if (new_id.size() == 3) {
                break;
            }
            new_id += new_id.back();
        }
    }

    //cout << "7 : " << new_id << endl;
    answer = new_id;
    return answer;
}

int main() {
    string a = "z-+.^.";
    cout << solution(a) << endl;
    return 0;
}