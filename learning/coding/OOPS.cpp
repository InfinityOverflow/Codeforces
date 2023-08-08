#include<iostream>
using namespace std;
class base
{
    public:
        base()
        {
            cout<<"Base"<<endl;
        }
        void display()
        {
            cout<<"Just do it"<<endl;
        }
};
class child : public base
{
    public:
       child()
       {
         cout<<"Child"<<endl;
       }
      virtual void display()
       {
         cout<<"Fuck it"<<endl;
       }
};
int main()
{
    child c;
    base b;
    child *d;
    
    
  //  b=&c;
    c.display();
    b.display();
}