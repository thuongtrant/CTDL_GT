#include <iostream>
using namespace std;
#include <fstream>
#define MAX 100
char vertex[MAX];
int a[MAX][MAX];
int n;
int C[MAX]; // lưu trữ đỉnh chưa xét;
// 1 là chưa xét; 0 là đã xét
int dfs[MAX];// lưu danh sách phần tử đã duyệt
int ndfs = 0; // chỉ số lưu đỉnh đã xét

int bfs[MAX];
int nbfs = 0;
void input(int a[][MAX], int& n)
{
	do {
		cout << "Nhap so luong dinh cua do thi: ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	cout << "Nhap " << n << " ten cac dinh do thi theo tu: ";
	for (int i = 0; i < n; i++)
		cin >> vertex[i];
	// nhap ma tran ke
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap tinh chat ke (1/0) cua cac dinh voi dinh " << vertex[i] << ": ";
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}
void inputFromFile(int a[][MAX], int& n) {
	ifstream inFile;
	inFile.open("input.txt");
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
void output(int a[][MAX], int n) {
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
int findVerTexByName(int n, char vertexName)
{
	int i = 0;
	while (i < n)
	{
		if (vertex[i] == vertexName)
			return i;
		i++;
	}
	return -1;
}
void getWeights(int a[][MAX], int n)
{
	char vertexName;
	cout << "Nhap ten dinh: ";
	cin >> vertexName;

	int vertexIndex = findVerTexByName(n, vertexName);
		if (vertexName == -1) {
			cout << "Khong tim thay dinh co ten " << vertexName;
			return;
		}
		cout << "Cac dinh ke voi dinh " << vertexName << " la: ";
		for (int j = 0; j < n; j++)
		{
			if (a[vertexIndex][j] == 1)
			{
				cout << vertex[j] << "\t";
			}
		}
		cout << endl;
}					

// danh sach ke
struct Node {
	int info;
	Node* link;
};
Node* first[MAX];
// so dinh do thi
void init() {
	for (int i = 0; i < n; i++)
		first[i] = NULL;
}
Node* createNode(int x) {
	Node* p = new Node;
		p->info = x;
		p->link = NULL;
		return p;
}
void insert_first(Node* &f,int x) {
	Node* p = createNode(x);
	if (!p) return;
	if (f == NULL) f = p;
	else
	{
		p->link = f;
		f = p;
	}
}
void inputList() {
	do {
		cout << "Nhap so luong dinh cua do thi: ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	init();
	// Nhap ten cac dinh cua do thi vao ma tran vertex
	cout << "Nhap ten cac dinh cua do thi : ";
	for (int i = 0; i < n; i++)
		cin >> vertex[i];
	for (int i = 0; i < n; i++) {
		// dua dinh dang xet vao ds ke
		insert_first(first[i], i);
		// dua tung dinh ke vao danh sach ke
		int x;
		cout << "Nhap cac dinh ke voi " << i << " (muon dung thi nhan -1): ";
		while (cin >> x)
		{
			if (x == -1)
				break;
			insert_first(first[i], x);
		}
			
	}
} 
void outputList() {
	for (int i = 0; i < n; i++)
	{
		cout << "Danh sach ke thu " << vertex[i] << " : ";
		Node* q = first[i];
		while (q->link != NULL)
		{
			cout << vertex[q->info] << " ";
			q = q->link;
		}
		cout << endl;
	}
}
/*void inputListFromFile();
void output1(int x);*/ // xuat cac dinh ke voi dinh x

//stack
Node* st; 
void init_Stack()
{
	st = NULL;
}
bool isEmpty_Stack()
{
	if (st == NULL)
		return true; 
	return false;
}
void push_Stack(int s)
{
	Node* p = new Node;
	if (p == NULL) return;
	p->info = s;
	p->link = st;
	st = p;
}
void pop_Stack(int& v)
{
	Node* p = st;
	v = p->info;
	st = st->link;
	delete p;
}
void output_stack()
{
	if (isEmpty_Stack())
	{
		cout << "Queue is Empty";
	}
	Node* p = st;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->link;
	}
}

// DFS
// Khoi tao cac dinh chua xet
void initEgestatus()
{
	for (int i = 0; i < n; i++) // n là số đỉnh của đồ thị
	{
		C[i] = 1; // dinh chua xet co gia tri la 1
	}
}
void DFS(int s)
{
	initEgestatus();
	init_Stack();
	push_Stack(s);
	dfs[ndfs] = s;  // phan tu thu ndsf cua ds dfs tang len mot don vi
	ndfs++;
	C[s] = 0; // dinh da duoc xet
	int v = -1, u = s; // v bat dau tu trang thai dinh ben ngoai danh sach
	// u la dirnh se xet tiep theo duoc gan bang s
	while (!isEmpty_Stack())  // Khi ds chua rong
	{
		if (v == n) // v= so luong dinh -> da duyet het cac dinh
			pop_Stack(u); // khong co dinh nao ke nen pop ds dinh da ke voi no ra
		for (v = 0; v < n; v++)
			if (a[u][v] != 0 &&
				C[v] == 1)
			{
				push_Stack(u);
				push_Stack(v);
				dfs[ndfs] = v;
				ndfs++;
				C[v] = 0;
				u = v;
				break;
			}
	}
}
void output_DFS()
{
	cout << "Ket qua duyet DFS: ";
	for (int i = 0; i < ndfs; i++)
		cout << vertex[dfs[i]] << " ";
	cout << endl;
}
void calculateByDFS(int s, int x)
{
	initEgestatus();
	init_Stack();
	push_Stack(s);
	dfs[ndfs++] = s;
	C[s] = 0; // dinh da duoc xet
	int v = -1, u = s; // v bat dau tu trang thai dinh ben ngoai danh sach
	// u la dirnh se xet tiep theo duoc gan bang s
	if (s == x) {
		cout << "Trong so 0";
		return;
	}
	int sum = 0;
	char edge = x + 'A';
	
	while (!isEmpty_Stack())  // Khi ds chua rong
	{
		if (v == n) // v= so luong dinh -> da duyet het cac dinh
			pop_Stack(u); // khong co dinh nao ke nen pop ds dinh da ke voi no ra
		for (v = 0; v < n; v++)
			if (a[u][v] != 0 && C[v] != 0)
			{
				push_Stack(u);
				push_Stack(v);
				dfs[ndfs] = v;
				sum += a[u][v];
				C[v] = 0; // đỉnh đã xét
				if (vertex[dfs[ndfs]] == edge)
				{
					cout << "Quang duong trong so: " << sum << endl;
					return;
				}
				ndfs++;
				C[v] = 0;
				u = v; // v trở thành đỉnh để xét tiếp cho vòng lặp sau
				break;
			}
	}
	cout << vertex[x] << " khong co trong do thi \n";
}
void searchByDFS(int s, int x)
{
	initEgestatus();
	init_Stack();
	push_Stack(s);
	C[s] = 0; // dinh da duoc xet
	int v = -1, u = s; // v bat dau tu trang thai dinh ben ngoai danh sach
	// u la dirnh se xet tiep theo duoc gan bang s
	cout << "Duong di tu dinh " << vertex[s] << " den dinh " << vertex[x] << " bang DFS: " << vertex[s] << " ";
	while (!isEmpty_Stack())  // Khi ds chua rong
	{
		if (v == n) // v= so luong dinh -> da duyet het cac dinh
			pop_Stack(u); // khong co dinh nao ke nen pop ds dinh da ke voi no ra
		for (v = 0; v < n; v++)
			if (a[u][v] != 0 && C[v] != 0)
			{
				push_Stack(u);
				push_Stack(v);
				dfs[ndfs] = v;
				cout << vertex[dfs[ndfs]] << " ";
				C[v] = 0; // đỉnh đã xét
				if (v == x)
				{
					cout << endl;
					cout << vertex[x] << " co trong do thi \n";
					return;
				}
				u = v; // v trở thành đỉnh để xét tiếp cho vòng lặp sau
				break;
			}
	}
	cout << vertex[x] << " khong co trong do thi \n";
}


// Queue
Node *front, *rear;
void init_Queue()
{
	front = rear = NULL;
}
bool isEmpty_Queue()
{
	if (front == NULL) return true;
	return false;
}
void push_Queue(int x) {
	Node* p = new Node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
}
void pop_Queue(int &x) {
	if (front != NULL)
	{
		Node* p = front;
		x = p->info;
		front = front->link;
		if (front == NULL)
			rear = NULL;
		delete p;
	}
}
void ouput_Queue() {
	if (isEmpty_Queue())
	{
		cout << "Queue is Empty";
	}
	Node* p = front;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->link;
	}
}

//BFS
void BFS(int v) // v là đỉnh bắt đầu
{
	initEgestatus();
	init_Queue();
	int w, p;
	push_Queue(v);
	C[v] = 0;
	while (front != NULL) {
		pop_Queue(p);
		bfs[nbfs] = p;
		nbfs++;
		for (w = 0; w < n; w++)
			if (C[w] && a[p][w] == 1)
			{
				push_Queue(w);
				C[w] = 0;
			}
	}
}
// Search vertex from graph by BFS
void searchByBFS(int s, int x) // s -> dinh bat dau/ x-> dinh can tim
{
	initEgestatus();
	init_Queue();
	nbfs = 0;
	push_Queue(s);
	C[s] = 0;
	while (!isEmpty_Queue()) {
		int p;
		pop_Queue(p);
		if (p == x)
		{
			cout << vertex[x] << " co trong do thi \n";
			// xuat duong di tu s -> x
			cout << "Duong di tu dinh " << vertex[s] << " den dinh " << vertex[x] << " trong bang BFS la: ";
			for (int j = 0; j < nbfs; j++)
				cout << vertex[bfs[j]] << " ";
			cout << endl;
			return;
		}
		bfs[nbfs++] = p;
		for (int i = 0; i < n; i++)
		{
			if (C[i] == 1 && a[p][i] == 1)
			{
				push_Queue(i);
				C[i] = 0;
			}
		}
	}
	cout << vertex[x] << " khong co trong do thi \n";
}
void output_BFS()
{
	cout << "Ket qua duyet BFS: ";
	for (int i = 0; i < nbfs; i++)
		cout << vertex[bfs[i]] << " ";
	cout << endl;
}
int main()
{
	/*
	inputFromFile(a, n);
	output(a, n);
	getWeights(a, n);*/

	//inputList();
	//outputList();


	//inputFromFile(a, n);
	//cout << "Ma tran ke \n";
	//output(a, n);
	/*DFS(0);
	output_DFS();*/

	//BFS(0);
	//output_BFS();
	//searchByBFS(0, 4);

	//cout << "\n :::::: \n";
	//searchByDFS(3, 4);
	//cout << "\n :::::: \n";
	//calculateByDFS(3, 4);
}