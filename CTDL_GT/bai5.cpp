//#include <iostream>
//#include <string>;
//using namespace std;
//struct VIDEO {
//	string name;
//	string genre;
//	string author;
//	int year;
//
//	void nhap()
//	{
//		cin.ignore();
//		cout << "Nhap ten phim: ";
//		getline(cin,name);
//		cout << "Nhap the loai: ";
//		getline(cin, genre);
//		cout << "Nhap ten tac gia: ";
//		getline(cin, author);
//		cout << "Nhap nam san xuat: ";
//		cin >> year;
//		cin.ignore();
//	}
//	void xuat()
//	{
//		cout << "Ten phim: " << name << endl;
//		cout << "The loai: " << genre << endl;
//		cout << "Ten tac gia: " << author << endl;
//		cout << "Nam san xuat: " << year << endl;
//	}
//};
//void nhapMang(VIDEO list[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap thong tin cho film thu " << i << endl;
//		list[i].nhap();
//	}
//}
//void xuatMang(VIDEO list[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Xuat thong tin cho film thu " << i << endl;
//		list[i].xuat();
//	}
//}
//void tim(VIDEO list[], int n, string x )
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (x == list[i].author)
//		{
//			list[i].xuat();
//		}
//	}
//}
//void sapxep(VIDEO list[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (list[i].year > list[j].year)
//				swap(list[i], list[j]);
//		}
//	}
//}
//int main()
//{
//	int n;
//	VIDEO list[100];
//	VIDEO film;
//	cout << "Nhap so luong film: ";
//	cin >> n;
//	nhapMang(list,n);
//	cout << "::: Danh sach cac bo phim ::: " << endl;
//	xuatMang(list, n);
//	cout << "::: Tim bo phim theo ten tac gia :::" << endl;
//	string x;
//	cout << "Nhap ten dao dien muon tim: ";
//	getline(cin, x);
//	tim(list, n, x);
//	cout << " ::: Sap xep bo phim tang dan theo nam san xuat :::" << endl;
//	sapxep(list, n);
//	xuatMang(list, n);
//		
//}