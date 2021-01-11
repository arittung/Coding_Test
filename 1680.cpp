#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int w, n;
		cin >> w >> n;
		int total_dis = 0;
		int total_waste = 0;
		int* dis = new int[n];
		int* waste = new int[n];

		for (int j = 0; j < n; j++) {
			cin >> dis[j] >> waste[j];
		}
		int j = 0, before = 0, k = 0;
		while (1) {
			if (j >= n) {
				break;
			}
			total_dis += (dis[j] - before);

			//cout << "전체 거리 : "<<total_dis << endl;
			if (w > (waste[j] + total_waste)) {
				total_waste += waste[j];
				
				
			}
			else if (w == (waste[j] + total_waste)) {
				if (j == n - 1) {
					total_waste += waste[j];
					
				}
				else {
					total_waste = 0;
					total_dis += (dis[j] * 2);
				}

			}
			else {
				total_waste = waste[j];
				total_dis += (dis[j]*2);
				
			}
			
			//cout << "전체 거리 업데이트: " << total_dis << " 현재 쓰레기양: " << total_waste<<endl;
			before = dis[j];
			j++;
			
			
		}
		//cout << dis[n - 1] << endl;
		total_dis += dis[n - 1];
		cout << total_dis << endl;

	}
	return 0;
}