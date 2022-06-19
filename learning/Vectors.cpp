#include <iostream>
#include<vector>
# define rep(i,a,b) for(int i =a; i<=b;i++)
using namespace std;
int main()
{
    vector <int> vec1;
    vector<int> vec2(3);//vector with size 3 Note use push back func with care
    rep(i,0,3)
    {
        int c;
        cin>> c;
        vec1.push_back(c);
    }
    rep(i,0,3)
    {
        cout << vec1[i] << " ";
    }
    cout << "\n";
    vector<int>::iterator pointer=vec1.begin();
    vec1.insert(pointer,25);
    rep(i,0,vec1.size()-1)
    {
        cout << vec1[i] << " ";
    }
    /*vector <int >a(2);
    a[0]=1;
    a[1]=2;
    for(auto x:a)
    {
        cout <<x<<endl;
    }
    vector <int>::iterator pointer=a.begin();
    pointer++;
    a.insert(pointer,33);
    for(auto y:a)
    {
        cout <<y<<endl;
    }*/
    return 0;
}
