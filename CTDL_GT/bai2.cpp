//#include <iostream>
//using namespace std;
//void input(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap phan tu thu [" << i << "]: ";
//		cin >> a[i];
//	}
//}
//void print(int a[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Phan tu thu [" << i << "]: " << a[i]<< endl;
//	}
//}
//void arr(int a[], int p[], int& n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//			p[i]=a[i];
//	}
//}
//void compare(int a[], int p[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++) {
//			if ( a[i] > a[j] && a[i] % 2 == 0)
//			{
//				swap(a[i], a[j]);
//				p[i] = a[i];
//			}
//		}
//	}
//}
//int main()
//{
//	int a[100], p[101];
//	int n;
//	cin >> n;
//	input(a, n);
//	//compare(a, p, n);
//	print(p, n);
//}