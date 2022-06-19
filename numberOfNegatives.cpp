#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a;
    int n;
    cin >> n;
    for(int i =0;i<n;i++)
    {
        int r=0;
        cin>>r;
        a.push_back(r);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        c++;

    }
    cout << c;
    return 0;
}