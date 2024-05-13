/*======================================================STL======================================================*/
/*-----------------------------------------------------vector-----------------------------------------------------*/
// 系统为某一程序程序申请空间时，所需时间与空间大小无关，与申请次数有关。
// vector倍增思想：每次数组长度不够时，申请一倍当前长度的空间，减少申请时间。可以浪费空间。
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void main() {
//	vector<int> a(10); //定义一个长度为10的vector容器a
//	vector<int> b(10, 3); //容器b的长度为10，每个元素为3
//	for (int i = 0; i < b.size(); i++) cout << b[i] << endl; //遍历方式：下标索引
//	for (auto x : b) cout << x << endl; //遍历方式：增强for循环
//	for (auto it = b.begin(); it != b.end(); it++) cout << *it << endl; //遍历方式：迭代器
//	a.size(); //返回元素个数
//	a.empty(); //判断是否为空
//	a.clear(); //清空
//	a.front(); //返回第一个元素
//	a.back(); //返回最后一个元素
//	a.push_back(1); //尾插
//	a.pop_back(); //尾删
//	// vector比较：按字典序比较大小
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
//	// pair初始化方式
//	p = make_pair(10, "abc");
//	p = { 20,"def" };
//	// pair支持比较运算，先比first,相同再比second
//}
/*-----------------------------------------------------string-----------------------------------------------------*/
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	string s;
//	s.size(); //返回字母个数
//	s.empty(); //返回是否为空
//	s.clear(); //字符串清空
//	s = "abc";
//	s += "def"; //字符串拼接
//	cout << s << endl;
//	cout << s.substr(1, 2) << endl; //substr(star,size)返回从star下标开始的后size个单词的字串(下标从0开始，超过主串 或 省略size 时到主串串尾截止)
//	printf("%s\n", s.c_str()); //c_str返回字符串的首地址
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
//	//q.clear(); queue没有clear函数
//	q = queue<int>();
//	q.size();
//	q.empty();
//	q.push(1); //队尾插入一个元素
//	q.front(); //返回队头元素
//	q.back(); //返回队尾元素
//	q.pop(); //弹出队头元素
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
//	priority_queue<int> heap; //默认为大根堆
//	heap.push(-x); //存入元素负数，取时再取相反数，实现小根堆
//	priority_queue<int, vector<int>, greater<int>> heap1; //小根堆的定义方式
//	//heap.clear() 优先队列不支持clear函数
//	heap.push(x); //插入一个元素
//	heap.top(); //返回堆顶元素
//	heap.pop(); //弹出堆顶元素
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
//	s.size(); //返回栈中元素数量
//	s.empty(); //返回栈是否为空
//	s.push(x); //栈顶插入
//	s.top(); //返回栈顶元素
//	s.pop(); //删除栈顶元素
//	return 0;
//}
/*-----------------------------------------------------deque-----------------------------------------------------*/
//#include <deque>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//*
//	效率低，非常低！
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
//	s.insert(x); //插入x
//	s.find(x); //查找x
//	s.count(x); //返回x的个数
//	s.erase(x); //删除所有的x
//	s.erase(s.begin()); //删除迭代器所指定的内容
//	s.lower_bound(x); //返回大于等于x的最小数的迭代器
//	s.upper_bound(x); //返回大于x的最小数的迭代器
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
	a.insert(p); //插入一个pair
	//a.erase(p); //
	return 0;
}