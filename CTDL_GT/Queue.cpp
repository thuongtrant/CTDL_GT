#include <iostream>
using namespace std;
#define MAX 5
int A[MAX];
int front = -1;
int rear = -1;
bool isEmpty()
{
	if (front == -1 && rear == -1)
		return true;
	else
		return false;
}
void enqueue(int value)
{
	if (rear == MAX - 1)
		cout << " Queue is full ";
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		A[rear] = value;
	}
}
void dequeue()
{
	if (isEmpty())
		cout << "Queue is empty";
	else
		if (front == rear)
		{
			front = rear = -1;
		}
		else
			front++;

}
void showfront()
{
	if (isEmpty())
		cout << "Queue is empty";
	else
		cout << "Element at font is: " << A[front];
}
void output()
{
	if (isEmpty())
	{
		cout << "Queue is empty";
	}
	else
	{
		for (int i = 0; i <= rear; i++)
		{
			cout << A[i] << " ";
		}
	}
}
int main() {

	enqueue(2);
	enqueue(3);
	output();
	dequeue();
	showfront();
	return 0;
}
