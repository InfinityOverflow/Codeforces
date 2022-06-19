/*#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* next;
        node(int a)
        {
           data=a;
           next=NULL;
        }
};
void AddAtTail(int v,node* &head)
{
    node* n= new node(v);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void printList(node* head)
{
    while(head!=NULL)
    {
        int r=head->data;
        cout<<r;
        head=head->next;
    }
}
void DelNode(node* prev)
{
    node*temp=prev->next;
    prev->next=temp->next;
}
int main()
{
    node*head=NULL;
    AddAtTail(1,head);
    AddAtTail(2,head);
    AddAtTail(3,head);
    AddAtTail(4,head);
    printList(head);
    DelNode(head);
    cout<<endl;
    printList(head);
}*/
/* C++ Program to implement a stack
that supports findMiddle() and
deleteMiddle in O(1) time */
#include <bits/stdc++.h>
using namespace std;

class myStack
{
	struct Node
	{
		int num;
		Node *next;
		Node *prev;

		Node(int num)
		{
			this->num = num;
		}
	};

	//Members of stack
	Node *head = NULL;
	Node *mid = NULL;
	int size = 0;

public:
	void push(int data)
	{
		Node *temp = new Node(data);
		if (size==0)
		{
			head = temp;
			mid = temp;
			size++;
			return;
		}

		head->next = temp;
		temp->prev = head;

		//update the pointers
		head = head->next;
		if (size%2==1)
		{
			mid = mid->next;
		}
		size++;
	}

	void pop()
	{
		if (size!=0)
		{
			if (size==1)
			{
				head = NULL;
				mid = NULL;
			}
			else
			{
				head = head->prev;
				head->next = NULL;
				if (size%2==0)
				{
					mid = mid->prev;
				}
			}
			size--;
		}
	}

	int findMiddle()
	{
		if (size==0)
		{
			return -1;
		}
		return mid->num;
	}

	void deleteMiddle()
	{
		if (size!=0)
		{
			if (size==1)
			{
				head = NULL;
				mid = NULL;
			}
			else if (size==2)
			{
				head = head->prev;
				mid = mid->prev;
				head->next =NULL;
			}
			else
			{
				mid->next->prev = mid->prev;
				mid->prev->next = mid->next;
				if (size%2==0)
				{
					mid = mid->prev;
				}
				else
				{
					mid = mid->next;
				}
			}
			size--;
		}
	}
};


int main()
{
	myStack st;
	st.push(11);
	st.push(22);
	st.push(33);
	st.push(44);
	st.push(55);
	st.pop();
	st.pop();
	st.pop();
	cout<<st.findMiddle()<<endl;
	st.deleteMiddle();
	cout<<st.findMiddle()<<endl;
	return 0;
}
// This code is contributed by Nikhil Goswami
