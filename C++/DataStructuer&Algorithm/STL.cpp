/*======================================================STL======================================================*/
/*-----------------------------------------------------vector-----------------------------------------------------*/
// ϵͳΪĳһ�����������ռ�ʱ������ʱ����ռ��С�޹أ�����������йء�
// vector����˼�룺ÿ�����鳤�Ȳ���ʱ������һ����ǰ���ȵĿռ䣬��������ʱ�䡣�����˷ѿռ䡣
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void main() {
//	vector<int> a(10); //����һ������Ϊ10��vector����a
//	vector<int> b(10, 3); //����b�ĳ���Ϊ10��ÿ��Ԫ��Ϊ3
//	for (int i = 0; i < b.size(); i++) cout << b[i] << endl; //������ʽ���±�����
//	for (auto x : b) cout << x << endl; //������ʽ����ǿforѭ��
//	for (auto it = b.begin(); it != b.end(); it++) cout << *it << endl; //������ʽ��������
//	a.size(); //����Ԫ�ظ���
//	a.empty(); //�ж��Ƿ�Ϊ��
//	a.clear(); //���
//	a.front(); //���ص�һ��Ԫ��
//	a.back(); //�������һ��Ԫ��
//	a.push_back(1); //β��
//	a.pop_back(); //βɾ
//	// vector�Ƚϣ����ֵ���Ƚϴ�С
//	vector<int> n1(4, 3), n2(3, 4);
//	if (n1 > n2) puts("YES");
//	else puts("NO");
//}
/*------------------------------------------------------pair------------------------------------------------------*/
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	pair<int, string>p;
//	// pair��ʼ����ʽ
//	p = make_pair(10, "abc");
//	p = { 20,"def" };
//	// pair֧�ֱȽ����㣬�ȱ�first,��ͬ�ٱ�second
//}
/*-----------------------------------------------------string-----------------------------------------------------*/
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	string s;
//	s.size(); //������ĸ����
//	s.empty(); //�����Ƿ�Ϊ��
//	s.clear(); //�ַ������
//	s = "abc";
//	s += "def"; //�ַ���ƴ��
//	cout << s << endl;
//	cout << s.substr(1, 2) << endl; //substr(star,size)���ش�star�±꿪ʼ�ĺ�size�����ʵ��ִ�(�±��0��ʼ���������� �� ʡ��size ʱ��������β��ֹ)
//	printf("%s\n", s.c_str()); //c_str�����ַ������׵�ַ
//	return 0;
//}
/*-----------------------------------------------------queue-----------------------------------------------------*/
//#include <queue>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	queue<int> q;
//	//q.clear(); queueû��clear����
//	q = queue<int>();
//	q.size();
//	q.empty();
//	q.push(1); //��β����һ��Ԫ��
//	q.front(); //���ض�ͷԪ��
//	q.back(); //���ض�βԪ��
//	q.pop(); //������ͷԪ��
//	return 0;
//}
/*-------------------------------------------------priority_queue-------------------------------------------------*/
//#include <queue>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x;
//	priority_queue<int> heap; //Ĭ��Ϊ�����
//	heap.push(-x); //����Ԫ�ظ�����ȡʱ��ȡ�෴����ʵ��С����
//	priority_queue<int, vector<int>, greater<int>> heap1; //С���ѵĶ��巽ʽ
//	//heap.clear() ���ȶ��в�֧��clear����
//	heap.push(x); //����һ��Ԫ��
//	heap.top(); //���ضѶ�Ԫ��
//	heap.pop(); //�����Ѷ�Ԫ��
//}
/*-----------------------------------------------------stack-----------------------------------------------------*/
//#include <stack>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x;
//	stack<int> s;
//	s.size(); //����ջ��Ԫ������
//	s.empty(); //����ջ�Ƿ�Ϊ��
//	s.push(x); //ջ������
//	s.top(); //����ջ��Ԫ��
//	s.pop(); //ɾ��ջ��Ԫ��
//	return 0;
//}
/*-----------------------------------------------------deque-----------------------------------------------------*/
//#include <deque>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//*
//	Ч�ʵͣ��ǳ��ͣ�
//	size()
//	empty()
//	clear()
//	front()/back()
//	push_back()/pop_back()
//*/
//
//int main() {
//	deque<int> d;
//	return 0;
//}
/*--------------------------------------------------set/multiset--------------------------------------------------*/
//#include <set>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x;
//	set<int> s;
//	s.insert(x); //����x
//	s.find(x); //����x
//	s.count(x); //����x�ĸ���
//	s.erase(x); //ɾ�����е�x
//	s.erase(s.begin()); //ɾ����������ָ��������
//	s.lower_bound(x); //���ش��ڵ���x����С���ĵ�����
//	s.upper_bound(x); //���ش���x����С���ĵ�����
//	return 0;
//}
/*--------------------------------------------------map/multimap--------------------------------------------------*/
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	pair<string, int> p;
	map<string, int> a;
	a.insert(p); //����һ��pair
	//a.erase(p); //
	return 0;
}