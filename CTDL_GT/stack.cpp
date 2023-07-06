#include <iostream>
using namespace std;
#define MAX 100
struct Stack {
	int a[MAX];
	int top; 
};
void init(Stack &s)
{
	s.top = -1;
}
void push(Stack &s, int x)
{
	s.a[++s.top] = x;
}
int pop(Stack &s)
{
	return s.a[s.top--];
}
bool isEmpty(Stack s) {
	return s.top < 0;
}
bool isFull(Stack s)
{
	return s.top = MAX;
}
void output(Stack s)
{
	for (int i = 0; i < s.top; i++)
	{
		cout << s.a[i] << "\t";
	}
}
void convertDecimalToBinary(int n)
{
	Stack s;
	init(s);
	while (n != 0)
	{
		push(s, n % 2);
		n /= 2;
	}
	while (isEmpty(s) == false)
	{
		cout << pop(s) << "\t";
	}
}
int main()
{
	Stack s;
	init(s);

	push(s, 10);
	push(s, 15);
	push(s, 20);
	output(s);
	cout << pop(s) << endl;
	output(s);
	push(s, 100);
	output(s);
}