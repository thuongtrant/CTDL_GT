#include <iostream>
#include <fstream>
using namespace std;
// khai bao ma tran bang mang hai chieu
# define MAX 20
char vertex[MAX];
int a[MAX][MAX];
int n; // so dinh cua do thi
// khai bao TapE
int E1[MAX]; // Dinh dau trong canh
int E2[MAX]; // Dinh cuoi trong canh
int wE[MAX]; // Trong so cua canh
int nE = 0; // so phan tu tap E

// khai bao TapT
int T1[MAX]; // Dinh dau trong canh
int T2[MAX]; // Dinh cuoi trong canh
int wT[MAX]; // Trong so cua canh
int nT = 0; // so phan tap T

void inputFromFile(int a[][MAX], int& n) {
	ifstream inFile;
	inFile.open("input_KrusKal.txt");
	if (inFile.is_open())
	{
		inFile >> n;
		for (int i = 0; i < n; i++)
			inFile >> vertex[i];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				inFile >> a[i][j];
		inFile.close();
		cout << "Doc ma tran ke thanh cong \n";
	}
	else
		cout << "Khong mo duoc file \n";
}
void outputMatrix(int a[][MAX], int n) {
	cout << "\t";
	for (int i = 0; i < n; i++)
		cout << vertex[i] << "\t";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << vertex[i] << "\t";
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}

// Dinh dang xet co ton tai trong TapT hay chua
int TonTai(int d, int D[], int nD)
{
	for (int i = 0; i < nD; i++)
		if (D[i] == d)
			return 1;
	return 0;
}
void XoaViTriE(int i)
{
	for (int j = i; j < nE; j++)
	{
		E1[j] = E1[j + 1]; // xoa dinh dau
		E2[j] = E2[j + 1]; // xoa dinh cuoi
		wE[j] = wE[j + 1]; // xoa trong so
	}
	nE--; // giam so phan tu tap E
}
void XoaCanhE(int u, int v)
{
	for (int i = 0; i < nE; i++)
		if (E1[i] == u && E2[i] == v)
		{
			XoaViTriE(i); // xoa mot canh co cac thanh phan la dinh dau, cuoi va trong so
			break;
		}
}
void output()
{
	int tong = 0;
	for (int i = 0; i < nT; i++) // duyet tapT 
	{
		cout << endl << "(" << T1[i] << "," << T2[i] << ") = " << wT[i]; // xuat cap canh va trong so
		tong += wT[i]; // tinh trong so cua canh do
	}
	cout << "\n Tong = " << tong; // xuat ket qua
}

void prim(int s) // s là đỉnh bắt đầu
{
	int u = s, min, i, d1, d2;
	while (nT < n - 1) // chua di qua het so luong dinh
	{
		for (int v = 0; v < n; v++) // duyet tu dinh dau den dinh cuoi
			if (a[u][v] != 0) // co ke voi dinh dang xet
				if (TonTai(v, T2, nT) == 0) // xet dinh thu 2 cua tat ca cac canh trong tapT gop voi v co ton tai hay khong
				{							// neu khong -> khong tao ra chu trinh
					E1[nE] = u; E2[nE] = v; // tien hanh them vao tap e
					wE[nE] = a[u][v]; 
					nE++; // tang so phan tu tap E len 1 don vi
				}
		for (i = 0; i < nE; i++) // duyet tapE
			if (TonTai(E2[i], T2, nT) == 0)
			{
				min = wE[i]; d1 = E1[i]; // gan canh dang xet la min
				d2 = E2[i]; 
				break;
			}
		for (; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
				if (min > wE[i]) // xet canh co trong so nho nhat trong tapE
				{
					min = wE[i];
					d1 = E1[i];
					d2 = E2[i];
				}
		T1[nT] = d1; T2[nT] = d2; // Khi da tim duoc canh co trong so nho nhat, tien hanh gan vao tapT
		wT[nT] = a[d1][d2];
		a[d1][d2] = 0; a[d2][d1] = 0; // cap nhat trang thai cua dinh thanh da xet
		nT++; // tang so phan tu tap E len 1 don vi
		XoaCanhE(d1, d2); // Xoa canh vua them vao khoi tapE
		u = d2;  // gan u la dinh cuoi cua canh vua xet de tiep tuc chu trinh
	}
}
int main()
{
	inputFromFile(a,n);
	outputMatrix(a,n);
	prim(0);
	output();
}