#include <iostream>
#include <fstream>
using namespace std;
// khai bao ma tran bang mang hai chieu
# define MAX 20
int a[MAX][MAX];
char vertex[MAX];
int n; // so dinh cua do thi

// khai bao TapE
int E1[MAX];
int E2[MAX];
int wE[MAX];
int nE = 0; // so phan tu tapE
// khai bao TapT
int T1[MAX];
int T2[MAX];
int wT[MAX];
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

void createE()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] != 0) // canh chua xet
			{
				E1[nE] = i; // dua dinh dau vao mang E1
				E2[nE] = j;	// dua dinh cuoi vao mang E2
				wE[nE] = a[i][j]; // dua gia tri trong so vao mang wE
				// do thi vo huong nen a[i][j] cung la a[j][i]
				a[i][j] = 0; // canh da duoc xet
				a[j][i] = 0; // canh da duoc xet
				nE++; // tang so phan tu de duyet canh tiep theo
			}
}
// Ham xuat cac canh va trong so
void outputE()
{
	for (int i = 0; i < n; i++)
	{
		cout << "(" << vertex[E1[i]] << ", " << vertex[E2[i]] << ", " << wE[i] << " ) \n";
	}
}
// Ham sap xep trong so
void arrangeE()
{
	for (int i = 0; i < nE - 1; i++)
		for (int j = i + 1; j < nE; j++)
			if (wE[i] > wE[j])
			{
				swap(wE[i], wE[j]);
				swap(E1[i], E1[j]);
				swap(E2[i], E2[j]);
			}
}
int TonTai(int d, int D[], int nD)
{
	for (int i = 0; i < nD; i++)
		if (D[i] == d)
			return 1;
	return 0;
}
void kruskal()
{
	for (int i = 0; i < nE; i++)
	{
		// xet dinh bat dau co trong mang T1 va dinh cuoi co trong mang T2 hay khong
		if (TonTai(E1[i], T1, nT) == 1 && TonTai(E2[i], T2, nT) == 1)
			continue; // neu co bo qua vi no tao thanh chu trinh
		if (TonTai(E1[i], T2, nT) == 1 && TonTai(E2[i], T1,  nT) == 1)
			continue;
		// neu khong tien hanh dua vao TapT
		T1[nT] = E1[i];
		T2[nT] = E2[i];
		wT[nT] = wE[i];
		nT++; // tang so luong phan tu trong TapT
		if (nT == n - 1) // xet xem so dinh trong TapT da du chua
			break;
	}
}

void outputCKTT()
{
	int sum = 0;
	cout << "Cay khung toi thieu: \n";
	for (int i = 0; i < nT; i++)
	{
		cout << "(" << vertex[T1[i]] << ", " << vertex[T2[i]] << ", " << wT[i] << " ) \n";
		sum += wT[i];
	}
	cout << "Tong trong so: " << sum << endl;
}
int main()
{
	inputFromFile(a, n);
	outputMatrix(a, n);
	cout << "\n:::::::::::: \n";
	createE();
	arrangeE();
	kruskal();
	outputCKTT();
}