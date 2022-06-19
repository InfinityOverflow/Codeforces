#include<iostream>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;i++)
void display(vector<int> &p)
{
    rep(i,0,p.size()-1)
    {
       cout<< p.at(i);
    }
}
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    cout << endl;
    vector<int> a(size);
    for(int i=0;i<size;i++)
    {
        cout << "Enter the elements " << endl;
        cin >>a.at(i); 
    }
    display(a);
    int start=0,end=0;
    
    return 0;
}