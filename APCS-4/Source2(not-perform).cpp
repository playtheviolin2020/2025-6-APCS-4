
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<vector<int>> d(n, vector<int>(n));
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
			cin >> d[i][j];

	vector<int> minDist(n, INT_MAX);
	vector<int> parent(n,-1)
	vector<> 


