//#include <iostream>
//#include<cstdlib>
//using namespace std;
//void swap(int &a, int &b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void selectionsort(int a[], int n)
//{
//	for (int k = 0; k < n - 1; k++)
//	{
//		int min_pos = k;
//		for (int i = k + 1; i < n; i++)
//			if (a[i] < a[min_pos])
//				min_pos = i;
//		swap(a[min_pos], a[k]);
//	}
//}
//void insertionSort(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int x = a[i];
//		int pos = i - 1;
//		while (pos >= 0 && a[pos] > x)
//		{
//			a[pos + 1] = a[pos];
//			pos--;
//		}
//		a[pos + 1] = x;
//	}
//}
//void interchangeSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//		}
//	}
//}
//void bubleSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = n - 1; j > i; j--)
//		{
//			if (a[j] < a[j - 1])
//				swap(a[j], a[j - 1]);
//		}
//	}
//}
//void nhapMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 10;
//		cout << a[i] <<" ";
//	}
//}
//void xuatMang(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout <<  a[i] << " ";
//	}
//}
//int main()
//{
//	int a[100];
//	int n;
//	cin >> n;
//	nhapMang(a, n);
//	cout << endl;
//	//selectionsort(a, n);
//	//insertionSort(a, n);
//	//interchangeSort(a, n);
//	//bubleSort(a, n);
//	xuatMang(a, n);
//}