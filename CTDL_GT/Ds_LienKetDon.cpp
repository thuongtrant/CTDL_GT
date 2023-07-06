//#include <iostream>
//using namespace std;
//struct Node_Thuong_33_Bai_1_N2_B2 {
//	int value;
//	Node_Thuong_33_Bai_1_N2_B2* next;
//};
//Node_Thuong_33_Bai_1_N2_B2* head;
//void init_Thuong_33_Bai_1_N2_B2() {
//	head = NULL;
//}
//Node_Thuong_33_Bai_1_N2_B2* createNode_Thuong_33_Bai_1_N2_B2(int x)
//{
//	Node_Thuong_33_Bai_1_N2_B2* p = new Node_Thuong_33_Bai_1_N2_B2;
//	p->value = x;
//	p->next = NULL;
//
//	return p;
//}
//void themDau_Thuong_33_Bai_1_N2_B2(int x)
//{
//	Node_Thuong_33_Bai_1_N2_B2* p = createNode_Thuong_33_Bai_1_N2_B2(x);
//	p->next = head;
//	head = p;
//}
//void themCuoi_Thuong_33_Bai_1_N2_B2(int x)
//{
//	Node_Thuong_33_Bai_1_N2_B2* p = createNode_Thuong_33_Bai_1_N2_B2(x);
//	if (head == NULL)
//	{
//		head = p;
//	}
//	else
//	{
//		Node_Thuong_33_Bai_1_N2_B2* last = head;
//		while (last->next != NULL)
//			last = last->next;
//
//		last->next = p;
//	}
//}
//void themSau_Thuong_33_Bai_1_N2_B2(int v, int x)
//{
//	Node_Thuong_33_Bai_1_N2_B2* p = createNode_Thuong_33_Bai_1_N2_B2(x);
//	Node_Thuong_33_Bai_1_N2_B2* q = head;
//	while (q->value != v && q != NULL)
//	{
//		q = q->next;
//	}
//	if (q != NULL)
//	{
//		p->next = q->next;
//		q->next = p;
//	}
//}
//void xoaDau_Thuong_33_Bai_1_N2_B2()
//{
//	if (head != NULL)
//	{
//		Node_Thuong_33_Bai_1_N2_B2* p = head;
//		head = p->next;
//		p->next = NULL;
//		delete p;
//	}
//}
//void xoaAll_Thuong_33_Bai_1_N2_B2()
//{
//	while (head != NULL)
//	{
//		xoaDau_Thuong_33_Bai_1_N2_B2();
//	}
//}
//void output_Thuong_33_Bai_1_N2_B2()
//{
//	Node_Thuong_33_Bai_1_N2_B2* p = head;
//	while (p != NULL)
//	{
//		cout << p->value << " \t";
//		p = p->next;
//	}
//}
//Node_Thuong_33_Bai_1_N2_B2* Tim_Thuong_33_Bai_1_N2_B2(int v)
//{
//	Node_Thuong_33_Bai_1_N2_B2* q = head;
//	while (q != NULL && q->value != v)
//	{
//		q = q->next;
//	}
//	return q;
//}
//int main()
//{
//
//	init_Thuong_33_Bai_1_N2_B2();
//	cout << ":::Them Dau Va Them Cuoi ::: " << endl;
//	themCuoi_Thuong_33_Bai_1_N2_B2(5);
//	themDau_Thuong_33_Bai_1_N2_B2(99);
//	output_Thuong_33_Bai_1_N2_B2();
//	cout << endl;
//	cout << ":::Them Sau ::: " << endl;
//	themSau_Thuong_33_Bai_1_N2_B2(99, 100);
//	output_Thuong_33_Bai_1_N2_B2();
//	cout << endl;
//	cout << "::: Tim Kiem ::: " << endl;
//	if (Tim_Thuong_33_Bai_1_N2_B2(101) != NULL) {
//		cout << " Tim thay ";
//	}
//	else
//		cout << "Khong tim thay ";
//	cout << endl;
//	cout << "::: Xoa Tat Ca ::: " << endl;
//	xoaAll_Thuong_33_Bai_1_N2_B2();
//	output_Thuong_33_Bai_1_N2_B2();
//	system("pause");
//
//}