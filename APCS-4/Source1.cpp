#include <iostream>
#include <algorithm>

#include <deque>
int d[500][500];//宣告矩陣

using namespace std;

int main(void) {
	//輸入數值，設定基本環境
	int n, k;
	
	deque<int> de;//宣告de
	cin >> n >> k;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> d[i][j];
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			de.push_back(d[i][j]);
		}
	}
	sort(de.begin(), de.end());
	while (de.front() == 0) {
		de.pop_front();
	}
	int b; b = n - k;
	for (int i = 1;i <= 2*b;i++) {
		de.pop_front();
	}

	cout << de.front();
	
	return 0;
}
