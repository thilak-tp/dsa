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

	Node(int data1, Node* next1)
	{
		data = data1;
		next = next1;
	}
};
int lenghtLL(Node * head)
{
	int cnt = 0;
	Node* temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
		cnt++;
	}

	return cnt;

}
//To convert an array into a linked list
Node* convertArr2LL(vector <int> &arr)
{
	Node* head = new Node(arr[0],nullptr);
	Node* mover = head;
	for(int i=1; i < arr.size(); i++)
	{
		Node * temp = new Node(arr[i],nullptr);
 		mover->next = temp;
		mover = mover->next;
	}
	return head;

}

// To print the value of the linked list 
void printLL(Node * head)
{
	while(head != NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
}
// To insert a new head to a linked list
Node* insertHead(Node* head, int val)
{
	Node* temp = new Node(val, head);
	return temp;
}

// To delete the tail element of the Linked list
Node* deleteTail(Node* head)
{
	if(head == NULL || head->next == NULL)
		return NULL;
	Node * temp = head;
	
	while(temp->next->next != NULL)
		temp = temp->next;
	delete temp->next;
	
	temp->next = nullptr;
	
	return head;
}	

int main()
{
	
	vector<int> arr = {2, 5, 8, 7};
	Node *head = convertArr2LL(arr);	
	
	printLL(head);
	head = insertHead(head, 58);	
	cout<<"The Size is :"<<lenghtLL(head)<<endl;
	cout<<"\n";
	printLL(head);
	deleteTail(head);

	cout<<"The Size is :"<<lenghtLL(head)<<endl;
	cout<<"\n";
	printLL(head);

	cout<<"The Size is :"<<lenghtLL(head)<<endl;
	return 0;
}
