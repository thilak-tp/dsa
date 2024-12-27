#include<iostream>
#include<utility>
#include<vector>
#include<bits/stdc++.h>
// In this program im solidifying my knowledge of Standard Template Libraries of C++
using std::cout;
using std::cin;
using std::endl;
using std::pair;
using std::vector;
int main()
{
	int choice = 0;

	cout<<"Choose an STL to test."<<endl;
	cout<<"1. Pairs\n2. Vectors\n3. List\n4. Stack\n5. Queue\n6. Deque\n7. Priority Queue (Max Heap)\n8. Sets\n9.  Multiset\n10. Multiset\n11. Unorderd Set\n12. Maps\n13. Multi Maps\n";
	cin>>choice;
	
	switch(choice)
	{	// For the Pair STL
		case 1:
		{
			
			pair <int,int> pair1;
			cout<<"Enter a pair of numbers to inserted into the pair"<<endl;
			cin>>pair1.first>>pair1.second;
	
			cout<<"The values of the pair are: "<<pair1.first<<" and "<<pair1.second<<endl;
			break;
		}
		
		// For the Vector STL
		case 2: 
		{
			// Declaration
			vector <int> vec;
			int value = 0;

			//push_back function to add elements to the vector
			cout<<"Enter a value to add to the vector using pushback function()"<<endl;
			cin>>value;
			vec.push_back(value);
			cout<<"Vector: "<<endl;
			for(auto it:vec)
			{
				cout<<it<<" ";
			}
			
			cout<<"\n";
			//emplace_back function to add elements to the vector
			cout<<"Enter a value to add to the vector using emplace_back()"<<endl;
			cin>>value;
			vec.emplace_back(value);
			
			for(auto it:vec)
			{
				cout<<it<<" ";
			}
				
			cout<<"\n";
			// Inserting an element inbetween a vector using insert function
			int index = 0;
			cout<<"The size of the vector is "<<vec.size()<<endl; 
			cout<<"Enter an element to be inserted into the index=1"<<endl;
			cin>>value;

			vec.insert(vec.begin()+1, value);
			cout<<"Vector:"<<endl;
			for(int i =0 ; i < vec.size(); i++)
			{
				cout<<vec[i]<<" ";
			}
			cout<<"\n";
			
			//Deleting elements using pop_back() function
			cout<<"After popping the elements in the Vector are:"<<endl;

			vec.pop_back();
			for(auto it:vec)
			{
				cout<<it<<" ";
			}
			
			cout<<"\n";
			//Deleting a specific element from the vector
			cout<<"Enter an element to erase from the vector"<<endl;
			cin>>value;
			vec.erase(find(vec.begin(), vec.end(),value));
				
			cout<<"After erasing the value value in the Vector are:"<<endl;
			for(auto it:vec)
			{
				cout<<it<<" ";
			}
			
			//Deleting a specific element from the vector
			vec.erase(find(vec.begin(), vec.end(),2));
			
			break;
		}
		default: cout<<"Invalid Choice";
	
	
	}


	return 0;
}
