//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void nhap_TranThiThuong_Bai1_33(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap phan thu thu [" << i << "]: ";
//		cin >> a[i];
//	}
//}
//void nhaprandom_TranThiThuong_Bai1_33(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % (50 - 10 + 1) + 10;
//		cout << a[i] << " ";
//	}
//}
//void xuat_TranThiThuong_Bai1_33(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//void timdau_TranThiThuong_Bai1_33(int a[], int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			cout << "Tim thay " << x << " tai vi tri dau: " << i;
//			break;
//		}
//	}
//
//}
//void timcuoi_TranThiThuong_Bai1_33(int a[], int n, int x)
//{
//	for (int j = n - 1; j >= 0; j--)
//	{
//		if (a[j] == x)
//		{
//			cout << "Tim thay " << x << " tai vi tri cuoi: " << j;
//		}
//	}
//
//}
//void them_TranThiThuong_Bai1_33(int a[], int& n)
//{
//	int y;
//	int vitri;
//	cout << "Nhap so muon chen: ";
//	cin >> y;
//	cout << "Nhap vi tri muon chen: ";
//	cin >> vitri;
//	for (int i = n; i > vitri; i--)
//		a[i] = a[i - 1];
//
//	a[vitri] = y;
//	n++;
//}
//void xoa_TranThiThuong_Bai1_33(int a[], int& n)
//{
//	int Xoa;
//	int vitrixoa;
//	cout << "Nhap so muon xoa: ";
//	cin >> Xoa;
//	cout << "Nhap vi tri muon xoa: ";
//	cin >> vitrixoa;
//	for (int i = vitrixoa + 1; i < n; i++)
//	{
//		a[i - 1] = a[i];
//	}
//	n--;
//}
//int main() {
//	int a[100];
//	int n;
//	cout << "Nhap so luong phan tu: ";
//	cin >> n;
//	nhap_TranThiThuong_Bai1_33(a, n);
//	xuat_TranThiThuong_Bai1_33(a, n);
//	nhaprandom_TranThiThuong_Bai1_33(a, n);
//	cout << endl;
//	int x;
//	cout << "Nhap x can tim: ";
//	cin >> x;
//
//	timdau_TranThiThuong_Bai1_33(a, n, x);
//	timcuoi_TranThiThuong_Bai1_33(a, n, x);
//
//	them_TranThiThuong_Bai1_33(a, n);
//	xuat_TranThiThuong_Bai1_33(a, n);
//
//	xoa_TranThiThuong_Bai1_33(a, n);
//	xuat_TranThiThuong_Bai1_33(a, n);
//	system("pause");
//}