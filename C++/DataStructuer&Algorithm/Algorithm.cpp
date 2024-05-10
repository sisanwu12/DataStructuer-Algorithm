/*=============================================排序算法===========================================================*/
/*---------------------------------------------快速排序-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//void QuickSort(int q[], int l, int r) {
//	if (l >= r) return;
//	int x = q[l + r >> 1], temp;
//	int i = l - 1, j = r + 1;
//	while (i < j) {
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) temp = q[i], q[i] = q[j], q[j] = temp;
//	}
//	QuickSort(q, l, j), QuickSort(q, j + 1, r);
//}
/*---------------------------------------------插入排序-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//void InsertSort(int q[], int n) {
//	int j, temp;
//	for (int i = 1; i < n; i++) {
//		if (q[i] < q[i - 1]) {
//			temp = q[i];
//			for (j = i - 1; j >= 0 && q[j] > temp; --j) q[j + 1] = q[j];
//			q[j + 1] = temp;
//		}
//	}
//}
/*---------------------------------------------希尔排序-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//void ShellSort(int q[], int n) {
//	int temp, j;
//	for (int d = n / 2; d >= 1; d /= 2) {
//		for (int i = d; i < n; i++) {
//			if (q[i] < q[i - d]) {
//				temp = q[i];
//				for (j = i - d; j >= 0 && temp < q[j]; j -= d) q[j + d] = q[j];
//				q[j + d] = temp;
//			}
//		}
//	}
//}
/*---------------------------------------------归并排序-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n;
//int q[N], tmp[N];
//
//void merge_sort(int q[], int l, int r) {
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r) {
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//}
/*----------------------------------------------堆排序------------------------------------------------------------*/
#include <iostream>
using namespace std;

void
/*------------------------------------------朴素模式匹配算法-------------------------------------------------------*/
//#include <iostream>
//#include <string>
//using namespace std;
//
//int Index(string& S, string& T){
//	int i = 0, j = 0;
//	while (i <= S.length() - 1 && j <= T.length() - 1){
//		if (S[i] == T[j]){
//			++i;
//			++j;
//		}
//		else{
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j == T.length()) return i - T.length();
//	else return -1;
//}
//
//int main(){
//	string a = "abccdab";
//	string b = "cda";
//	int l = Index(a, b);
//	cout << l;
//	return 0;
//}
/*----------------------------------------------KMP算法-----------------------------------------------------------*/
//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 10;
//
//// 求next数组
//int* getNext(string& P) {
//	int* next = new int[N];
//	next[0] = 0;
//	int i = 0, j = 0;
//	while (i < P.length()) {
//		if (j == 0 || P[i + 1] == P[j]) next[++i] = ++j;
//		else j = next[j-1];
//	}
//	return next;
//}
//
//int Index(string& S, string& P) {
//	int i = 0, j = 0;
//	int* next = getNext(P);
//	while (i < S.length() && j < P.length()) {
//		if (j == -1 || S[i] == P[j]) {
//			i++;
//			j++;
//		}
//		else j = next[j] - 1;
//	}
//	delete next;
//	next = nullptr;
//	if (j == P.length()) return i - P.length();
//	else return -1;
//}
/*----------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------DFS：深度优先搜索------------------------------------------------------*/
//全排列问题
//#include <iostream>
//
//using namespace std;
//
//const int N = 10;
//
//int n;
//int path[N];
//bool st[N];
//
//void dfs(int u) {
//	if (u == n) {
//		for (int i = 0; i < n; i++) printf("%d ", path[i]);
//		puts("");
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!st[i]) {
//			path[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	dfs(0);
//	return 0;
//}


//n皇后问题
//#include <iostream>
//using namespace std;
//
//const int N = 20;
//int n;
//char g[N][N];
//bool col[N], dg[N], udg[N];
//
//void dfs(int u) {
//	if (u == n) {
//		for (int i = 0; i < n; i++) puts(g[i]);
//		puts("");
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (!col[i] && !dg[u + i] && !udg[n - u + i]) {
//			g[u][i] = 'X';
//			col[i] = dg[u + i] = udg[n - u + i] = true;
//			dfs(u + 1);
//			col[i] = dg[u + i] = udg[n - u + i] = false;
//			g[u][i] = 'O';
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			g[i][j] = 'O';
//		}
//	}
//	dfs(0);
//	return 0;
//}


//DFS遍历
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 100010, M = N * 2;
//
//int n, m;
//int h[N], e[M], ne[M], idx;
//bool st[N];
//
//void add(int a, int b) {
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void dfs(int u) {
//	st[u] = true;		//标记已被搜过
//	for (int i = h[u]; i != -1; i = ne[i]) {
//		int j = e[i];
//		if (!st[j]) dfs(j);
//	}
//}
//
//int main() {
//	memset(h, -1, sizeof h);
//	dfs(1);
//}

/*----------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------BFS：宽度优先搜索-------------------------------------------------------*/
//走迷宫
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef pair<int, int> PII;
//
//const int N = 110;
//int n, m;
//int g[N][N];
//int d[N][N];
//PII q[N * N];
//
//int bfs() {
//	int hh = 0, tt = 0;
//	q[0] = { 0,0 };
//
//	memset(d, -1, sizeof d);
//	d[0][0] = 0;
//
//	int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//
//	while (hh <= -tt) {
//		auto t = q[hh++];
//
//		for (int i = 0; i < 4; i++) {
//			int x = t.first + dx[i], y = t.second + dy[i];
//			if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1) {
//				d[x][y] = d[t.first][t.second] + 1;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	return d[n - 1][m - 1];
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for(int j=0;j<m;j++)
//			cin >> g[i][j];
//	cout << bfs() << endl;
//}