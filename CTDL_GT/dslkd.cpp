//#include <iostream>
//using namespace std;
//void nhapDsDac(int a[], int &n)
//{
//	cout << "Nhap n: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//void xuatDsDac(int a[], int n)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " " << endl; ;
//	}
//}
//int timDauTien(int a[], int n, int x)
//{
//	int vt = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//			return i;
//	}
//	return -1;
//}
//int timDauCuoi(int a[], int n, int x)
//{
//	int vt = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//			vt = i;
//	}
//	return vt;
//}
//bool chen(int a[], int& n, int vitri, int y)
//{
//	if(vitri <0 || vitri > n)
//	{
//		return  false;
//	}
//	for (int i = n; i >= vitri +1 ; i--)
//	{
//		a[i] = a[i - 1];
//	}
//	a[vitri] =y;
//	n++;
//	return true;
//}
//bool xoa(int a[], int &n, int vitri)
//{
//	if (vitri >= 0 || vitri <= n)
//	{
//		for (int i = vitri; i < n - 1; i++)
//			a[i] = a[i + 1];
//		n--;
//		return true;
//	}
//	return false;
//}
// int main()
//{
//	int a[100], n;
//	nhapDsDac(a, n); 
//	xuatDsDac(a, n);
//	int x;
//	cout << "Nhap x: ";
//	cin >> x;
//	int vt = timDauTien(a, n, x);
//	if (vt == -1)
//		cout << "khong tim thay!!!";
//	else
//		cout << "Vi tri tim thay dau = " << vt << endl;
//	vt = timDauCuoi(a, n, x);
//	if (vt == -1)
//		cout << "khong tim thay!!!";
//	else
//		cout << "Vi tri tim thay cuoi = " << vt << endl;
//	int y;
//	cout << "Nhap y: ";
//	cin >> y;
//	int vitri;
//	cout << "Nhap vi tri ";
//	cin >> vitri;
//	chen(a, n, vitri, y);
//	xuatDsDac(a, n);
//	int z;
//	cout << "Nhap z: ";
//	cin >> z;
//	xoa(a, n, z);
//	xuatDsDac(a, n);
//	return 0;
//}