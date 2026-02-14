
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<vector<int>> d(n, vector<int>(n));//訂定一個n*n的矩陣
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> d[i][j];
		}
	}
	vector<int> minDist(n, INT_MAX);//建立一個有n個元素的向量
	vector<int> parent(n, -1);//定義一個儲存整數的動態陣列(每個元素皆為-1)
	vector<bool> used(n, false);//布林值，全部先定為false

	minDist[0] = 0;

	for (int i = 0;i < n;i++) {//找最近的點
		int x = -1;
			for (int j = 0;j < n;j++) {
				if (!used[j] && (x == -1 || minDist[j] < minDist[x])) {
					x = j;
				}
			}

		used[x] = true;//將數值儲存於群

		for (int c = 0;c < n;c++) {//更新點距離
			if (!used[c] && d[x][c] < minDist[c]) {
				minDist[c] = d[x][c];
				parent[c] = x;
			}
		}
	}

	vector<int> edges;//收集邊
	for (int i = 1;i < n;i++) {
		edges.push_back(d[i][parent[i]]);
	}

	sort(edges.begin(), edges.end());

	int max_mini = (n - 1) - (k - 1);
	cout << edges[max_mini] << "\n";

	return 0;
}
