#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,t;
	cin >> n>> t;
	char s[n];
	cin >> s;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(s[j]=='B' && s[j+1]=='G')
			{
				char l=s[j];
				s[j]=s[j+1];
				s[j+1]=l;
				j++;
			}
		}
	}
	cout << s;
	return 0; 
}
