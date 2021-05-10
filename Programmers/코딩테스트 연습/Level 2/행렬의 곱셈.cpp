#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    
    int i = 0;
    while (1) {
        vector<int> matrix_arr1;
        vector<int> res;
        int mul;

        for (int j = 0; j < arr1[i].size(); j++) {
            matrix_arr1.push_back(arr1[i][j]);
            //cout << "matrix_arr1 : " << arr1[i][j] << endl;
        }
        
        /*
        for (int k = 0; k < arr2.size(); k++) {
            for (int s = 0; s < arr2[i].size(); s++) {
                matrix_arr2.push_back(arr2[k][s]);
            }
        }*/

        //int l = 0;
        cout << matrix_arr1.size()<< " " << arr2.size() << endl;
        for (int k = 0; k < arr2[0].size(); k++) {
            mul = 0;
            for (int s = 0; s < arr2.size(); s++) {
                mul += (matrix_arr1[s] * arr2[s][k]);
                //cout << matrix_arr1[s] << " * " <<arr2[s][k] << " = "<< matrix_arr1[s] * arr2[s][k] << endl;
                
            }
            res.push_back(mul);

        }
        answer.push_back(res);
        
        i++;

        if (i >= arr1.size()) {
            break;
        }
    }

    return answer;
}

int main() {
    vector<vector<int>> arr1 = { {1,4},{3,2},{4,1} };
    //cout << arr1.size() << " " << arr1[0].size() << endl;
    vector<vector<int>> arr2 = { {3,3},{3,3} };
    vector<vector<int>> res = solution(arr1, arr2);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}