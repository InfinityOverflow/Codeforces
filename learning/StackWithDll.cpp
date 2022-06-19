//stack implementation with Double Linklist
#include<iostream>
using namespace std;
class stack
{
    struct node
   {
      int num;
      node*prev;
      node*next;
      node(int num)
      {
         this->num=num;
      }
    };
    node*head=NULL;
    node*mid=NULL;
    int size=0;
    public:
        void push(int data)
        {
            node*temp=new node(data);
            if(size==0)
            {
                head=temp;
                mid=head;
                size++;
                return;
            }
            head->next=temp;
            temp->prev=head;
            head=head->next;
            if(size%2==1)
            {
                mid++;
            }
            size++;
        }
        void pop()
        {
            if(size==0)
            {
                cout<<"Underflow";
                return;
            }
            head=head->prev;
            node*t=head->next;
            head->next=NULL;
            free(t);
            if(size%2==0)
            {
                mid--;
            }
            size--;
        }
};

int main()
{
;
}