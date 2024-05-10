/*-----------------------------------------------˳���-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define InitSize 10//Ĭ�ϵ���󳤶�
//
//typedef struct//����˳������ݺ���
//{
//	int* data;//ָʾ��̬���������ָ��
//	int MaxSize;//˳�����������
//	int length;//˳���ĵ�ǰ����
//}SeqList;
//
//void InitList(SeqList& L)//��ʼ��˳�����
//{
//	//�ú������ڴ�����һƬ�����Ĵ洢�ռ�
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
////��̬�������ݺ���
//void IncreaseSize(SeqList& L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];//�����ݸ��Ƶ��¿ռ�����
//	}
//	L.MaxSize = L.MaxSize + len;//˳�����󳤶�����len
//	free(p);//�ͷ�ԭ�����ڴ�ռ�
//}
//
//int main()
//{
//	SeqList L;//����һ��˳���
//	InitList(L);//��ʼ��˳���
//
//	IncreaseSize(L, 5);//��˳�������5�����ʹ�С
//	return 0;
//}
/*-----------------------------------------------������-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////���嵥����Ľڵ�
//typedef struct LNode
//{
//	char data;//�������д�ŵ�����
//	struct LNode* next;//ָ����һ�ڵ��ָ��
//}LNode, * LNodeList; //Ϊ�ڵ� struct LNode ȡ���� LNode ;�ڵ�ָ�� LNode* ȡ���� LNodeList
//
////��ʼ������
//bool InitList(LNodeList& L)
//{
//	L = (LNode*)malloc(sizeof(LNode));//����һ��ͷ�ڵ�
//	if (L == NULL)// �ڴ治�㣬����
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	L->next = NULL;
//	cout << "��ʼ���ɹ�" << endl;
//	return true; //��ʼ���ɹ�
//}
//
////��庯��
//bool InsertNextNode(LNode* p, char data)
//{
//	if (p == NULL)
//	{
//		cout << "���ݴ���" << endl;
//		return false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = p->next;
//	p->next = s;
//	cout << "����ɹ�" << endl;
//	return true;
//}
//
////β���������
//LNode* InsertEnd(LNode* end, char data)
//{
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = NULL;
//	end->next = s;
//	end = s;
//	return end;
//}
//
////��λ���Һ���
//LNode* GetLNode(LNodeList& L, int i)
//{
//	if (i < 0)
//	{
//		cout << "λ�����" << endl;
//		return NULL;
//	}
//	LNode* p = L;//����ɨ��ָ��p
//	int j = 0;//��¼��ǰpָ��Ľڵ�λ��
//	//ѭ���ҵ��� i �ڵ��ǰ���ڵ� i-1 �ڵ�
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////��ֵ���Һ���
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
////�������Ⱥ���
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
////��λ���뺯��
//bool ListInsert(LNodeList& L, int i, char a)
//{
//	if (i < 1)//�ж�λ���Ƿ�Ϸ�
//	{
//		cout << "λ�򲻺Ϸ�������" << endl;
//		return false;
//	}
//	LNode* p = GetLNode(L, i - 1);//�ɰ�λ���Һ���ʵ�ֲ���
//	return InsertNextNode(p, a);//�ɺ�庯��ʵ�ֲ���
//}
//
////��λɾ������
//bool ListDelete(LNodeList& L, int i)
//{
//	if (i < 1)
//	{
//		cout << "λ�򲻺Ϸ�������" << endl;
//		return false;
//	}
//	LNode* p = GetLNode(L, i - 1);//�ɰ�λ���Һ���ʵ�ֲ���
//	if (p == NULL)
//	{
//		cout << "λ�򲻺Ϸ�������" << endl;
//		return false;
//	}
//	LNode* q = p->next;//��qָ��Ҫɾ���Ľڵ�
//	p = q->next;//��pָ��ָ������һ�ڵ�
//	free(q);//�ͷ�Ҫɾ���Ľڵ�
//	cout << "ɾ���ɹ�" << endl;
//	return true;
//}
//
////ָ���ڵ��ǰ�庯��
//bool InsertPriorNode(LNode* P, char a)
//{
//	if (P == NULL)
//	{
//		cout << "���ݴ���" << endl;
//		return 0;
//	}
//	//����ռ�洢����
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	s->next = P->next;
//	P->next = s;//���½ڵ�����P�ڵ��
//	s->data = P->data;//���½ڵ��ڴ���P�ڵ������
//	P->data = a;//�������ݴ���P�ڵ�
//	cout << "����ɹ�" << endl;
//	return true;
//}
//
////ָ���ڵ��ɾ������
//bool DeleteNode(LNode* p)
//{
//	if (p == NULL)
//	{
//		cout << "���ݴ���" << endl;
//		return false;
//	}
//	LNode* q = p->next;//��qָ��ָ��p�ĺ�̽ڵ�
//	//���pָ��������һ���ڵ�
//	if (q == NULL)
//	{
//		free(p);
//		cout << "ɾ���ɹ�" << endl;
//		return true;
//	}
//	p->data = q->data;//��q�ڵ����ݴ���p
//	p->next = q->next;//��q�ĺ��ָ�봫��p
//	free(q);//ɾ��q�ڵ�
//	cout << "ɾ���ɹ�" << endl;
//	return true;
//}
//
//void test01()
//{
//	LNodeList L;//����һ��ָ��ͷ�ڵ��ָ��
//	InitList(L);//��ʼ����ָ��
//	LNode* end = InsertEnd(L, 'a');
//	end = InsertEnd(end, 'b');
//	end = InsertEnd(end, 'c');
//	end = InsertEnd(end, 'd');
//	end = InsertEnd(end, 'e');
//	end = InsertEnd(end, 'f');
//	int len = GetLListLen(L);
//	cout << "����ĳ���Ϊ��" << len << endl;
//	ListInsert(L, 2, 'A');
//
//}
//int main()
//{
//	test01();
//	return 0;
//}
/*-----------------------------------------------˫����-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////����˫����ڵ�
//typedef struct DNode
//{
//	char data;//������
//	struct DNode* prior, * next;//ָ����ǰ�����̣�
//}DNode, *DLinkList;
//
////����ڵ�ռ亯��
//DNode* ApplySpace()
//{
//	DNode* s = (DNode*)malloc(sizeof(DNode));
//	if (s == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return NULL;
//	}
//	return s;
//}
//
////��ʼ��˫������
//bool InitDLinkList(DLinkList& L)
//{
//	L = ApplySpace();//����һ��ͷ�ڵ�
//	if (L == NULL) return false;
//	L->prior = NULL;//ͷ�ڵ��ǰ��ָ��ΪNULL
//	L->next = NULL;//ͷ�ڵ����ʱû�нڵ�
//	return true;
//}
//
////˫����Ĳ��뺯��
//bool InserDNode(DNode* p, DNode* s)
//{
//	//(��s�ڵ����p�ڵ�֮��)
//	if (p == NULL || s == NULL)//�Ƿ�����
//	{
//		cout << "��������" << endl;
//		return false;
//	}
//	s->next = p->next;//ʹs�ĺ��ָ��ָ��p���ָ����ָ������
//	if (p->next != NULL)//��pû�к�̽ڵ㣬�Ͳ���Ҫ����p��̽���ǰ��ָ��
//		p->next->prior = s;//ʹp�ĺ�̽���ǰ��ָ��ָ��s�ڵ�
//	s->prior = p;//ʹs��ǰ��ָ��ָ��p�ڵ�
//	p->next = s;//ʹp�ĺ��ָ��ָ��s�ڵ�
//	return true;
//}
//
////˫�����ǰ�庯��
//bool InserPriorDNode(DNode* p, char data)
//{
//	DNode* q = p->prior;//�ҵ��ýڵ��ǰ���ڵ�
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(q, s);//���ò���ڵ㺯��ʵ��ǰ��
//}
//
////˫����ĺ�庯��
//bool InserNestDNode(DNode* p, char data)
//{
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(p, s);
//}
//
////˫����İ�λ���Һ���
//DNode* GetDNode(DLinkList& L, int i)
//{
//	if (i < 0)
//	{
//		cout << "λ�����" << endl;
//		return NULL;
//	}
//	DNode* p = L;//����ɨ��ָ��p
//	int j = 0;//��¼��ǰpָ��Ľڵ�λ��
//	//ѭ���ҵ��� i �ڵ��ǰ���ڵ� i-1 �ڵ�
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////��ֵ���Һ���
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
////˫����İ�λ���뺯��
//bool ListInsert(DLinkList& L, int i,char data)
//{
//	DNode* p = GetDNode(L, i);
//	DNode* s = ApplySpace();
//	if (s == NULL) return false;
//	s->data = data;
//	return InserDNode(p, s);
//}
//
////˫�����ɾ��ָ���ڵ㺯��
//bool DeleteNode(DNode* p)
//{
//	if (p == NULL)
//	{
//		cout << "���ݴ���" << endl;
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
/*---------------------------------------------��̬������---------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//const int MaxSize = 10;//��̬�������󳤶�
//
////head ��ʾͷ�ڵ���±�
//// e[i] ��ʾ�ڵ�i��ֵ
//// ne[i] ��ʾ�ڵ�i��nextָ��
//// idx ��ʾ��ǰ�Ѿ��õ��Ľڵ�ָ��
//int head, e[MaxSize], ne[MaxSize], idx;
//
////��ʼ��
//void init() {
//	head = -1;
//	idx = 0;
//}
//
////����
//void add_to_head(int x) {	//ͷ�巨
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
////ɾ��
//void remove(int k) {
//	ne[k] = ne[ne[k]];
//}
//
/*---------------------------------------------��̬˫����---------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//const int MaxSize = 10;
//
//int m;
//int e[MaxSize], l[MaxSize], r[MaxSize], idx;
//
//void init() {
//	// 0��ʾ��˵㣬1��ʾ�Ҷ˵�
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
/*-----------------------------------------------˳��ջ-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
////����ջ
//typedef struct
//{
//	char data[MaxSize];//��̬������ջ������
//	int top;//ջ��ָ�루�����±꣩
//}SqStack;
//
////��ʼ��ջ
//void InitStack(SqStack& s)
//{
//	s.top = -1;//��ջʱջ��ָ�벻ӦΪ0
//	InitStack(s);
//}
//
////��Ԫ����ջ����ջ��
//bool Push(SqStack& s, char x)
//{
//	if (s.top == MaxSize - 1)
//	{
//		cout << "ջ��������" << endl;
//		return false;
//	}
//	s.top += 1;//ָ���1
//	s.data[s.top] = x;//��Ԫ����ջ
//	cout << "��ջ�ɹ�" << endl;
//	return true;
//}
//
////ջ��Ԫ�س�ջ
//bool Pop(SqStack& s, char& x)
//{
//	if (s.top == -1)
//	{
//		cout << "��ջ�ѿգ�����" << endl;
//		return false;
//	}
//	x = s.data[s.top];
//	s.top -= 1;
//	cout << "��ջ�ɹ�" << endl;
//	return true;
//}
//
////��ȡջ��Ԫ��
//bool GetTop(SqStack& s, char& x)
//{
//	if (s.top == -1)
//	{
//		cout << "��ջ�ѿգ�����" << endl;
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
/*-----------------------------------------��ջ(��ͷ�ڵ�ʵ��)------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
////��ջ�Ľڵ�
//typedef struct Linknode
//{
//	char data;
//	struct Linknode* next;
//}Stack;
//
////��ջ��ָ���������ͷ�ڵ���
//typedef struct Head
//{
//	int top;
//	Stack* next;
//}*LiStack;
//
////��ʼ����ջ
//bool InitStack(LiStack& L)
//{
//	L = (Head*)malloc(sizeof(Head));
//	if (L == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	L->top = 0;
//	L->next = NULL;
//	cout << "��ʼ���ɹ�" << endl;
//	return true;
//}
//
////��Ԫ����ջ����ջ��
//bool Push(LiStack& L, char data)
//{
//	Stack* s = (Stack*)malloc(sizeof(Stack));
//	if (s == NULL)
//	{
//		cout << "�ڴ治�㣬����" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = L->next;
//	L->next = s;
//	L->top += 1;
//	return true;
//}
//
////ջ��Ԫ�س�ջ
//bool Pop(LiStack& L, Stack* x)
//{
//	if (L->top == 0)
//	{
//		cout << "��ջ�ѿգ�����" << endl;
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
////��ȡջ��Ԫ��
//bool GetTop(LiStack& L, Stack* x)
//{
//	if (L->top == 0)
//	{
//		cout << "��ջ�ѿգ�����" << endl;
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
/*-----------------------------------------------˳���-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//#define MaxSize 10
//
//typedef struct
//{
//	char data[MaxSize];//�þ�̬�����Ŷ���Ԫ��
//	int front, rear;//��ͷָ��Ͷ�βָ��
//}SqQueue;
//
////��ʼ������
//void InitQueue(SqQueue& Q)
//{
//	Q.rear = Q.front = 0;
//}
//
////�����пպ���
//bool QueueEmpty(SqQueue& Q)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
//		return false;
//	}
//	cout << "���зǿ�" << endl;
//	return true;
//}
//
////��β���
//bool EnQueue(SqQueue& Q, char x)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)//����һ���洢��Ԫ����ʹ���в����п�
//	{
//		cout << "��������" << endl;
//		return false;
//	}
//	Q.data[Q.rear] = x;
//	Q.rear = (Q.rear + 1) % MaxSize;//��βָ���һȡģ���γ�ѭ������
//	return true;
//}
//
////��ͷ����
//bool DeQueue(SqQueue& Q, char &data)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
//		return false;
//	}
//	data = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;
//	return true;
//}
//
////��ȡ��ͷԪ��
//bool GetHead(SqQueue Q, char& x)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
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
/*-------------------------------------˳���(����)[�������洢��]---------------------------------------------------*/
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
////��ʼ������
//void InitQueue(SqQueue& Q)
//{
//	Q.rear = Q.front = 0;
//}
//
////�����пպ���
//bool QueueEmpty(SqQueue& Q)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
//		return false;
//	}
//	cout << "���зǿ�" << endl;
//	return true;
//}
//
////��β���
//bool EnQueue(SqQueue& Q, char x)
//{
//	if ((Q.rear+1)%MaxSize==Q.front)
//	{
//		cout << "��������" << endl;
//		return false;
//	}
//	Q.data[Q.rear] = x;
//	if (Q.rear != Q.front)//�����в�Ϊ��ʱ����βָ�����1λ
//		Q.rear += 1;
//	Q.rear %= MaxSize;//ȡģ�γ�ѭ������
//	return true;
//}
//
////��ͷ����
//bool DeQueue(SqQueue& Q, char &data)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
//		return false;
//	}
//	data = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;
//	return true;
//}
//
////��ȡ��ͷԪ��
//bool GetHead(SqQueue Q, char& x)
//{
//	if (Q.rear == Q.front)
//	{
//		cout << "����Ϊ��" << endl;
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
/*-----------------------------------------����(����ͷ�ڵ�)--------------------------------------------------------*/
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
////��ʼ������
//void InitQueue(LinkQueue& Q)
//{
//	Q.front = NULL;
//	Q.rear = NULL;
//}
//
////��β���
//bool EnQueue(LinkQueue& Q, char& data)
//{
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	if (s == NULL)
//	{
//		cout << "�ڴ�����" << endl;
//		return false;
//	}
//	s->data = data;
//	s->next = NULL;
//	if (Q.front == NULL)//����Ϊ�գ�������ǵ�һ��Ԫ��
//	{
//		Q.front = s;//ͷβָ���ָ��s
//		Q.rear = s;
//	}
//	else
//	{
//		Q.rear->next = s;//s����βָ��ָ���Ԫ��֮��
//		Q.rear = s;//�޸�βָ��
//	}
//	cout << "�����" << endl;
//	return true;
//}
//
////��ͷ����
//bool DeQueue(LinkQueue& Q, char& x)
//{
//	if (Q.front == NULL)
//	{
//		cout << "�ն�" << endl;
//		return false;
//	}
//	LinkNode* p = Q.front;
//	x = p->data;
//	Q.front = p->next;
//	if (Q.rear == p)//�ýڵ�Ϊ���ӵ����һ���ڵ�
//	{
//		Q.front = NULL;
//		Q.rear = NULL;
//	}
//	free(p);
//	cout << "�ѳ���" << endl;
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
/*-----------------------------------------����������ʽ�洢--------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//
//typedef struct BiTNode
//{
//	int data;//������
//	struct BiTNode* lchild, * rchild;//�����ӽڵ�
//	struct BiTNode* parent;//���ڵ�
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
//	if (Q.front == nullptr)//����Ϊ�գ�������ǵ�һ��Ԫ��
//	{
//		Q.front = s;//ͷβָ���ָ��s
//		Q.rear = s;
//	}
//	else
//	{
//		Q.rear->next = s;//s����βָ��ָ���Ԫ��֮��
//		Q.rear = s;//�޸�βָ��
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
//	if (Q.rear == p)//�ýڵ�Ϊ���ӵ����һ���ڵ�
//	{
//		Q.front = nullptr;
//		Q.rear = nullptr;
//	}
//	free(p);
//	return true;
//}
//
////��ʼ��������
//bool InitBiTree(BiTree root)
//{
//	root = new BiTNode;
//	root->data = 1;
//	root->lchild = nullptr;
//	root->rchild = nullptr;
//	root->parent = nullptr;
//}
//
////�������Ľڵ����
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
////�������ı���(�������)
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
////�������Ĳ������
//void Level0rder(BiTree T)
//{
//	LinkQueue Q;//����������
//	InitQueue(Q);
//	BiTree p;
//	EnQueue(Q, T);//�����ڵ����
//	while (!IsEmpty(Q))//�б�Ϊ����ѭ��
//	{
//		DeQueue(Q, p);//��ͷ�ڵ����
//		cout << p->data << endl;//���ʳ��ӽڵ�
//		if (p->lchild != nullptr)
//			EnQueue(Q, p->lchild);//���ӽڵ����
//		if (p->rchild != nullptr)
//			EnQueue(Q, p->rchild);//���ӽڵ����
//	}
//}
//
////���������
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
/*---------------------------------------------��������-----------------------------------------------------------*/
#include <iostream>
using namespace std;

/*---------------------------------------------�ַ�����-----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
////SonΪ�ַ�������ָ�룬cnt��¼���ַ������ֵĴ�����idx��¼�õ����ĸ��ڵ�
//int Son[N][26], cnt[N], idx = 0;//�±�Ϊ0�ĵ㣬���Ǹ��ڵ㣬���ǿսڵ�
//
//// ����һ���ַ���
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
//// ͳ���ַ�������
//int query(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; i++) {
//		int u = str[i] - 'a';
//		if (!Son[p][u]) return 0;
//		p = Son[p][u];
//	}
//	return cnt[p];
//}
/*-------------------------------------------���鼯(UFS)----------------------------------------------------------*/
//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//
//int p[N];
//
////��ʼ��
//void Init() {
//	for (int i = 0; i < N; i++) p[i] = i;
//}
//
//// ����x�����ڽڵ� + ·��ѹ��
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//
////�ϲ�
//void Combined(int a,int b) {
//	p[find(a)] = find(b);
//}
/*---------------------------------------------------------------------------------------------------------------*/
