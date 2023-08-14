//#include <iostream>
//using namespace std;
//// cấu trúc 1 node
//struct Node
//{
//	int info;
//	Node* link;
//};
//Node* front, * rear; // front vị trí xóa, rear vị trí thêm
//void init()
//{
//	front = NULL;
//	rear = NULL;
//}
//void Push(int x)
//{
//	Node* p;
//	p = new Node;
//	p->info = x;
//	p->link = NULL;
//	if (rear == NULL)
//		front = p;
//	else
//		rear->link = p;
//	    rear = p;
//}
//int Pop()
//{
//	if (front != NULL)
//	{
//		Node* p = front;
//		int x = p->info;
//		front = front->link;
//		if (front == NULL)
//			rear = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//bool isFull()
//{
//	return false;
//}
//int isEmpty()
//{
//	if (front == NULL)
//		return 1;
//	return 0;
//}
//void output()
//{
//	if (isEmpty())
//	{
//		cout << "Queue is Empty";
//	}
//	Node* p = front;
//	while (p != NULL)
//	{
//		cout << p->info << " ";
//		p = p->link;
//	}
//}
//int main()
//{
//	init();
//	Push(1);
//	Push(2);
//	Push(3);
//	output();
//	Pop();
//	cout << endl;
//	output();
//}