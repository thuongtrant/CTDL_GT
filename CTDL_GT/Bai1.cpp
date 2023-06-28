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
//void print(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Phan tu thu [" << i << "]: " << a[i]<< endl;
//	}
//}
//int find(int a[], int n, int x)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		if (x == a[i]) {
//			return i;
//		}
//	}
//	return -1;
//}
//void add(int a[], int &n, int vitri, int y)
//{
//	for (int i = 0; i > vitri; i--)
//	{
//		a[i] = a[i - 1];
//	}
//	a[vitri] = y;
//	n++;
//}
//void erase(int a[], int& n, int z)
//{
//	for (int i = z; i < n - 1; i++)
//	{
//		a[i] = a[i + 1];
//	}
//	n--;
//}
//int main()
//{
//	int n;
//	int a[100];
//	cout << "Nhap so luong phan tu: ";
//	cin >> n;
//	input(a, n);
//	print(a, n);
//	int x;
//	cout << "Nhap phan tu muon tim: ";
//	cin >> x;
//	int vitri = find(a, n, x);
//	if (vitri != -1)
//		cout << "Tim thay " << x << " tai vi tri " << vitri;
//	else
//		cout << "Khong ton tai.";
//	cout << endl;
//	int y, loca;
//	cout << "Nhap phan tu muon them: ";
//	cin >> y;
//	cout << "Nhap vi tri muon them: ";
//	cin >> loca;
//	add(a, n, loca, y);
//	print(a, n);
//	cout << endl;
//	int z;
//	cout << "Nhap vi tri muon xoa: ";
//	cin >> z;
//	erase(a, n, z);
//	print(a, n);
//
//}