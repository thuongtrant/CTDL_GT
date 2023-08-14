//#include <iostream>
//using namespace std;
//struct Node {
//	Node* left;
//	Node* right;
//	int key;
//};
//void init(Node*& root)
//{
//	root = NULL;
//}
//Node* createNode(int x)
//{
//	Node* p = new Node;
//	p->key = x;
//	p->left = NULL;
//	p->right = NULL;
//	return p;
//}
//void insertNode(Node*& root, int x)
//{
//	if (root == NULL)
//		root = createNode(x);
//	else
//	{
//		Node* p = root;
//		Node* parent = NULL;
//	 	while (p != NULL && p->key != x)
//		{
//			parent = p;
//			if (p->key > x)
//				p = p->left;
//			else
//				p = p->right;
//
//		}
//			if (p == NULL)
//			{
//				p = createNode(x);
//				if (parent->key < x)
//					parent->right = p;
//				else
//					parent->left = p;
//			}
//		
//	}
//}
//void lnr(Node* root)
//{
//	if (root != NULL)
//	{
//		lnr(root->left);
//		cout << root->key << " ";
//		lnr(root->right);
//	}
//}
//void nlr(Node* root)
//{
//	if (root != NULL)
//	{
//		cout << root->key << " ";
//		nlr(root->left);
//		nlr(root->right);
//	}
//}
//void lrn(Node* root)
//{
//	if (root != NULL)
//	{
//		lrn(root->left);
//		lrn(root->right);
//		cout << root->key << " ";
//		
//	}
//}
//Node* search(Node* root, int x)
//{
//
//	Node* p = root;
//	while (p != NULL && p->key != x)
//	{
//		if (p->key > x)
//			p = p->left;
//		else
//			p = p->right;
//
//	}
//	return p;
//
//}
//void deleteNode(Node*& root, int x)
//{
//	if (root != NULL)
//	{
//		Node* p = root;
//		Node* parent = NULL;
//		while (p != NULL && p->key != x)
//		{
//			parent = p;
//			if (p->key > x)
//				p = p->left;
//			else
//				p = p->right;
//		}
//		if (p != NULL)
//		{	
//			/*Node* t;
//			if (p->right == NULL)
//				t = p->left;
//			else if (p->left == NULL)
//				t = p->right;*/
//
//			if (p->left == NULL && p->right == NULL)
//			{
//				if (parent->key > p->key)
//					parent->left == NULL;
//				else
//					parent->right = NULL;
//
//				delete p;
//			}
//			else
//			{
//				if (p->left != NULL)
//				{
//					if (parent->key > p->key)
//						parent->left = p->left;
//					else
//						parent->right = p->left;
//				}
//				else if (p->right != NULL)
//				{
//					if (parent->key > p->key)
//						parent->left = p->right;
//					else
//						parent->right = p->right;
//				}
//				delete p;
//			}
//
//		/*	if (parent->key > p->key)
//				parent->left = t;
//			else
//				parent->right = t;
//			
//			delete p;*/
//		
//		}
//	}
//}
//int main()
//{
//	Node* root;
//	init(root);
//	/*insertNode(root, 15);
//	insertNode(root, 20);
//	insertNode(root, 8);
//	insertNode(root, 40);
//	insertNode(root, 12);
//	insertNode(root, 90);
//	insertNode(root, 50);
//		lnr(root);
//	cout << endl;
//	if (search(root, 90))
//		cout << "Tim thay";
//	else
//		cout << "Khong tim thay";
//	cout << endl;
//	if (search(root, 9))
//		cout << "Tim thay";
//	else
//		cout << "Khong tim thay";
//	cout << endl;
//	deleteNode(root, 90);
//	lnr(root);*/
//	insertNode(root, 'A');
//	insertNode(root, 'L');
//	insertNode(root, 'B');
//	insertNode(root, 'T');
//	insertNode(root, 'D');
//	insertNode(root, 'E');
//	insertNode(root, 'F');
//	insertNode(root, 'W');
//	insertNode(root, 'C');
//	insertNode(root, 'O');
//	insertNode(root, 'P');
//	insertNode(root, 'R');
//	insertNode(root, 'N');
//	insertNode(root, 'G');
//	insertNode(root, 'H');
//	insertNode(root, 'M');
//	insertNode(root, 'K');
//	cout << " LNR \n";
//	lnr(root);
//	cout << endl;
//	cout << " nlr \n";
//	nlr(root);
//	cout << endl;
//	cout << " lrn \n";
//	lrn(root);
//}