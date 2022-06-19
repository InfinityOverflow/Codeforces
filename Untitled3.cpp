#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,t;
	cin >> n>> t;
	string s;
	cin >> s;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(s.at(j)=='B' && s.at(j+1)=='G')
			{
				char l=s.at(j);
				s.at(j)=s.at(j+1);
				s.at(j+1)=l;
			}
		}
	
	}
	cout << s;
	return 0; 
}
