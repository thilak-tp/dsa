#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Node{
	public:
	int data;
	Node * next;
	
	Node(int data1, Node *next1)
	{
		data = data1;
		next = next1;
	}

	Node(int data1)
	{
		data = data1;
		next = nullptr;
	}

};

// Here we use the hare and tortoise method, to calculate the middle
int optimalMiddle(Node *head)
{

	if(head == NULL || head->next == NULL)
		return -1;
	cout<<"1"<<endl;
	Node *slow = head;
 	Node *fast = head;
	
	cout<<"2"<<endl;
	while(fast != NULL && fast->next !=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		cout<<"3"<<endl;
	}
	
	cout<<"4"<<endl;
	return slow->data;
}

// The brute force way is to count the total nodes and then count till n/2+1 and print
int simpleMiddle(Node *head)
{

	if(head == NULL || head->next == NULL)
		return -1;

	int cnt=0;
	Node *temp = head;

	while(temp != NULL)
	{
		temp = temp->next;
		cnt++;
	}

	int mid = cnt/2 + 1;
	temp = head;
	while(temp != NULL)
	{
		mid = mid -1;
		if(mid == 0)
			break;
		temp = temp->next;
	}

	return temp->data;
}
int main()
{
	Node * head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	int midElement = simpleMiddle(head);
	cout<<"The middle element is "<<midElement<<endl;

	midElement = optimalMiddle(head);
	cout<<"The middle element is "<<midElement<<endl;
	return 0;
}
	
