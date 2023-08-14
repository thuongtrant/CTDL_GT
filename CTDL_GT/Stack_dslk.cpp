//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node* link;
//};
//Node* sp; //lưu trữ địa chỉ phần tử đầu tiên của Stack
//void init()
//{
//	sp = NULL;
//}
//void push(int x)
//{
//	Node* p;
//	p = new Node;
//	p->info = x;
//	p->link = sp;
//	sp = p;
//}
//void pop()
//{
//	if (sp != NULL)
//	{
//		Node* p = sp;
//		int x = p->info;
//		sp = p->link;
//		cout << p->info;
//		delete p;
//	}
//}
//int isEmpty()
//{
//	if (sp == NULL)
//		return 1;
//	return 0;
//}
//void output()
//{
//	if (isEmpty())
//	{
//		cout << "Queue is Empty";
//	}
//	Node* p = sp;
//	while (p != NULL)
//	{
//		cout << p->info << " ";
//		p = p->link;
//	}
//}
//int main()
//{
//	init();
//	push(10);
//	push(15);
//	push(20);
//	output();
//	cout << endl;
//	pop();
//	cout << endl;
//	output();
//}