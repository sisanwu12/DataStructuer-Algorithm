/*-----------------------------------------------顺序表-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define InitSize 10//默认的最大长度
//
//typedef struct//定义顺序表内容函数
//{
//	int* data;//指示动态分配数组的指针
//	int MaxSize;//顺序表的最大容量
//	int length;//顺序表的当前长度
//}SeqList;
//
//void InitList(SeqList& L)//初始化顺序表函数
//{
//	//用函数向内存申请一片连续的存储空间
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
////动态数组扩容函数
//void IncreaseSize(SeqList& L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];//将数据复制到新空间区域
//	}
//	L.MaxSize = L.MaxSize + len;//顺序表最大长度增加len
//	free(p);//释放原来的内存空间
//}
//
//int main()
//{
//	SeqList L;//声明一个顺序表
//	InitList(L);//初始化顺序表
//
//	IncreaseSize(L, 5);//将顺序表扩充5个整型大小
//	return 0;
//}
/*-----------------------------------------------单链表-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////定义单链表的节点
//typedef struct LNode
//{
//	char data;//单链表中存放的数据
//	struct LNode* next;//指向下一节点的指针
//}LNode, * LNodeList; //为节点 struct LNode 取别名 LNode ;节点指针 LNode* 取别名 LNodeList
//
////初始化函数
//bool InitList(LNodeList& L)
//{
//	L = (LNode*)malloc(sizeof(LNode));//分配一个头节点
//	if (L == NULL)// 内存不足，错误
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	L->next = NULL;
//	cout << "初始化成功" << endl;
//	return true; //初始化成功
//}
//
////后插函数
//bool InsertNextNode(LNode* p, char data)
//{
//	if (p == NULL)
//	{
//		cout << "数据错误" << endl;
//		return false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = p->next;
//	p->next = s;
//	cout << "插入成功" << endl;
//	return true;
//}
//
////尾插添加数据
//LNode* InsertEnd(LNode* end, char data)
//{
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = NULL;
//	end->next = s;
//	end = s;
//	return end;
//}
//
////按位查找函数
//LNode* GetLNode(LNodeList& L, int i)
//{
//	if (i < 0)
//	{
//		cout << "位序错误" << endl;
//		return NULL;
//	}
//	LNode* p = L;//建立扫描指针p
//	int j = 0;//记录当前p指向的节点位序
//	//循环找到第 i 节点的前驱节点 i-1 节点
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////按值查找函数
//LNode* LocateElem(LNodeList& L, char data)
//{
//	LNode* p = L->next;
//	while (p != NULL && p->data != data)
//	{
//		p = p->next;
//	}
//	return p;
//}
//
////求链表长度函数
//int GetLListLen(LNodeList& L)
//{
//	int len = 0;
//	LNode* p = L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		len++;
//	}
//	return len;
//}
//
////按位插入函数
//bool ListInsert(LNodeList& L, int i, char a)
//{
//	if (i < 1)//判断位序是否合法
//	{
//		cout << "位序不合法，错误" << endl;
//		return false;
//	}
//	LNode* p = GetLNode(L, i - 1);//由按位查找函数实现查找
//	return InsertNextNode(p, a);//由后插函数实现插入
//}
//
////按位删除函数
//bool ListDelete(LNodeList& L, int i)
//{
//	if (i < 1)
//	{
//		cout << "位序不合法，错误" << endl;
//		return false;
//	}
//	LNode* p = GetLNode(L, i - 1);//由按位查找函数实现查找
//	if (p == NULL)
//	{
//		cout << "位序不合法，错误" << endl;
//		return false;
//	}
//	LNode* q = p->next;//令q指向要删除的节点
//	p = q->next;//令p指针指向下下一节点
//	free(q);//释放要删除的节点
//	cout << "删除成功" << endl;
//	return true;
//}
//
////指定节点的前插函数
//bool InsertPriorNode(LNode* P, char a)
//{
//	if (P == NULL)
//	{
//		cout << "数据错误" << endl;
//		return 0;
//	}
//	//申请空间存储数据
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	s->next = P->next;
//	P->next = s;//将新节点连到P节点后
//	s->data = P->data;//在新节点内存入P节点的数据
//	P->data = a;//将新数据存入P节点
//	cout << "插入成功" << endl;
//	return true;
//}
//
////指定节点的删除函数
//bool DeleteNode(LNode* p)
//{
//	if (p == NULL)
//	{
//		cout << "数据错误" << endl;
//		return false;
//	}
//	LNode* q = p->next;//令q指针指向p的后继节点
//	//如果p指向的是最后一个节点
//	if (q == NULL)
//	{
//		free(p);
//		cout << "删除成功" << endl;
//		return true;
//	}
//	p->data = q->data;//将q节点数据传给p
//	p->next = q->next;//将q的后继指针传给p
//	free(q);//删除q节点
//	cout << "删除成功" << endl;
//	return true;
//}
//
//void test01()
//{
//	LNodeList L;//建立一个指向头节点的指针
//	InitList(L);//初始化该指针
//	LNode* end = InsertEnd(L, 'a');
//	end = InsertEnd(end, 'b');
//	end = InsertEnd(end, 'c');
//	end = InsertEnd(end, 'd');
//	end = InsertEnd(end, 'e');
//	end = InsertEnd(end, 'f');
//	int len = GetLListLen(L);
//	cout << "链表的长度为：" << len << endl;
//	ListInsert(L, 2, 'A');
//
//}
//int main()
//{
//	test01();
//	return 0;
//}
/*-----------------------------------------------双链表-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////定义双链表节点
//typedef struct DNode
//{
//	char data;//数据域
//	struct DNode* prior, * next;//指针域（前驱与后继）
//}DNode, *DLinkList;
//
////申请节点空间函数
//DNode* ApplySpace()
//{
//	DNode* s = (DNode*)malloc(sizeof(DNode));
//	if (s == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return NULL;
//	}
//	return s;
//}
//
////初始化双链表函数
//bool InitDLinkList(DLinkList& L)
//{
//	L = ApplySpace();//分配一个头节点
//	if (L == NULL) return false;
//	L->prior = NULL;//头节点的前驱指针为NULL
//	L->next = NULL;//头节点后暂时没有节点
//	return true;
//}
//
////双链表的插入函数
//bool InserDNode(DNode* p, DNode* s)
//{
//	//(将s节点插入p节点之后)
//	if (p == NULL || s == NULL)//非法参数
//	{
//		cout << "参数错误" << endl;
//		return false;
//	}
//	s->next = p->next;//使s的后继指针指向p后继指针所指的区域
//	if (p->next != NULL)//当p没有后继节点，就不需要更改p后继结点的前驱指针
//		p->next->prior = s;//使p的后继结点的前驱指针指向s节点
//	s->prior = p;//使s的前驱指针指向p节点
//	p->next = s;//使p的后继指针指向s节点
//	return true;
//}
//
////双链表的前插函数
//bool InserPriorDNode(DNode* p, char data)
//{
//	DNode* q = p->prior;//找到该节点的前驱节点
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(q, s);//调用插入节点函数实现前插
//}
//
////双链表的后插函数
//bool InserNestDNode(DNode* p, char data)
//{
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(p, s);
//}
//
////双链表的按位查找函数
//DNode* GetDNode(DLinkList& L, int i)
//{
//	if (i < 0)
//	{
//		cout << "位序错误" << endl;
//		return NULL;
//	}
//	DNode* p = L;//建立扫描指针p
//	int j = 0;//记录当前p指向的节点位序
//	//循环找到第 i 节点的前驱节点 i-1 节点
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////按值查找函数
//DNode* LocateElem(DLinkList& L, char data)
//{
//	DNode* p = L->next;
//	while (p != NULL && p->data != data)
//	{
//		p = p->next;
//	}
//	return p;
//}
//
////双链表的按位插入函数
//bool ListInsert(DLinkList& L, int i,char data)
//{
//	DNode* p = GetDNode(L, i);
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(p, s);
//}
//
////双链表的删除指定节点函数
//bool DeleteNode(DNode* p)
//{
//	if (p == NULL)
//	{
//		cout << "数据错误" << endl;
//		return false;
//	}
//	p->prior->next = p->next;
//	if (p->next != NULL)
//		p->next->prior = p->prior;
//	free(p);
//}
//
//void test01()
//{
//	DLinkList L;
//	InitDLinkList(L);
//	char a = 'a';
//	ListInsert(L, 1, a);
//	DNode* s = LocateElem(L, 'a');
//	cout << s->data << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
/*---------------------------------------------静态单链表---------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//const int MaxSize = 10;//静态链表的最大长度
//
////head 表示头节点的下标
//// e[i] 表示节点i的值
//// ne[i] 表示节点i的next指针
//// idx 表示当前已经用到的节点指针
//int head, e[MaxSize], ne[MaxSize], idx;
//
////初始化
//void init() {
//	head = -1;
//	idx = 0;
//}
//
////插入
//void add_to_head(int x) {	//头插法
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
//
//void add(int k, int x) {
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
//
////删除
//void remove(int k) {
//	ne[k] = ne[ne[k]];
//}
//
/*---------------------------------------------静态双链表---------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//const int MaxSize = 10;
//
//int m;
//int e[MaxSize], l[MaxSize], r[MaxSize], idx;
//
//void init() {
//	// 0表示左端点，1表示右端点
//	r[0] = 1, l[0] = 0;
//	idx = 2;
//}
//
//void add(int k, int x) {
//	e[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//}
//
//void remove(int k) {
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
/*-----------------------------------------------顺序栈-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
////定义栈
//typedef struct
//{
//	char data[MaxSize];//静态数组存放栈中数据
//	int top;//栈顶指针（数组下标）
//}SqStack;
//
////初始化栈
//void InitStack(SqStack& s)
//{
//	s.top = -1;//空栈时栈顶指针不应为0
//	InitStack(s);
//}
//
////新元素入栈（进栈）
//bool Push(SqStack& s, char x)
//{
//	if (s.top == MaxSize - 1)
//	{
//		cout << "栈满，错误" << endl;
//		return false;
//	}
//	s.top += 1;//指针加1
//	s.data[s.top] = x;//新元素入栈
//	cout << "入栈成功" << endl;
//	return true;
//}
//
////栈顶元素出栈
//bool Pop(SqStack& s, char& x)
//{
//	if (s.top == -1)
//	{
//		cout << "该栈已空，错误" << endl;
//		return false;
//	}
//	x = s.data[s.top];
//	s.top -= 1;
//	cout << "出栈成功" << endl;
//	return true;
//}
//
////读取栈顶元素
//bool GetTop(SqStack& s, char& x)
//{
//	if (s.top == -1)
//	{
//		cout << "该栈已空，错误" << endl;
//		return false;
//	}
//	x = s.data[s.top];
//	return true;
//}
//
//void test01()
//{
//	SqStack s;
//	InitStack(s);
//}
/*-----------------------------------------链栈(带头节点实现)------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////链栈的节点
//typedef struct Linknode
//{
//	char data;
//	struct Linknode* next;
//}Stack;
//
////将栈顶指针存入改造的头节点中
//typedef struct Head
//{
//	int top;
//	Stack* next;
//}*LiStack;
//
////初始化链栈
//bool InitStack(LiStack& L)
//{
//	L = (Head*)malloc(sizeof(Head));
//	if (L == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	L->top = 0;
//	L->next = NULL;
//	cout << "初始化成功" << endl;
//	return true;
//}
//
////新元素入栈（进栈）
//bool Push(LiStack& L, char data)
//{
//	Stack* s = (Stack*)malloc(sizeof(Stack));
//	if (s == NULL)
//	{
//		cout << "内存不足，错误" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = L->next;
//	L->next = s;
//	L->top += 1;
//	return true;
//}
//
////栈顶元素出栈
//bool Pop(LiStack& L, Stack* x)
//{
//	if (L->top == 0)
//	{
//		cout << "该栈已空，错误" << endl;
//		return false;
//	}
//	Stack* p = L->next;
//	x->data = p->data;
//	L->next = p->next;
//	L->top -= 1;
//	free(p);
//	return true;
//}
//
////读取栈顶元素
//bool GetTop(LiStack& L, Stack* x)
//{
//	if (L->top == 0)
//	{
//		cout << "该栈已空，错误" << endl;
//		return false;
//	}
//	x->data = L->next->data;
//	return true;
//}
//
//void test01()
//{
//	LiStack L;
//	InitStack(L);
//	Push(L, 'a');
//	Push(L, 'b');
//	cout << L->top << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
/*-----------------------------------------------顺序队-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct
//{
//	char data[MaxSize];//用静态数组存放队列元素
//	int front, rear;//队头指针和队尾指针
//}SqQueue;
//
////初始化队列
//void InitQueue(SqQueue& Q)
//{
//	Q.rear = Q.front = 0;
//}
//
////队列判空函数
//bool QueueEmpty(SqQueue& Q)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	cout << "队列非空" << endl;
//	return true;
//}
//
////队尾入队
//bool EnQueue(SqQueue& Q, char x)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)//牺牲一个存储单元，以使队列不被判空
//	{
//		cout << "队列已满" << endl;
//		return false;
//	}
//	Q.data[Q.rear] = x;
//	Q.rear = (Q.rear + 1) % MaxSize;//队尾指针加一取模，形成循环队列
//	return true;
//}
//
////队头出队
//bool DeQueue(SqQueue& Q, char &data)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	data = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;
//	return true;
//}
//
////获取队头元素
//bool GetHead(SqQueue Q, char& x)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	x = Q.data[Q.front];
//	return true;
//}
//
//void test01()
//{
//	SqQueue Q;
//}
/*-------------------------------------顺序队(个人)[不牺牲存储域]---------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct
//{
//	char data[MaxSize];
//	int front, rear;
//}SqQueue;
//
////初始化队列
//void InitQueue(SqQueue& Q)
//{
//	Q.rear = Q.front = 0;
//}
//
////队列判空函数
//bool QueueEmpty(SqQueue& Q)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	cout << "队列非空" << endl;
//	return true;
//}
//
////队尾入队
//bool EnQueue(SqQueue& Q, char x)
//{
//	if ((Q.rear+1)%MaxSize==Q.front)
//	{
//		cout << "队列已满" << endl;
//		return false;
//	}
//	Q.data[Q.rear] = x;
//	if (Q.rear != Q.front)//当队列不为空时，队尾指针后移1位
//		Q.rear += 1;
//	Q.rear %= MaxSize;//取模形成循环队列
//	return true;
//}
//
////队头出队
//bool DeQueue(SqQueue& Q, char &data)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	data = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;
//	return true;
//}
//
////获取队头元素
//bool GetHead(SqQueue Q, char& x)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "队列为空" << endl;
//		return false;
//	}
//	x = Q.data[Q.front];
//	return true;
//}
//
//void test01()
//{
//	SqQueue Q;
//	InitQueue(Q);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
/*-----------------------------------------链队(不带头节点)--------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//typedef struct LinkNode
//{
//	char data;
//	struct LinkNode* next;
//}LinkNode;
//
//typedef struct
//{
//	LinkNode* front, * rear;
//}LinkQueue;
//
////初始化链队
//void InitQueue(LinkQueue& Q)
//{
//	Q.front = NULL;
//	Q.rear = NULL;
//}
//
////队尾入队
//bool EnQueue(LinkQueue& Q, char& data)
//{
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	if (s == NULL)
//	{
//		cout << "内存已满" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = NULL;
//	if (Q.front == NULL)//链队为空，插入的是第一个元素
//	{
//		Q.front = s;//头尾指针均指向s
//		Q.rear = s;
//	}
//	else
//	{
//		Q.rear->next = s;//s插入尾指针指向的元素之后
//		Q.rear = s;//修改尾指针
//	}
//	cout << "已入队" << endl;
//	return true;
//}
//
////队头出队
//bool DeQueue(LinkQueue& Q, char& x)
//{
//	if (Q.front == NULL)
//	{
//		cout << "空队" << endl;
//		return false;
//	}
//	LinkNode* p = Q.front;
//	x = p->data;
//	Q.front = p->next;
//	if (Q.rear == p)//该节点为链队的最后一个节点
//	{
//		Q.front = NULL;
//		Q.rear = NULL;
//	}
//	free(p);
//	cout << "已出队" << endl;
//	return true;
//}
//
//void test01()
//{
//	LinkQueue Q;
//	InitQueue(Q);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
/*-----------------------------------------二叉树的链式存储--------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//typedef struct BiTNode
//{
//	int data;//数据域
//	struct BiTNode* lchild, * rchild;//左右子节点
//	struct BiTNode* parent;//父节点
//}BiTNode, * BiTree;
//
//typedef struct LinkNode
//{
//	BiTNode* data;
//	struct LinkNode* next;
//}LinkNode;
//
//typedef struct
//{
//	LinkNode* front, * rear;
//}LinkQueue;
//
//void InitQueue(LinkQueue& Q)
//{
//	Q.front = nullptr;
//	Q.rear = nullptr;
//}
//bool IsEmpty(LinkQueue& Q)
//{
//	if (Q.front == Q.rear)
//		return true;
//	return false;
//}
//bool EnQueue(LinkQueue& Q, BiTNode* data)
//{
//	LinkNode* s = new LinkNode;
//	s->data = data;
//	s->next = nullptr;
//	if (Q.front == nullptr)//链队为空，插入的是第一个元素
//	{
//		Q.front = s;//头尾指针均指向s
//		Q.rear = s;
//	}
//	else
//	{
//		Q.rear->next = s;//s插入尾指针指向的元素之后
//		Q.rear = s;//修改尾指针
//	}
//	return true;
//}
//bool DeQueue(LinkQueue& Q, BiTNode* data)
//{
//	if (Q.front == nullptr)
//		return false;
//	LinkNode* p = Q.front;
//	data = p->data;
//	Q.front = p->next;
//	if (Q.rear == p)//该节点为链队的最后一个节点
//	{
//		Q.front = nullptr;
//		Q.rear = nullptr;
//	}
//	free(p);
//	return true;
//}
//
////初始化二叉树
//bool InitBiTree(BiTree root)
//{
//	root = new BiTNode;
//	root->data = 1;
//	root->lchild = nullptr;
//	root->rchild = nullptr;
//	root->parent = nullptr;
//}
//
////二叉树的节点插入
//bool InsertBiTNode(BiTNode* p, int data)
//{
//	BiTNode* s = new BiTNode;
//	s->data = data;
//	s->parent = p;
//	if (p->lchild == nullptr) p->lchild = s;
//	else
//	{
//		if (p->rchild == nullptr)
//			return false;
//		else p->rchild = s;
//	}
//	s->lchild = nullptr;
//	s->rchild = nullptr;
//	return true;
//}
//
////二叉树的遍历(先序遍历)
//void Pre0rder(BiTree T)
//{
//	if (T != nullptr)
//	{
//		cout << T->data << endl;
//		Pre0rder(T->lchild);
//		Pre0rder(T->rchild);
//	}
//	return;
//}
//
////二叉树的层序遍历
//void Level0rder(BiTree T)
//{
//	LinkQueue Q;//创建辅助队
//	InitQueue(Q);
//	BiTree p;
//	EnQueue(Q, T);//将根节点入队
//	while (!IsEmpty(Q))//列表不为空则循环
//	{
//		DeQueue(Q, p);//队头节点出队
//		cout << p->data << endl;//访问出队节点
//		if (p->lchild != nullptr)
//			EnQueue(Q, p->lchild);//左子节点入队
//		if (p->rchild != nullptr)
//			EnQueue(Q, p->rchild);//右子节点入队
//	}
//}
//
////求树的深度
//int treeDepth(BiTree T)
//{
//	if (T == nullptr)
//		return 0;
//	else
//	{
//		int l = treeDepth(T->lchild);
//		int r = treeDepth(T->rchild);
//		return l > r ? l + 1 : r + 1;
//	}
//}
//
//int main()
//{
//
//	return 0;
//}
/*---------------------------------------------哈夫曼树-----------------------------------------------------------*/
#include <iostream>
using namespace std;

/*---------------------------------------------字符串树-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
////Son为字符串树的指针，cnt记录该字符串出现的次数，idx记录用到了哪个节点
//int Son[N][26], cnt[N], idx = 0;//下标为0的点，既是根节点，又是空节点
//
//// 插入一个字符串
//void insert(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; i++) {
//		int u = str[i] - 'a';
//		if (!Son[p][u]) Son[p][u] = ++idx;
//		p = Son[p][u];
//	}
//	cnt[p]++;
//}
//
//// 统计字符串数量
//int query(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; i++) {
//		int u = str[i] - 'a';
//		if (!Son[p][u]) return 0;
//		p = Son[p][u];
//	}
//	return cnt[p];
//}
/*-------------------------------------------并查集(UFS)----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//
//int p[N];
//
////初始化
//void Init() {
//	for (int i = 0; i < N; i++) p[i] = i;
//}
//
//// 返回x的祖宗节点 + 路径压缩
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//
////合并
//void Combined(int a,int b) {
//	p[find(a)] = find(b);
//}
/*---------------------------------------------------------------------------------------------------------------*/
