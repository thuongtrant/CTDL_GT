//#include <iostream>
//#include <string>
//using namespace std;
//
//struct HocVien {
//	int maHv;
//	string tenHV;
//	int namSinh;
//
//};
//struct NodeHv{
//	HocVien hv;
//	NodeHv* next;
//};
//void outputHV(HocVien x) {
//	cout << "Ma hoc vien: " << x.maHv << endl;
//	cout << "Ten hoc vien: " << x.tenHV << endl;
//	cout << "Nam Sinh: " << x.namSinh << endl;
//}
//NodeHv* createNode(HocVien x)
//{
//	NodeHv* p = new NodeHv;
//	p->hv = x;
//	p->next = NULL;
//	return p;
//}
//void addFirst(NodeHv*& head, HocVien x)
//{
//	NodeHv* p = createNode(x);
//	p->next = head;
//	head = p;
//}
//void output(NodeHv* head)
//{
//	NodeHv* p = head;
//	while (p != NULL)
//	{
//		outputHV(p->hv);
//		p = p->next;
//	}
//}
//int main() 
//{
//	HocVien h1;
//	cout << "Ma HV: ";
//	cin >> h1.maHv;
//	cin.ignore();
//	cout << "Ten HV: ";
//	getline(cin, h1.tenHV);
//	cout << "Nam sinh:";
//	cin >> h1.namSinh;
//	HocVien h2;
//	cout << "Ma HV: ";
//	cin >> h2.maHv;
//	cin.ignore();
//	cout << "Ten HV: ";
//	getline(cin, h2.tenHV);
//	cout << "Nam sinh:";
//	cin >> h2.namSinh;
//	NodeHv* head;
//	addFirst(head, h1);
//	cout << " ====== ";
//	addFirst(head, h2);
//	output(head);
//}