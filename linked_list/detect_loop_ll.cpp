#include<iostream>
#include<vector>
#include<map>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::map;
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

// Here using a hashmap we detect if the node is repeated
bool detectLoop(Node* head)
{
	Node *temp = head;
	map <Node* ,int> freq;

	while(temp != nullptr)
	{
		if(freq.find(temp) != freq.end())
			return true;
		freq[temp] = 1;
		temp = temp->next;
	}

	return false;
}

// Here using the hare and tortoise algorithm we go fast and slow and see if fast and slow come across each other
bool detectLoopHare(Node *head)
{
	Node *fast = head;
	Node *slow = head;
	while(fast != nullptr && fast->next != nullptr)
	{
		fast = fast->next->next;
		slow = slow->next;
		if(slow == fast)
			return true;
		
	}

	return false;
}

int main()
{
	
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = head->next;
//	printLL(head);

	if(detectLoop(head))
		cout<<"The loop was detected"<<endl;
	else
		cout<<"The loop was not detected"<<endl;	
	if(detectLoopHare(head))
		cout<<"The loop was detected"<<endl;
	else
		cout<<"The loop was not detected"<<endl;	
	return 0;

}
