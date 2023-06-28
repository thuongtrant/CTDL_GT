#include <iostream>
#include "Runner.h"
using namespace std;
struct Node {
	int value;
	Node* next;
};
void init(Node* head)
{
	head = NULL;

}
Node* createNode(int x)
{
	Node* p = new Node;
	p->value = x;
	p->next = NULL;
	return p;

}
void addFirst(Node*& head, int x)
{
	Node* p = createNode(x);
	p->next = head;
	head = p;
}
void addAfter(Node* head, int v, int x)
{
	Node* p = createNode(x);
	//Tifm node co gia tri la v
	Node* q = head;
	while (q->value != v && q != NULL)
	{
		q = q->next;
	}
	// q la node dai dien cho v tren dslk
	if (q != NULL)
	{
		p->next = q->next;
		q->next = p;
	}
}
void addlast(Node* head, int x)
{
	Node* p = createNode(x);
	if (head == NULL)
	{
		head = p;
	}
	//Xac dinh node cuoi cung
	Node* last = head;
	while (last->next != NULL)
		last = last->next;

	last->next = p;
}

void deleteFirst(Node* head)
{
	if (head != NULL)
	{
		Node* p = head;
		head = p->next;
		p->next = NULL;

		delete(p);
	}
}
void deleteLast(Node*& head)
{
	if (head != NULL)
	{
		// xac dinh nut cuoi cung va nut gan cuoi cung 
		Node* last = head;
		Node* prev = NULL;
		while (last->next != NULL)
		{
			prev = last;
			last = last->next;
		}
		if (prev == NULL) //DS chi co mot phan tu
		{
			deleteFirst(head);
		}
		else
		{
			prev->next = NULL;
			delete(last);
		}
	}
}

void output(Node* head)
{
	Node* p = head;
	while (p != NULL)
	{
		cout << p->value << " ";
		p = p->next;
	}
}
void Example()
{
	Runner("Chuong1").addDescription("Bai hoc: DSLK").message();
	Node* head;
	init(head);

	addFirst(head, 10);
	addFirst(head, 15);
	addFirst(head, 20);
	addlast(head, 99);
	//addAfter(head, 99, 100);
	output(head);
	//deleteFirst(head);
	cout << endl;
	deleteLast(head);
	output(head);
}