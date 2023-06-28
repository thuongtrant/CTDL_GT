//#include <iostream>
//using namespace std;
//struct Node {
//	int value;
//	Node *next;
//	Node *prev;
//};
//struct ds_Kep {
//	Node* head;
//	Node* tail;
//};
//void init(ds_Kep& k)
//{
//	k.head = NULL;
//	k.tail = NULL;
//}
//Node* createNode(int x)
//{
//	Node* p = new Node;
//	p->value = x;
//	p->next = NULL;
//	p->prev = NULL;
//	return p;
//}
//void themDau(ds_Kep& k, int x)
//{
//	Node* p = createNode(x);
//	if (k.head == NULL)
//	{
//		k.head = k.tail = p;
//	}
//	else
//	{
//		p->next = k.head;
//		k.head->prev = p;
//		k.head = p;
//	}
//}
//void themCuoi(ds_Kep& k, int x)
//{
//	Node* p = createNode(x);
//	if (k.head == NULL)
//	{
//		k.head = k.tail = p;
//	}
//	else 
//	{
//		p->prev = k.tail;
//		k.tail->next = p;
//		k.tail = p;
//	}
//}
//void themsau(ds_Kep& k, int v, int x)
//{
//	Node* q = k.head;
//	while (q != NULL && q->value != v)
//		q = q->next;
//
//	if (q != NULL)
//	{
//		Node* p = createNode(x);
//
//		p->next = q->next;
//		q->next->prev = p;
//
//		q->next = p;
//		p->prev = q;
//	}
//}
//void xoaSau(ds_Kep& k, int v)
//{
//	Node* q = k.head;
//	while (q != NULL && q->value != v)
//		q = q->next;
//
//		 
//		Node* p = q->next;
//		q->next = p->next;
//		if (p->next != NULL)
//		{
//			p->next->prev = q;
//		}
//		delete p;
//}
//void xoaDau(ds_Kep& k)
//{
//	if (k.head != NULL)
//	{
//		Node* p = k.head;
//		if (p->next == NULL)
//		{
//			k.tail = NULL;
//			k.head = NULL;
//		}
//		else
//		{
//			k.head = p->next;
//			p->next->prev = NULL;
//			p->next = NULL;
//		}
//		delete(p);
//	}
//}
//void xoaCuoi(ds_Kep& k)
//{
//	if (k.head != NULL)
//	{
//		Node* p = k.tail;
//		k.tail = p->prev;
//		p->next = NULL;
//		p->prev->next = NULL;
//
//		delete(p);
//	}
//}
//
//Node* timKiem(ds_Kep &k, int v)
//{
//	Node* p = k.head;
//	while (p != NULL && p->value != v)
//	{
//		p = p->next;
//	}
//	return p;
//	
//}
//void output(ds_Kep k)
//{
//	Node* p = k.head;
//	while (p!=NULL)
//	{
//		cout << p->value << "\t";
//		p = p->next;
//	}
//}
//void output_1(ds_Kep k)
//{
//	Node* p = k.tail;
//	while (p!=NULL)
//	{
//		cout << p->value << "\t";
//		p = p->prev;
//	}
//}
//int main()
//{
//	ds_Kep k;
//	init(k);
//	themCuoi(k, 10);
//	themDau(k, 20);
//	themDau(k, 30);
//	themCuoi(k, 50);
//	themsau(k, 30, 31); // 30 31 20 10 50
//	xoaDau(k); // 31 20 10 50
//	xoaCuoi(k); // 31 20 10
//	xoaSau(k, 10);
//	output(k);
//	cout << endl;
//	if (timKiem(k, 110) != NULL)
//		cout << "Tim Thay";
//	else
//	{
//		cout << "Khong tim thay";
//	}
//	return 0;
//}