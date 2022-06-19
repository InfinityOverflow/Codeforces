#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int top;
    int max;    
    public:
            vector<int>s;
            Stack(int size)
            {
                max=size;
                top=-1;
            }
            int pop()
                {
                if(top==-1)
                  cout<<"Stack Underflow";
                else 
                {
                    return s[top--];
                    s.pop_back();
                }
                }
            int peek()
            {
                if(top<0)
                  cout<<"Underflow"; 
                else
                  return s[top];
                return -1;
            }
            bool push(int x)
            {
                if(top<max-1)
                {
                    top++;
                    s.push_back(x);
                }
                
            }
            bool isEmpty()
            {
                if(s.size()==0)
                  return true;
                
                return false;
            }

};

int main()
{
     stack<int>s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.emplace()
     s.empty();
    
}
