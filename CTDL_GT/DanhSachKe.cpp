#include <iostream>
using namespace std;
#define MAX 100
char vertex[MAX];
int C[MAX]; // lưu trữ đỉnh chưa xét;
// 1 là chưa xét; 0 là đã xét
int dfs[MAX];// lưu danh sách phần tử đã duyệt
int ndfs = 0; // chỉ số lưu đỉnh đã xét
char vertex[MAX]; // danh sach dinh
int n;
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
	dfs[ndfs++] = s;  // phan tu thu ndsf cua ds dfs tang len mot don vi
	C[s] = 0; // dinh da duoc xet
	int u = s; // v bat dau tu trang thai dinh ben ngoai danh sach
	// u la dirnh se xet tiep theo duoc gan bang s
	Node* p = first[u];
	while (!isEmpty_Stack())  // Khi ds chua rong
	{
		if (p->link == NULL)
		{
			pop_Stack(u);
		}
		p = first[u];
		while (p->link != NULL)
		{
			if (C[p->info] == 1)
			{
				push_Stack(u);
				push_Stack(p->info);
				dfs[ndfs++] = p->info;
				C[p->info] = 0;
				u = p->info;
				break;
			}
			p = p->link;
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
int main()
{
	init();
	inputList();
	outputList();
	DFS(0);
	output_DFS();
}