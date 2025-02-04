#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// A node of a lisnked list
class Node{
	public:
	int data;
	Node* next;

	Node(int data1)
	{
		data = data1;
		next = nullptr;
	}
	Node(int data1, Node* next1)
	{
		data = data1;
		next = next1;
	}
};

// To print the value of the linked list 
void printLL(Node * head)
{
	while(head != NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
}

Node* reverseLL(Node * head)
{
	Node* prev = NULL;
	Node* temp = head;
	
	while(temp != NULL)
	{
		Node* front = temp->next;
		temp->next = prev;
		prev = temp;
		temp = front;
		
	}

	return prev;
}
int main()
{
	
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	printLL(head);
	cout<<"Reversed link is "<<endl;
	Node* rev = reverseLL(head);
	printLL(rev);
	return 0;

}
