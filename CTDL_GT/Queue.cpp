//#include <iostream>
//using namespace std;
//# define MAX 100
//int a[MAX];
//int front, rear; // front vị trí lấy ra, rear vị trí thêm vào
//void init(int a[], int& front, int& rear)
//{
//	front = -1;
//	rear = -1;
//}
//int Push(int a[], int& front, int& rear, int x)
//{
//	if (rear – front = MAX - 1) // hang đợi đầy
//		return 0;
//	else
//	{
//		if (front == -1) // hang đợi rỗng
//			front = 0;
//		if (rear == MAX - 1) // hang đợi bị tràn
//		{
//			for (int i = front; i <= rear; i++)
//				// thực hiện dời tịnh tiến các phần tử trong hàng
//				a[i - front] = a[i];
//			rear = MAX - 1 - front;
//			//rear nhận giá trị mới, sau khi tinh tiến
//			front = 0; // front nhận giá trị mới, sau khi tịnh tiến
//		}
//		a[++rear] = x;
//		return 1;
//	}
//}
//int Pop(int a[], int& front, int& rear, int& x)
//{
//	if (front == -1) // hàng đợi rỗng
//		return 0;
//	else
//	{
//		x = a[front++];
//		if (front > rear)
//			// trường hợp hang đợi có 1 phần tử, sau khi xóa hang rỗng
//		{
//			front = -1;
//			rear = -1;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	init(a, front, rear);
//	Push(a, front, rear,1);
//	Push(a, front, rear, 2);
//	Push(a, front, rear, 3);
//}